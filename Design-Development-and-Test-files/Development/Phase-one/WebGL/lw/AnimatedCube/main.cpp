
extern const char* vertShaderCode;
extern const char* fragShaderCode;



void dataToGPU(){
	
GLfloat verts[]
{
	0.0f, 0.0f,    //e0
	0.0f, 0.0f, 0.0f,
	
    1.0f,  1.0f,	//e1
	0.0f, 0.0f, 0.0f,
	
	
    -1.0f,  1.0f, 	//e2
	0.0f, 0.0f, 0.0f,	
	
    -1.0f,  -1.0f,	//e3
	0.0f, 0.0f, 0.0f,

	
    1.0f,  -1.0f,	//e4
	0.0f, 0.0f, 0.0f,
}

GLuint vertBufferID;
glGenBuffer(1, &vertBufferID);
glBindBuffer(GL_ARRAY_BUFFER, vertBufferID); 
glBufferData(gl.ARRAY_BUFFER, sizeof(verts), GL_STATIC_DRAW);
glEnableVertexAttribArray(0);
glVertexAttribPointer(0,2, GL_FLOAT, GL_FALSE,sizeof(float) * 5, 0);
glEnableVertexAttribArray(1);
glVertexAttribPointer( 1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 5, (char*)sizeof(float) * 2));




GLushort indices[] = { 0,1,2,   0,3,4 };
GLuint indexBufferID;
glGenBuffer(1, &indexBufferID);
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferID); 
glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices),indices, GL_STATIC_DRAW);
	
}


void Init(){
glewInit();
dataToGPU();
installShaders();
}


void Draw(){
	glViewport(0,0, width,height);
	
glDrawElements(GL_TRIANGLES,6, GL_UNSIGNED_SHORT, 0);

}


void installShaders() {
	/*
	GLuint vertexShader = glCreatShader(GL_VERTEX_SHADER)
	GLuint fragmentShader = glCreateShader( GL_FRAGMENT_SHADER );	
	
	//Set vertex source
	glShaderSource( vertexShader, 1, vertexShaderSource, NULL );

	//Compile vertex source
	glCompileShader( vertexShader );


	//Attach vertex shader to program
	glAttachShader( mProgramID, vertexShader );

	glShaderSource( fragmentShader, 1, fragmentShaderSource, NULL );

	//Compile fragment source
	glCompileShader( fragmentShader );

	//Check fragment shader for errors
	GLint fShaderCompiled = GL_FALSE;
	glGetShaderiv( fragmentShader, GL_COMPILE_STATUS, &fShaderCompiled );

	glAttachShader( mProgramID, fragmentShader );
    glLinkProgram( mProgramID );
*/

}//installshaders






