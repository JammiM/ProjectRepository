#include "shaderManager.h"
#include "shader.h"

GLint shaderProgram;
GLint attributeLocation;


string GLSLVersion = "#version 120\n";
//string c = ReadTextFile("common.glsl");


string vertexShaderSource = "";
string fragmentShaderSource = "";

GLchar const* files[] = { GLSLVersion.c_str(), vertexShaderSource.c_str(), fragmentShaderSource.c_str() }; 
GLint lenghts[] = { GLSLVersion.size(), vertexShaderSource.size(), fragmentShaderSource.size() };
//glShaderSource(id, 3, files, lengths);





shaderManager::shaderManager() {
}

shaderManager::~shaderManager(void) {
	glDeleteProgram(shaderProgram);
}

GLint shaderManager::createShader(GLenum _type, string *_source){
	GLint shader = glCreateShader(_type);
	//const GLchar *source = (const GLchar *)_source.c_str();
//glShaderSource(vertexShader, 1, &source, 0);
	//glShaderSource(shader,1, (const GLchar *const*)_source,  //sizeof(_source));
	//glShaderSource();
	if(glIsShader(shader) == GL_TRUE) {
		glCompileShader(shader); 
		return shader;
	} else {
		printShaderLog(shader);
		return 0;
	}
}//createShader

void shaderManager::printShaderLog(GLint _shaderId) {
    GLint log_length = 0;
    glGetShaderiv(_shaderId, GL_INFO_LOG_LENGTH, &log_length);
    if (log_length) {
        char* log = (char*) malloc(log_length);
        glGetShaderInfoLog(_shaderId, log_length, &log_length, log);
        fprintf(stderr, "Shader error: %s\n", log);
        free(log);
    }

	/*
	GLint shaderManager::getShaderId() {
		GLint n = glCreateShader();
		return n;
	}
	*/

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

















}//printShaderLog

void shaderManager::loadShader(GLenum _shaderType, const char* _shaderSourceCode, GLuint* _shaderId) {
    GLint compiled_status = 0;
    *_shaderId = glCreateShader(_shaderType);

    glShaderSource(*_shaderId, 1, &_shaderSourceCode, NULL);
    glCompileShader(*_shaderId);
    glGetShaderiv(*_shaderId, GL_COMPILE_STATUS, &compiled_status);
    if (compiled_status != GL_TRUE) {
        fprintf(stderr, "The shader did not compile.\n");
        printShaderLog(*_shaderId);
        glDeleteShader(*_shaderId);
        *_shaderId = 0;;
    }
}//load_shader

GLint shaderManager::initShaderProgram(GLint _vertexShader, GLint _fragmentShader){
	GLuint _shaderProgram = glCreateProgram();
	glAttachShader(_shaderProgram, _vertexShader);
	glAttachShader(_shaderProgram, _fragmentShader);
	glLinkProgram(_shaderProgram);
	//glGetProgramInfoLog(
	if(glIsProgram(_shaderProgram)) { 
		glUseProgram(_shaderProgram);
		return _shaderProgram;
		} else {
		  return 0;
	}
}//initShaderProgram




/*
GLint setupShaders () {
	//GLint id = glCreateShader();
	glShaderSource(id, 3, files, lenghts);

	return id;
}
*/





GLint setupShader(const GLchar *shaderSource) {

	GLint shaderId;


	return shaderId;



}






















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




void destroyEverything() {
	glutExit();
}

*/