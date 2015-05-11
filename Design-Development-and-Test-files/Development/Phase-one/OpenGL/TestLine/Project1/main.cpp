#include <iostream>
#include <glew.h>
#include <freeglut.h>
#include <string.h>

using namespace std;

string v_shaderSource,f_shaderSource;


int main() {
	
	return 0;
}

//Creates a single sub shader.
GLint createSingleShader(GLenum shaderType, string shaderSource) {
	GLint shader = glCreateShader(shaderType);
	glShaderSource(shader, 1, (const char* const*)&shaderSource, NULL);
	glCompileShader(shader);
	if (!glIsShader(shader)){
		cout << "Error creating shader";
		return -1;
	} else {
		return shader;
	}
}//createSingleShader

//Gets vertex and frag shader and creates a full shader program.
void initaliseShaderProgram() {
	GLint vShader = createSingleShader(GL_VERTEX_SHADER, v_shaderSource);
	GLint fShader = createSingleShader(GL_FRAGMENT_SHADER, f_shaderSource);
    GLuint shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vShader);
	glAttachShader(shaderProgram, fShader);
	glLinkProgram(shaderProgram);
    glUseProgram(shaderProgram);
 }//initaliseShaderProgram


void intialiseGL() {}

void line() {}

void createBuffers() {}

void deleteBuffers() {
    // glBindBuffer(ARRAY_BUFFER, null);
     //glBindBuffer(ELEMENT_ARRAY_BUFFER, null);
}