// OpenSG Tutorial Example: Simple Geometry
//
// This example shows how to built a simple Geometry NodeCore.
//
// It also shows how to manipulate the geometry and what to watch out for. This
// is done in the display() function.
//

// Headers
#include <OpenSG/OSGGLUT.h>
#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSimpleGeometry.h>
#include <OpenSG/OSGGLUTWindow.h>
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGBaseFunctions.h>
#include <OpenSG/OSGTransform.h>
#include <OpenSG/OSGGroup.h>

// New headers: 

// the geometry node core
#include <OpenSG/OSGGeometry.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The pointer to the transformation
TransformPtr trans;

// The pointer to the geometry core
GeometryPtr geo;


// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

// forward declaration so we can have the interesting stuff upfront
int setupGLUT( int *argc, char *argv[] );

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // GLUT init
    int winid = setupGLUT(&argc, argv);

    // the connection between GLUT and OpenSG
    GLUTWindowPtr gwin= GLUTWindow::create();
    gwin->setId(winid);
    gwin->init();

    // create the scene
     
    /*
        Geometry data in OpenSG is stored in several separate vectors.
        
        These vectors are not a direct part of the Geometry Core but
        rather split up into multiple separate classes.
        
        These classes, the GeoProperties, contain a single field containg
        their values, which can be accessed directly, see the docs for
        GeoProperty for the whole interface.
    */
    
    /*
        The first part: the primtive types.
        These are taken from OpenGL, any values that can be passed to
        glBegin(); are legal. Different types can be freely mixed.
        
        All properties have only one field, which has the same name for every
        property, thus the mask is also called the same for each property.
    */
    GeoPTypesPtr type = GeoPTypesUI8::create();        
    beginEditCP(type, GeoPTypesUI8::GeoPropDataFieldMask);
    {
        type->addValue(GL_POLYGON  );
        type->addValue(GL_TRIANGLES);
        type->addValue(GL_QUADS    );
    }
    endEditCP  (type, GeoPTypesUI8::GeoPropDataFieldMask);
    
    /*
        The second part: the primtive lengths.
        These define the number of vertices to be passed to OpenGL for each
        primitive. Thus there have to be at least as many entries as in the
        types property.
    */
    GeoPLengthsPtr lens = GeoPLengthsUI32::create();    
    beginEditCP(lens, GeoPLengthsUI32::GeoPropDataFieldMask);
    {
        lens->addValue(4);
        lens->addValue(6);
        lens->addValue(8);
    }
    endEditCP  (lens, GeoPLengthsUI32::GeoPropDataFieldMask);
       
    /*
        The third part: the vertex positions.
        
        OpenSG uses different types for vectors and points.
        
        Points (e.g. Pnt3f) are just positions in space, they have a limited
        set of operations they can handle. Vectors (e.g. Vec3f) are the more
        general kind.
    */
    GeoPositions3fPtr pnts = GeoPositions3f::create();
    beginEditCP(pnts, GeoPositions3f::GeoPropDataFieldMask);
    {
        // the 4 points of the polygon
        pnts->addValue(Pnt3f(-1, -1, -1));
        pnts->addValue(Pnt3f(-1, -1,  1));
        pnts->addValue(Pnt3f( 1, -1,  1));
        pnts->addValue(Pnt3f( 1, -1, -1));

        // the 6 points of the two triangles
        pnts->addValue(Pnt3f( 1,  0, -1));
        pnts->addValue(Pnt3f(-1,  0, -1));
        pnts->addValue(Pnt3f( 0,  1, -1));

        pnts->addValue(Pnt3f(-1,  0,  1));
        pnts->addValue(Pnt3f( 1,  0,  1));
        pnts->addValue(Pnt3f( 0,  1,  1));

        // the 8 points of the two quads
        pnts->addValue(Pnt3f(-1,  -1,  1));    
        pnts->addValue(Pnt3f( 1,  -1,  1));    
        pnts->addValue(Pnt3f( 1,   0,  1));    
        pnts->addValue(Pnt3f(-1,   0,  1));    

        pnts->addValue(Pnt3f( 1,  -1, -1));    
        pnts->addValue(Pnt3f(-1,  -1, -1));    
        pnts->addValue(Pnt3f(-1,   0, -1));    
        pnts->addValue(Pnt3f( 1,   0, -1));    
    }
    endEditCP  (pnts, GeoPositions3f::GeoPropDataFieldMask);
   
    /*
       Put it all together into a Geometry NodeCore.
    */
    geo=Geometry::create();
    beginEditCP(geo, Geometry::TypesFieldMask     |
                     Geometry::LengthsFieldMask   |
                     Geometry::PositionsFieldMask |
                     Geometry::MaterialFieldMask  );
    {
        geo->setTypes    (type);
        geo->setLengths  (lens);
        geo->setPositions(pnts);

        // assign a material to the geometry to make it visible. The details
        // of materials are defined later.
        geo->setMaterial(getDefaultUnlitMaterial());   
    }
    endEditCP  (geo, Geometry::TypesFieldMask     |
                     Geometry::LengthsFieldMask   |
                     Geometry::PositionsFieldMask |
                     Geometry::MaterialFieldMask  );
    
    // put the geometry core into a node
    NodePtr n = Node::create();
    beginEditCP(n, Node::CoreFieldMask);
    {
        n->setCore(geo);
    }
    endEditCP  (n, Node::CoreFieldMask);
    
    // add a transformation to make it move     
    NodePtr scene = Node::create();  
    trans = Transform::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask  );
    {
        scene->setCore(trans);
        scene->addChild(n);
    }
    endEditCP  (scene, Node::CoreFieldMask | Node::ChildrenFieldMask  );
 

    // create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // tell the manager what to manage
    mgr->setWindow(gwin );
    mgr->setRoot  (scene);

    // show the whole scene
    mgr->showAll();

    // GLUT main loop
    glutMainLoop();

    return 0;
}

