#include <iostream>
#include <string>
#include <freeglut.h>

using namespace std;

#ifndef OBJECTHEADER_H
#define OBJECTHEADER_H

class Object {
private:
	string id;
	//vec3 Position;
	static int numOfObjects;
	static Object arrayOfObjects[];
public:
	string getId() {return id;}
	void setId(string newId) {id = newId;}
	Object(string id);
	Object();
	//~Object();
	virtual void getClass() { cout << " is an Object." << endl; }
	static int getNumOfObject() { return numOfObjects; }
	//void toString() {}

};

#endif