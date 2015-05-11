#include <iostream>
#include <glew.h>
#include <freeglut.h>
using namespace std;

int main() {
	
	return 0;
}

GLint createSingleShader(GLenum shaderType, string shaderSource) {
	GLint shader = glCreateShader(shaderType);
	glShaderSource(shader, sizeof(shaderSource), (const char* const*)&shaderSource, NULL);
    glCompileShader(shader);
	if (!glIsShader(shader)){
		cout << "Error creating shader";
		return -1;
	} else {
		return shader;
	}
}//createSingleShader











void intialiseGL() {}

void line() {}

void createBuffers() {}

void deleteBuffers() {
    // glBindBuffer(ARRAY_BUFFER, null);
     //glBindBuffer(ELEMENT_ARRAY_BUFFER, null);
}