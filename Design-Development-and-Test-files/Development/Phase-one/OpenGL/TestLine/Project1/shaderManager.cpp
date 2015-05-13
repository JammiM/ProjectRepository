#include "shaderManager.h"


shaderManager::shaderManager(void)
{
}


shaderManager::~shaderManager(void)
{
	glDeleteProgram();
	glDeleteShader();
	
}

shaderManager::createShader(){
	//type and source.
	//glCreateShader();
	
	//glShaderSource();
	//glIsShader();
//	void glCompileShader(GLuint shader);

	//error handling
}


shaderManager::initShaderProgram(){
	glCreateProgram();
	glAttachShader();
	glAttachShader();
	glLinkProgram();
	glUseProgram();	
	   glGetProgramInfoLog();
	glIsProgram();
}