#include "WindowManager.h"

#pragma region variables

int _winPosX = 500;
int _winPosY = 100;
int _winWidth = 600;
int _winHeight = 600;

#pragma endregion globals

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

void WindowManager::run() {
	glutDisplayFunc(render);
	glutReshapeFunc(resizeWindow);
	glutMouseFunc(mouseHandler);
	//glutIdleFunc(updateWindow);
	glutKeyboardFunc(InputHandler);
	glutTimerFunc( 1, updateWindow, 1 );
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

void WindowManager::render() {
    glClearColor(0.0f,0.0f,0.0f,1.0f);
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	glEnable( GL_CULL_FACE );
	glLoadIdentity();
	glTranslatef( 0.0f, 0.0f, -10.0f );
	static float	fRotAngle = 0.0f;
	glRotatef( fRotAngle, 0.0f, 1.0f, 0.0f );
	fRotAngle	+= 0.5f;
	glutWireCube( 1.0 );
	glutSwapBuffers();
	glFlush();
}//resizeWindow

void WindowManager::resizeWindow(int _winWidth, int _winHeight) {
	glViewport(0,0,(GLsizei)_winWidth,(GLsizei) _winHeight);
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(45, (GLfloat)_winWidth / (GLfloat)_winHeight, 1.0, 50.0);
    glMatrixMode(GL_MODELVIEW);
}//resizeWindow

void WindowManager::InputHandler( unsigned char _key, int x, int y ) {
    switch ( _key )
    {
        case VK_ESCAPE:
            exit( 0 );
            break;
    }
}//InputHandler

void WindowManager::updateWindow(int _clicker) {
	glutPostRedisplay();
	glutTimerFunc( 1, updateWindow, _clicker );
}//updateWindow

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
			if (theState == GLUT_DOWN) {
                fprintf(stderr,"mid btn pressed\n");
            } else if (theState == GLUT_UP) {
                fprintf(stderr,"mid btn released\n");
            }
            break;

        case GLUT_RIGHT_BUTTON:
			if (theState == GLUT_DOWN) {
                fprintf(stderr,"rt btn pressed\n");
            } else if (theState == GLUT_UP) {
                fprintf(stderr,"rt btn released\n");
            }
            break;
    };
}//mouseHandler