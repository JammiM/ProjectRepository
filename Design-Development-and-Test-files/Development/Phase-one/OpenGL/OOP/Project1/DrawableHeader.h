#include <iostream>
#include <string>
#include <freeglut.h>
#include "ObjectHeader.h"

using namespace std;

#ifndef DRAWABLEHEADER_H
#define DRAWABLEHEADER_H

class Drawable : Object {
private:
	string id;
	GLint verticesArray[];
	GLint elementArrary[]; 
	
public:
	string getId() {return id;}
	GLint getVertices() {return vertices[0];}
    void getClass() { cout << " is an drawable object." << endl; }
	

	Drawable();
	Drawable(string, GLint);
	~Drawable();

	//glDrawArrays()
	void Draw(GLenum mode, GLint first, GLsizei count) {
		
		//Cube.Draw(GL_TRIANGLES, 0, 3 );
			GLenum mode = mode;
			GLint first = first;
			GLsizei count =  count;
		
	}//Draw
	

    //glDrawElements()
	void Draw(GLenum mode, GLsizei count,GLenum type, const GLvoid * indices) {
		
		
		
	}//Draw
		
			
	void toString();
};

#endif






