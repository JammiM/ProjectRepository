//This simple class is used to define a specific version of OpenGL
//The specific version is 2.0.

#include <GL/freeglut.h>

using namespace std;

int  main ()
{
	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (GLEW_OK != err){
	    std::cerr<<"Error: "<<glewGetErrorString(err)<<std::endl;
	} else {
	    if (GLEW_VERSION_2_0)
	    {
	        std::cout<<"Driver supports OpenGL 2.0\nDetails:"<<std::endl;
	    }
	}

	glutInit(&__argc,__argv);
	glutInitDisplayMode(GLUT_SINGLE);
    glutInitContextVersion(2,0);  
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("OpenGL Version Test");
	glutDisplayFunc(display);
	glutMainLoop();

    return 1;
}



//glGetString​(GL_VENDOR​);// vendor name
//glGetString​(GL_VERSION​);
//glGetString​(GL_RENDERER​);
//glGetString​(GL_SHADING_LANGUAGE_VERSION​​);