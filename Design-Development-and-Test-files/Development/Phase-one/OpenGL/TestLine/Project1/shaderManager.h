#pragma once

#ifndef SHADERMANAGER_H
#define SHADERMANAGER_H

class shaderManager
{
public:
	shaderManager(void);
	~shaderManager(void);
	
	
	createShader();
	
	
	loadShader();
	initShaderProgram();
	Gluint getShaderId();
	
	
private:
    GLuint shaderId;
    GLuint vertexShader;
    GLuint fragmentShader;
    const GLchar* vertexShaderSource;
    const GLchar* fragmentShaderSource;

    GLint modelViewProjectionMatrixId;
    GLint viewMatrixId;	
	
};

#endif