#include "WindowManager.h"

WindowManager::WindowManager() {
}

WindowManager::~WindowManager() {
	glutDestroyWindow(1);
}

void WindowManager::run() {
	glutMainLoop();	
}

void WindowManager::initialiseWindow() {
	glutInit(&__argc,&*__argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
	glutCreateWindow("Test");
    glClearColor(1.0,1.0,1.0,1.0);

	/*
	glutDisplayFunc();
	glutIdleFunc();
	glutReshapeFunc();
	glutKeyboardFunc();
	*/
	setupGlew();
}//initialiseWindow

void WindowManager::render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}//resizeWindow


void WindowManager::setupGlew() {

	GLenum err = glewInit();

	if (glewIsSupported("GL_VERSION_2_0")){
		printf("Running OpenGL 2.0\nEverything is running fine");
	} else {
		printf("OpenGL 2.0 is not working\n");
		exit(1);
	}

	if(GLEW_OK != err) {
		cout <<"glewInit failed, aborting."<< endl;
		exit (1);
	}
}//setupGlew