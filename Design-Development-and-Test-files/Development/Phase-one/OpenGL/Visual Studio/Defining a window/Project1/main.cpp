#include <glew.h>
#include <freeglut.h>
#include <iostream>

using namespace std;

void resizeViewport(int width, int height){
	glViewport(0, 0, width, height);
}//changeViewport


void updateRenderer(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}//render


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH  );
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Hello OpenGL");
	glutReshapeFunc(resizeViewport);
	glutDisplayFunc(updateRenderer);


	
	//glewExperimental = TRUE;

	GLenum test = glewInit();
	if (test != GLEW_OK)
	{
		fprintf(stderr, "failed %s\n", glewGetErrorString(test));
		return 1;
	}



	//glClearColor(0, 0, 0, 0);
	glutMainLoop();
}





 
