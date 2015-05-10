#include <iostream>
#include <string>
#include <freeglut.h>

using namespace std;

#ifndef OBJECT_H
#define OBJECT_H

class Object {
private:
	int id;
	static int numOfObjects;
	static Object arrayOfObjects[];
public:
	
	Object(int id);
	Object();
	~Object();

	int getId() {return id;}
	void setId(int newId) {id = newId;}
	virtual void getClass() { cout << " is an Object." << endl; }
	static int getNumOfObject() { return numOfObjects; }

};

#endif