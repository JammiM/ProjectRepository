#include "shaderManager.h"
#include "shader.h"

shader* vertexShader;
const char* ddd;
void shaderManager::init() {
	
	vertexShader = new shader();
	



}

void shaderManager::draw()
{

}
 
void shaderManager::clean()
{

}



/*
GLint shaderProgram;
GLint attributeLocation;


string GLSLVersion = "#version 120\n";
//string c = ReadTextFile("common.glsl");


string vertexShaderSource = "";
string fragmentShaderSource = "";

GLchar const* files[] = { GLSLVersion.c_str(), vertexShaderSource.c_str(), fragmentShaderSource.c_str() }; 
GLint lenghts[] = { GLSLVersion.size(), vertexShaderSource.size(), fragmentShaderSource.size() };
//glShaderSource(id, 3, files, lengths);
*/
