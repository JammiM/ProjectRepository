#include "WindowManager.h"

int _winPosX = 500;
int _winPosY = 500;
int _winWidth = 300;
int _winHeight = 400;

WindowManager::WindowManager() {
}//WindowManager

WindowManager::WindowManager(int _winPosX, int _windowPositionY, int _windowWidth, int _windowHeight) {
	this->windowPositionX = _winPosX;
    this->windowPositionY = _winPosY;	
    this->windowWidth = _winWidth;
    this->windowHeight = _winHeight;
}//WindowManager

WindowManager::~WindowManager() {
	glutDestroyWindow(1);
}


void uResize(int _width, int _height) {
	glViewport(0,0,(GLsizei)_width,(GLsizei) _height);
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(60, (GLfloat)_width / (GLfloat)_height, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
	}//resizeWindow


void Rrender() {
    glClearColor(1.0f,1.0f,0.0f,1.0f);
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glFlush();
}//resizeWindow


void WindowManager::run() {
	//resizeWindow(_winWidth,_winHeight);
	//glutReshapeFunc(resizeWindow(_winWidth,_winHeight));
	//glutDisplayFunc(updateWindow);

	/*
	glutDisplayFunc();
	glutIdleFunc();
	glutReshapeFunc();
	glutKeyboardFunc();
	*/

	//glutMouseFunc(mouseHandler);
	//glutDisplayFunc(render());

	//glutDisplayFunc(*render());
	//glutDisplayFunc(WindowManager::render());
	//glutReshapeFunc(void *resizeWindow(_width,_height));
	//glutDisplayFunc(void render());
	//glutDisplayFunc(void (render()));
	
	//glutDisplayFunc(ren

  //glutDisplayFunc(void (* callback)( void ) );
	//glutDisplayFunc(Rrender);
    render();
	

	glutSwapBuffers();

	glutMainLoop();	
}

void WindowManager::initialiseWindow() {
	glutInit(&__argc,&*__argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	//glutInitContextProfile(GLUT_CORE_PROFILE );
    //glutInitContextFlags(GLUT_DEBUG);
	//glutInitContextVersion (2, 0);
	glutInitWindowPosition(_winPosX,_winPosY);
    glutInitWindowSize(_winWidth,_winHeight);
	glutCreateWindow("Test");
	
	//printf("The OpenGL version: %s\n", glGetString(GL_VERSION));
	//printf("\nThe Vendor: %s\n", glGetString(GL_VENDOR));
	//printf("\nThe Renderer: %s\n", glGetString(GL_RENDERER));
	//printf("\nThe GLSL shading language version: %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));

}//initialiseWindow

void WindowManager::render() {
    glClearColor(1.0f,1.0f,0.0f,1.0f);
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glFlush();
}//resizeWindow

void WindowManager::setupGlew() {
	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (glewIsSupported("GL_VERSION_2_0")){
		printf("\nGlew is running fine.");
	} else if(GLEW_OK != err) {
		cout <<"glewInit failed, aborting."<< endl;
		exit (1);
	} 	else {
		printf("OpenGL 2.0 is not working\n");
		exit(1);
	}
}//setupGlew

void WindowManager::resizeWindow(int _winWidth, int _winHeight) {
	glViewport(0,0,(GLsizei)_winWidth,(GLsizei) _winHeight);
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(45, (GLfloat)_winWidth / (GLfloat)_winHeight, 1.0, 200.0);
    glMatrixMode(GL_MODELVIEW);
	}//resizeWindow

void WindowManager::InputHandler() {}

void WindowManager::updateWindow() {
}

void WindowManager::mouseHandler(int theButton, int theState, int x, int y) {
     switch (theButton) {
        case GLUT_LEFT_BUTTON:
            if (theState == GLUT_DOWN) {
                fprintf(stderr,"left btn pressed\n");
            } else if (theState == GLUT_UP) {
                fprintf(stderr,"left btn released\n");
            }
            break;

        case GLUT_MIDDLE_BUTTON:
            break;

        case GLUT_RIGHT_BUTTON:
            break;
    };
}