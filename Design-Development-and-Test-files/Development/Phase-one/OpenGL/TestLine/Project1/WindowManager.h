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
	
	void render(void);
	void InputHandler();
	void mouseHandler(int,int,int,int);
	void resizeWindow(int,int);
	void updateWindow();
};