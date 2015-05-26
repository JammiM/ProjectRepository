#include "WindowManager.h"

int _winPosX = 500;
int _winPosY = 500;
int _winWidth = 300;
int _winHeight = 400;

WindowManager::WindowManager() {
}//WindowManager

WindowManager::WindowManager(int _windowPositionX, int _windowPositionY, int _windowWidth, int _windowHeight) {
	_windowPositionX = _winPosX;
    _windowPositionY = _winPosY;	
    _windowWidth = _winWidth;
    _windowHeight = _winHeight;
}//WindowManager

WindowManager::~WindowManager() {
	glutDestroyWindow(1);
}

void WindowManager::run() {
	glutMainLoop();	
}

void WindowManager::initialiseWindow() {
	glutInit(&__argc,&*__argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitContextProfile(GLUT_CORE_PROFILE );
    glutInitContextFlags(GLUT_DEBUG);
	glutInitContextVersion (2, 0);
	glutInitWindowPosition(_winPosX,_winPosY);
    glutInitWindowSize(_winWidth,_winHeight);
	glutCreateWindow("Test");
    glClearColor(1.5,0.0,0.0,1.0);
	
	printf("The OpenGL version: %s\n", glGetString(GL_VERSION));
	printf("\nThe Vendor: %s\n", glGetString(GL_VENDOR));
	printf("\nThe Renderer: %s\n", glGetString(GL_RENDERER));
	printf("\nThe GLSL shading language version: %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));



	
	/*
	glutDisplayFunc();
	glutIdleFunc();
	glutReshapeFunc();
	glutKeyboardFunc();
	*/
	setupGlew();
	//glutDisplayFunc(render());

	
	
	render();
}//initialiseWindow

void WindowManager::render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}//resizeWindow

void WindowManager::setupGlew() {
	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (glewIsSupported("GL_VERSION_2_0")){
		printf("\nRunning OpenGL 2.0\nEverything is running fine.");
	} else {
		printf("OpenGL 2.0 is not working\n");
		exit(1);
	}

	if(GLEW_OK != err) {
		cout <<"glewInit failed, aborting."<< endl;
		exit (1);
	}
}//setupGlew

void WindowManager::resizeWindow() {}

void WindowManager::InputHandler() {}

void WindowManager::updateWindow() {}