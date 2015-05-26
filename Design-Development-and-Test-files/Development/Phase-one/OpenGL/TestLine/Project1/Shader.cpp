#include "shader.h"

GLint shader::createShader(GLint _shader, GLchar* _shaderSource) {

	//GLint shader;
	if(_shader == GL_VERTEX_SHADER) {
		_shader = glCreateShader(vertShader);
	} else {
		_shader = glCreateShader(fragShader);
	}

	glShaderSource(_shader,1, &_shaderSource,NULL);
	glCompileShader(_shader);

	if(glIsShader(_shader) == GL_TRUE) {
	return _shader;
	} else { 
		printf("");
		exit(0);
	}
}//createShader

GLint shader::createShaderProgram(GLint _vertexShader, GLint _fragmentShader) {
	GLint shaderProgram;
	shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram,_vertexShader);
	glAttachShader(shaderProgram,_fragmentShader);
	glLinkProgram(shaderProgram);
	glUseProgram(shaderProgram);
	if(glIsShader(shaderProgram) == GL_TRUE) {
	return shaderProgram;
	} else { 
		printf("Error creating shader program");
		exit(0);
	}
}