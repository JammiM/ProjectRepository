#include <iostream>
#include <string>
#include <freeglut.h>

using namespace std;

#ifndef OBJECTHEADER_H
#define OBJECTHEADER_H

class Object {
private:
	int id;
	static int numOfObjects;
	static Object arrayOfObjects[];
public:
	int getId() {return id;}
	void setId(int newId) {id = newId;}
	Object(int id);
	Object();
	//~Object();
	virtual void getClass() { cout << " is an Object." << endl; }
	static int getNumOfObject() { return numOfObjects; }
	//void toString() {}

};

#endif