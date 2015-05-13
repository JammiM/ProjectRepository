#ifdef _WIN32
#include <windows.h>
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#endif

//#include <iostream>
//#include <string>
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
#include "WindowManager.h"

//using namespace std;

WindowManager _windowManager;

int main(int argc, char* argv[]) {
	_windowManager.initialiseWindow();
	_windowManager.run();
	return 0;
}//main