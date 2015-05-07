#include <iostream>
#include <string>
#include <freeglut.h>
#include "Object.h"

using namespace std;

#ifndef DRAWABLEHEADER_H
#define DRAWABLEHEADER_H

class Drawable : Object {
private:
	int id;
public:
	int getId() {return id;}
    void getClass() { cout << " is an drawable object." << endl; }
	

	Drawable();
	Drawable(int, GLint);
	~Drawable();

	//glDrawArrays()
	virtual void Draw(GLenum mode, GLint first, GLsizei count) {
		glDrawArrays(mode,first,count);
	}//Draw
	
/*
    //glDrawElements()
	virtual void Draw(GLenum mode, GLsizei count,GLenum type, const GLvoid * indices) {
		this -> mode = mode; 
		this -> count = count;
		this -> type = type;
		this -> GLvoid * indices
	}//Draw
	*/	
			
	void toString();
};

#endif






