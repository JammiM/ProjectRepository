#include <iostream>
#include <windows.h>
#include <glew.h>
#include <glut.h>


using namespace std;

float f[]={0,2,-4,-2,-2,-4,2,-2,-4};
float fk[]={0,2,-4,   1,0,0,   -2,-2,-4,  0,1,0,     2,-2,-4, 0,0,1       };// with color


GLuint vboId;



void initializeRendering(void);
void keyboardInputHandler(unsigned char c, int x, int y);
void mouseInputHandler(int button, int state, int x,int y);


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB );
	glutInitWindowSize(600,600);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Hello OpenGL");


	glutDisplayFunc(initializeRendering);
	glutKeyboardFunc(keyboardInputHandler);
	glutMouseFunc(mouseInputHandler);

	glutMainLoop();

}//main















void initializeRendering(void){
	glClearColor(0,0,0,1);
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glGenBuffers(1,&vboId);
	glBindBuffer(GL_ARRAY_BUFFER,vboId);
	glBufferData(GL_ARRAY_BUFFER,sizeof(f), f, GL_STATIC_DRAW);

	/*
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5,-0.5);
	glVertex2f(0.5,-0.5);
	glVertex2f(0,0.5);
	glEnd();
	*/
	glEnableClientState(GL_VERTEX_ARRAY);
//	glEnableClientState(GL_COLOR_ARRAY);
//	glVertexPointer(3,GL_FLOAT,3,f);

	glVertexPointer(3,GL_FLOAT,6*sizeof(float),f);
//	glColorPointer(3,GL_FLOAT,6*sizeof(float),&fk[3]);



	glDrawArrays(GL_TRIANGLES,0,3);

	

//	glDisableClientState(GL_COLOR_ARRAY);
	glDisableClientState(GL_VERTEX_ARRAY);

	glutSwapBuffers();
}


void keyboardInputHandler(unsigned char c, int x, int y){
	if(c== 27){
		exit(0);
	}
}


void mouseInputHandler(int button, int state, int x,int y){
	if(button == GLUT_RIGHT_BUTTON){
		exit(0);
	}

}