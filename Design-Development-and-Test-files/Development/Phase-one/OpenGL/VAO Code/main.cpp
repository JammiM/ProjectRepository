#include <GL/glew.h>
#include <GL/freeglut.h>

main () {
	GLuint vertexArrayBuffer;
	GLuint vertexBufferObject;
	GLunit numVertices;
	GLunit verts;
	GLunit colours;
	
	
	glGenVertexArray(1,&vertexArrayBuffer);
	glBindVertexArray(vertexArrayBuffer);
	
    glGenBuffers(1, &vertexBufferObject);//Generate vertexBufferObject
    glBindBuffer(GL_ARRAY_BUFFER, vertexBufferObject);//Makes it "active"

	//Loads data into buffer
	glBufferData(GL_ARRAY_BUFFER,numVertices*7*sizeof(GLFLOAT), NULL, GL_STATIC_DRAW);
	glBufferSubData(GL_ARRAY_BUFFER,0,numVertices*3*sizeof(GLFLOAT),verts);
	glBufferSubData(GL_ARRAY_BUFFER, numVertices*3*sizeof(GLFLOAT), numVertices*4*sizeof(GLFLOAT), colours);
	
	//Shader stuff
	vertexPositionID = glGetAttribLocation();
	colourOfVertexID = glGetAttribPointer();
	glUseProgram();
	glEnableVertexAttribArray();
	glEnableVertexAttribArray();

	
}//main