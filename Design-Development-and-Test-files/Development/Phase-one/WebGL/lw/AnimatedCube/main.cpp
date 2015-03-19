
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


function initBuffers() {

        cubeVertexPositionBuffer = glGenBuffer();
        glBindBuffer(GL_ARRAY_BUFFERARRAY_BUFFER, cubeVertexPositionBuffer);
        vertices = [
            // Front face
            -1.0, -1.0,  1.0,
             1.0, -1.0,  1.0,
             1.0,  1.0,  1.0,
            -1.0,  1.0,  1.0,

            // Back face
            -1.0, -1.0, -1.0,
            -1.0,  1.0, -1.0,
             1.0,  1.0, -1.0,
             1.0, -1.0, -1.0,

            // Top face
            -1.0,  1.0, -1.0,
            -1.0,  1.0,  1.0,
             1.0,  1.0,  1.0,
             1.0,  1.0, -1.0,

            // Bottom face
            -1.0, -1.0, -1.0,
             1.0, -1.0, -1.0,
             1.0, -1.0,  1.0,
            -1.0, -1.0,  1.0,

            // Right face
             1.0, -1.0, -1.0,
             1.0,  1.0, -1.0,
             1.0,  1.0,  1.0,
             1.0, -1.0,  1.0,

            // Left face
            -1.0, -1.0, -1.0,
            -1.0, -1.0,  1.0,
            -1.0,  1.0,  1.0,
            -1.0,  1.0, -1.0
        ];
     //   glBufferData(gl.ARRAY_BUFFER, new Float32Array(vertices), GL_STATIC_DRAW);
        //cubeVertexPositionBuffer.itemSize = 3;
       // cubeVertexPositionBuffer.numItems = 24;

        cubeVertexColorBuffer = gl.createBuffer();
        glBindBuffer(GL_ARRAY_BUFFER, cubeVertexColorBuffer);
        colors = [
            [1.0, 0.0, 0.0, 1.0], // Front face
            [1.0, 1.0, 0.0, 1.0], // Back face
            [0.0, 1.0, 0.0, 1.0], // Top face
            [1.0, 0.5, 0.5, 1.0], // Bottom face
            [1.0, 0.0, 1.0, 1.0], // Right face
            [0.0, 0.0, 1.0, 1.0]  // Left face
        ];
      /*  var unpackedColors = [];
        for (var i in colors) {
            var color = colors[i];
            for (var j=0; j < 4; j++) {
                unpackedColors = unpackedColors.concat(color);
            }
        }
		*/
        gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(unpackedColors), gl.STATIC_DRAW);
        cubeVertexColorBuffer.itemSize = 4;
        cubeVertexColorBuffer.numItems = 24;

        cubeVertexIndexBuffer = gl.createBuffer();
        gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, cubeVertexIndexBuffer);
        var cubeVertexIndices = [
            0, 1, 2,      0, 2, 3,    // Front face
            4, 5, 6,      4, 6, 7,    // Back face
            8, 9, 10,     8, 10, 11,  // Top face
            12, 13, 14,   12, 14, 15, // Bottom face
            16, 17, 18,   16, 18, 19, // Right face
            20, 21, 22,   20, 22, 23  // Left face
        ];
        gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, new Uint16Array(cubeVertexIndices), gl.STATIC_DRAW);
        cubeVertexIndexBuffer.itemSize = 1;
        cubeVertexIndexBuffer.numItems = 36;


}//initBuffers



