#include <GL/glew.h>
#include <GL/freeglut.h> 
#include <iostream>

using namespace std;

void display(void) {
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f); 
	glClear(GL_COLOR_BUFFER_BIT); 
	glLoadIdentity(); 
	glFlush(); 
}//display

int main(int argc, char **argv) {
	glutInit(&argc, argv); 
	glutInitContextVersion(3, 0);// Target specfic version
	glutInitContextFlags(GLUT_FORWARD_COMPATIBLE);// | GLUT_DEBUG);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
//	glutInitContextProfile(GLUT_CORE_PROFILE);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500); 
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Window");

	printf("\nThe OpenGL version: %s\n", glGetString(GL_VERSION));
	printf("The Vendor: %s\n", glGetString(GL_VENDOR));
	printf("\nThe Renderer: %s\n", glGetString(GL_RENDERER));
	printf("\nThe GLSL shading language version: %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));
	//printf("\nThe extension available: %s\n", glGetString(GL_EXTENSIONS));
	//GLint major, minor;
	//glGetIntegerv(GL_MAJOR_VERSION, &major);
	//glGetIntegerv(GL_MINOR_VERSION, &minor);
	//printf("\nGL Version : %d.%d\n", major, minor);

	glutDisplayFunc(display); 

	glutMainLoop();
}//main