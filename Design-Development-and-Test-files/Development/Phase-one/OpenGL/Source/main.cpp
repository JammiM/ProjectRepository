#include <iostream>

#include <windows.h>

#include <glew.h>

#include <glut.h>

#include "math.h"

using namespace std;


static GLuint render_vbo;

static void render_callback(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, render_vbo);
	glVertexAttribPointer(0,3,GL_FLOAT, GL_FALSE, 0,0);
	glDrawArrays(GL_POINTS,0,1);
	glDisableVertexAttribArray(0);
	glutSwapBuffers();
}

static void render_prepare(void){
	vec3 verts[1];
	verts[0] = vec3(0,0,0);
	glGenBuffers(1,&render_vbo);//number of objects, address of unsigned ints
	glBindBuffer(GL_ARRAY_BUFFER, render_vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA );
	glutInitWindowSize(600,600);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Hello OpenGL");
	glutDisplayFunc(&render_callback);
	
	glewExperimental = TRUE;
	GLenum test = glewInit();
	if(test != GLEW_OK)
	{
		fprintf(stderr, "failed %s\n", glewGetErrorString(test));
		return 1;
	}



	glClearColor(0,0,0,0);
	glutMainLoop();
}