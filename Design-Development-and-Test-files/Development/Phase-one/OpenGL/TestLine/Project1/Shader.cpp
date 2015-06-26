#include "shader.h"
 
#include <fstream>
#include <iostream>
#include <vector>

shader::shader() {}//shader

shader::~shader()
{
      glDeleteProgram(_shaderProgram);
      glDeleteShader(_fragShader);
	  glDeleteShader(_vertShader);
}//~shader

GLint shader::createShaderProgram(GLint _vertexShader, GLint _fragmentShader) {
	GLint shaderProgram;
	shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram,_vertexShader);
	glAttachShader(shaderProgram,_fragmentShader);
	glLinkProgram(shaderProgram);
	glUseProgram(shaderProgram);
	if(glIsProgram(shaderProgram) == GL_TRUE) {
	return shaderProgram;
	} else { 
		printf("Error creating shader program");
		exit(0);
	}
}//createShaderProgram

GLint shader::createVertexShader(const char* _vertexSource) {
	GLint _vertexShaderHandle = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(_vertexShaderHandle, 1, (const GLchar**)&_vertexSource, NULL);
	glCompileShader(_vertexShaderHandle);
    GLint compiled_status = 0;
    glGetShaderiv(_vertexShaderHandle, GL_COMPILE_STATUS, &compiled_status);
    if (compiled_status != GL_TRUE) {
        fprintf(stderr, "The vertex shader did not compile.\n");
        glDeleteShader(_vertexShaderHandle);
        _vertexShaderHandle = 0;;
    }
	return _vertexShaderHandle;
}//creatVertexShader

GLint shader::createFragmentShader(const char* _fragmentSource) {
	GLint _fragmentShaderHandle = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(_fragmentShaderHandle, 1, (const GLchar**)&_fragmentSource, NULL);
	glCompileShader(_fragmentShaderHandle);
	GLint compiled_status = 0;
    glGetShaderiv(_fragmentShaderHandle, GL_COMPILE_STATUS, &compiled_status);
    if (compiled_status != GL_TRUE) {
        fprintf(stderr, "The fragment shader did not compile.\n");
        glDeleteShader(_fragmentShaderHandle);
        _fragmentShaderHandle = 0;;
    }
	return _fragmentShaderHandle;
}//createFragmentShader

void shader::setup() {

	char* fragmentShaderSource = "precision mediump float; varying vec4 fColor; void main() { gl_FragColor = fColor; }";
	char* vertexShaderSource = "attribute vec4 vPosition; attribute vec4 vColor; varying vec4 fColor; void main() { fColor = vColor; gl_position = vPosition; }";


	GLint vertexShader_Id = createVertexShader(vertexShaderSource);
	GLint fragmentShader_Id = createFragmentShader(fragmentShaderSource);
	GLint shaderProgram_Id = createShaderProgram(vertexShader_Id, fragmentShader_Id);

}