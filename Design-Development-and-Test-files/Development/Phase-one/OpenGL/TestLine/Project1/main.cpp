#ifdef WIN32
#include <windows.h>
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#endif

#include "WindowManager.h"
WindowManager _windowManager;

int main(int argc, char* argv[]) {
	_windowManager.initialiseWindow();
	_windowManager.setupGlew();
	_windowManager.run();
	return 0;
}//main