//
// GLUT callback functions
//

// redraw the window
void display( void )
{
    // create the matrix
    Matrix m;
    Real32 t = glutGet(GLUT_ELAPSED_TIME );
    
    m.setTransform(Quaternion( Vec3f(0,1,0), 
                               t / 1000.f));
    
    // set the transform's matrix
    beginEditCP(trans, Transform::MatrixFieldMask);
    {
        trans->setMatrix(m);
    }   
    endEditCP  (trans, Transform::MatrixFieldMask);
   
    /*
        Manipulate the geometry.
        
        The OpenSG geometry structure is pretty flexible.
        
        The disadvantage of all this flexibility is that it can be hard to
        write generic tools, as pretty much all the used types can be one of a
        number of variants.
        
        To simplify that, every kind of GeoProperty has a generic type, e.g.
        the generic type for positions is Pnt3f, for colors it's Color3f.
        
        No matter the internal data representation looks like, all
        GeoProperties have the generic interface. As does the abstract parent
        class of every kind of property. Thus it's possible to access the data
        of an arbitrary geometry using the generic interface.
    */
    
    // note that this is the abstract parent class, it doesn't have a specific
    // type
    GeoPositionsPtr pos = geo->getPositions();
    
    beginEditCP(pos);
    for(UInt32 i = 0; i < pos->getSize(); i++)
    {
        Pnt3f p;      
        pos->getValue(p, i);
        
        p[0] += osgsin(t / 300) * p[1] / 100;
        p[1] += osgsin(t / 300) * p[2] / 100;
        p[2] += osgsin(t / 300) * p[0] / 100;
        
        pos->setValue(p, i);
    }
    endEditCP  (pos);
    
    // right now the geometry doesn't notice changes to the properties, it has
    // to be notified explicitly
    beginEditCP(geo, Geometry::PositionsFieldMask);
    endEditCP  (geo, Geometry::PositionsFieldMask);
    
    mgr->redraw();
}

void update(void)
{
    glutPostRedisplay();
}

// react to size changes
void reshape(int w, int h)
{
    mgr->resize(w, h);
    glutPostRedisplay();
}

// react to mouse button presses
void mouse(int button, int state, int x, int y)
{
    if (state)
        mgr->mouseButtonRelease(button, x, y);
    else
        mgr->mouseButtonPress(button, x, y);
        
    glutPostRedisplay();
}

// react to mouse motions with pressed buttons
void motion(int x, int y)
{
    mgr->mouseMove(x, y);
    glutPostRedisplay();
}

// react to keys
void keyboard(unsigned char k, int x, int y)
{
    switch(k)
    {
        case 27:    
        {
            OSG::osgExit();
            exit(0);
        }
        break;
    }
}

// setup the GLUT library which handles the windows for us
int setupGLUT(int *argc, char *argv[])
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    
    int winid = glutCreateWindow("OpenSG");
    
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    // call the redraw function whenever there's nothing else to do
    glutIdleFunc(update);

    return winid;
}
