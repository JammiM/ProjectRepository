#include <GL/glew.h>
#include <GL/freeglut.h>


int main(int argc, char** argv) {
	glutInit(argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(600,600);
	glutInitContextVersion(2,0);
	glutInitContextFlags (GLUT_CORE_PROFILE | GLUT_DEBUG);
	glutInitContextProfile(GLUT_FORWARD_COMPATIBLE);
	glutCreateWindow(argv[0]);
	
	if (glew)
}//main



void BuildGeometry() {
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
	vertexPositionID = glGetAttribLocation(vertexPositionID, 3, GL_FLOAT, GL_FALSE, 0, 0);
	colourOfVertexID = glGetAttribPointer(colourOfVertexID, 4, FLOAT,GL_FALSE, 0,
	BUFFER_OFFSET(3*3sizeof(GLFLOAT)));
	glUseProgram(shaderProgram);
	glEnableVertexAttribArray(vertexPositionID);
	glEnableVertexAttribArray(colourOfVertexID);
	
	
	//flush 
	//glFinish(); / glFlush();
	
}//main


shaderStuff() {
	GLuint vpos;

	vpos = glGetAttribLocation(programID, "vPosition");
	glEnableVertexAttribArray(vpos);
	glVertexAttribPointer(vpos, 3, GL_FLOAT, GL_FALSE, 0, 0);//Location of the attribute
}//shaderStuff

vShader() {
	vec4 vPosition
	vec4 vColour;
	vec4 colour;

	void main() {
	 colour = vColour;
	 gl_Position = vPosition;
	}
}//vShader

