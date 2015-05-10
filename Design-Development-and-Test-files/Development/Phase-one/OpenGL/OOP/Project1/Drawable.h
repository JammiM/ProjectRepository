#include "Object.h"

#ifndef DRAWABLE_H
#define DRAWABLE_H

class Drawable : Object {
private:
	int id;
public:

	Drawable();
	Drawable(int, GLint);
	~Drawable();

	int getId() {return id;}
    void getClass() { cout << " is an drawable object." << endl; }
	


	virtual void Draw(GLenum mode, GLint first, GLsizei count) {
		glDrawArrays(mode,first,count);
	}//Draw
	
	virtual void Draw(GLenum mode, GLsizei count,GLenum type, const GLvoid * indices) {
		glDrawElements(mode, count, type, indices);
	}
			
	void toString();
};

#endif






