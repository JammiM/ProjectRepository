#pragma once
#include <glew.h>
#include <freeglut.h>
#include <iostream>

using namespace std;


class WindowManager
{
public:
	WindowManager();
	~WindowManager();

	void run();
	void initialiseWindow();

private:
};