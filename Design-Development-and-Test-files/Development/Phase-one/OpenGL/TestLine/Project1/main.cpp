#include <iostream>
#include <glew.h>
#include <freeglut.h>
#include <string>

using namespace std;

string v_shaderSource,f_shaderSource;


void intinaliseGlut() {
	glutInitContextVersion(2,1);
	glutCreateWindow("Test");
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(900,500);
	glutInitWindowPosition(8000,10);
	//glutIdleFunc ();
    //glutDisplayFunc();
    //glutReshapeFunc();
    //glutKeyboardFunc();
}//intinaliseGlut



int main(int argc, char* argv[]) {
	
	glutInit(&argc,argv);
	intinaliseGlut();
	//glutMainLoop();
	
	return 0;
}

//Creates a single sub shader.
GLint createSubShader(GLenum shaderType, string shaderSource) {
	GLint subShader = glCreateShader(shaderType);
	glShaderSource(subShader, 1, (const char* const*)&shaderSource, NULL);
	glCompileShader(subShader);
	if (!glIsShader(subShader)){
		cout << "Error creating sub shader";
		return -1;
	} else {
		return subShader;
	}
}//createSubShader


void addAttributesToShaderProgram(GLint _shaderProgram) {
	GLint positionOfAttrib = glGetAttribLocation(_shaderProgram, "attributePosition");
	glEnableVertexAttribArray(positionOfAttrib);
    GLint colorUniform = glGetUniformLocation(_shaderProgram, "u_color");
    GLint pMUniform = glGetUniformLocation(_shaderProgram, "u_pMatrix");
    GLint mvMUniform = glGetUniformLocation(_shaderProgram, "u_mvMatrix");
}//addAttributesToShaderProgram




//Gets vertex and frag shader and creates a full shader program.
void initaliseShaderProgram() {
	GLint vShader = createSubShader(GL_VERTEX_SHADER, v_shaderSource);
	GLint fShader = createSubShader(GL_FRAGMENT_SHADER, f_shaderSource);
    GLuint shaderProgram = glCreateProgram();

    glAttachShader(shaderProgram, vShader);
	glAttachShader(shaderProgram, fShader);
	glLinkProgram(shaderProgram);
    glUseProgram(shaderProgram);
	addAttributesToShaderProgram(shaderProgram);
 }//initaliseShaderProgram






void intialiseGL() {}

void line() {}

void createBuffers() {}

void releaseBuffers() {
	glBindBuffer(GL_ARRAY_BUFFER, NULL);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, NULL);
	// TODO ADD TO DECONSTRIOR glDeleteShader(shader);
}


void destroyEverything() {
	glutExit();
}

