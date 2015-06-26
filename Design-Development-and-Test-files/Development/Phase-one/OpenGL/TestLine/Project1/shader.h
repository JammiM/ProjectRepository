#pragma once
#include <string>
#include <glew.h>

using namespace std;

#ifndef SHADER_H
#define SHADER_H

class shader
{
private:

public:

      GLint _shaderProgram;
      GLint _fragShader; 
	  GLint _vertShader;
	  const char* vertexShaderSource;
	  const char* fragmentShaderSource;

      shader();
	  ~shader();

      shader(const char* _filePath);

	  GLint createShaderProgram(GLint,GLint);
	  GLint createFragmentShader(const char*);
	  GLint createVertexShader(const char*);

	  void setup();
	  //static char* readShaderFromFile(const char*);

	  //char* readdd(ifstream);


};
#endif