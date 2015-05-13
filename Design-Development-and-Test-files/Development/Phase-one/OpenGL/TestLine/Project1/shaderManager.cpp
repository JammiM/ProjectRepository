#include "shaderManager.h"


shaderManager::shaderManager(void)
{
}

shaderManager::~shaderManager(void)
{
	/*
	glDeleteProgram();
	glDeleteShader();
	*/
}

//shaderManager::createShader(){
	//type and source.
	//glCreateShader();	
	//glShaderSource();
	//glIsShader();
//	void glCompileShader(GLuint shader);
	//error handling
//}


//shaderManager::initShaderProgram() {//}GLuint program, GLuint  	shader){
	
	/*
	glCreateProgram();
	glAttachShader();
	glAttachShader();
	glLinkProgram();
	glGetProgramInfoLog();
	glIsProgram();
	*/


	/*
	if() {
	glUseProgram();	
	}
	*/
	
//}



















//Creates a single sub shader.
//GLint createSubShader(GLenum shaderType, string shaderSource) {
//	GLint subShader = glCreateShader(shaderType);
//	glShaderSource(subShader, 1, (const char* const*)&shaderSource, NULL);
//	glCompileShader(subShader);

	/*
	GLint subshader_compiled;
	glGetShaderiv(subShader, GL_COMPILE_STATUS, &subshader_compiled);
			if (subshader_compiled != GL_TRUE)
			{
				GLsizei dataLog_length = 0;
				GLchar message[1000];
				glGetShaderInfoLog(subShader, 1000, &dataLog_length, message);
				// Write the error to a log
			}
			*/

//	if (!glIsShader(subShader)){
		
//		cout << "Error creating sub shader";
//		return -1;
//	} else {

	
//		return subShader;
//	}
//}//createSubShader


/*

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


void initBuffer(GLint EleArray, GLsizeiptr data) {
	GLuint vbo;
	glCreateBuffers(1, &vbo);    
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,  vbo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, data, 0, GL_STATIC_DRAW);

}




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


void initScene() {
            glClearColor(0.0, 0.0, 0.0, 0.0);
          glm::mat4 mvMatrix, pMatrix;
            glEnable(GL_DEPTH_TEST);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
       
	   }
*/