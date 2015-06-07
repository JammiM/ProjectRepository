#pragma once
#include <glew.h>
#include <freeglut.h>
#include <iostream>

using namespace std;

class WindowManager
{
private:
	int windowPositionX, windowPositionY, windowWidth, windowHeight;
public:
	WindowManager();
	WindowManager(int,int,int,int);
	~WindowManager();

	void initialiseWindow();
    void setupGlew();
	void run();
	
	static void render();
	//static void InputHandler(UCHAR,int, int);
	static void mouseHandler(int,int,int,int);
	static void resizeWindow(int,int);
	static void updateWindow();
};