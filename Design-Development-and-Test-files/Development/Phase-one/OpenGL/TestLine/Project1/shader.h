#pragma once
#include <string>
#include <glew.h>

using namespace std;

#ifndef SHADER_H
#define SHADER_H

class shader
{
private:
	GLint shaderId;
	const GLchar* shaderSource;
	enum shaderType 
	{
		vertShader, fragShader, shaderProgram
	};
public:
	shader();
	shader(GLint, GLchar);
	~shader();
	GLint getShaderId();
	GLint createShader(GLint _shader, GLchar* shaderSource);
	GLint createShaderFromFile(GLint _shader, GLchar* shaderSource);	
	GLint createShaderProgram(GLint _vertexShader, GLint _fragmentShader);
};
#endif