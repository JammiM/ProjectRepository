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
//For OpenGL v3 and above this call is need to specify the version type.
//glutInitContextVersion (2, 0);
//	glutInitContextProfile (GLUT_CORE_PROFILE );
//glutInitContextFlags(GLUT_DEBUG);
	glutInitDisplayMode(GLUT_SINGLE);
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