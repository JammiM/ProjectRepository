#pragma once
#include <string>
#include <glew.h>

using namespace std;

#ifndef SHADERMANAGER_H
#define SHADERMANAGER_H

class shaderManager
{
public:
	shaderManager(void);
	~shaderManager(void);
	void createShader();
	void loadShader();
	void initShaderProgram();
	GLuint getShaderId();
	
private:
    GLuint shaderId;
    GLuint vertexShader;
    GLuint fragmentShader;
    const GLchar* vertexShaderSource;
    const GLchar* fragmentShaderSource;
    string v_shaderSource,f_shaderSource;
    GLint modelViewProjectionMatrixId;
    GLint viewMatrixId;	
};

#endif