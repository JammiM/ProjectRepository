#include "WindowManager.h"


WindowManager::WindowManager()
{
}

WindowManager::~WindowManager()
{
	glutDestroyWindow(1);
}

void WindowManager::run() {
	glutMainLoop();	
}

void WindowManager::initialiseWindow() {
	glutInit(&__argc,&*__argv);
	glutCreateWindow("Test");
	glutInitWindowPosition(800,80);
    glutInitWindowSize(9,70);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);

	GLenum err = glewInit();
	if(GLEW_OK != err){
		cout <<"glewInit failed, aborting."<< endl;
	exit (1);
	}
}//initialiseWindow