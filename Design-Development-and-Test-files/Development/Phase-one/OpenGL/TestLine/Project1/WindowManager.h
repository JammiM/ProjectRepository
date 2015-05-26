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

	void run();
	void initialiseWindow();
	void render();
	void setupGlew();
	void InputHandler();
	void resizeWindow();
	void updateWindow();
};