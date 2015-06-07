#pragma once
#include <string>
#include <glew.h>

using namespace std;

#ifndef SHADERMANAGER_H
#define SHADERMANAGER_H

class shaderManager
{
public:
	shaderManager();
	~shaderManager();
	GLint createShader(GLenum, string);
	void printShaderLog(GLint);
	void loadShader(GLenum, const char*,GLuint*);
	void initShaderProgram(GLint,GLint);
	GLuint getShaderId();
	
private:
    GLuint shaderId;
	GLint programId;
	GLboolean isLinked;
    GLuint vertexShader;
    GLuint fragmentShader;
    const GLchar* vertexShaderSource;
    const GLchar* fragmentShaderSource;
    string v_shaderSource,f_shaderSource;
    GLint modelViewProjectionMatrixId;
    GLint viewMatrixId;	
};

#endif