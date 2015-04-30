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
	GLint vertices[];
public:
	string getId() {return id;}
	GLint getVertices() {return vertices[0];}
    void getClass() { cout << " is an drawable object." << endl; }
	

	Drawable();
	Drawable(string, GLint);
	~Drawable();
	void toString();
};

#endif