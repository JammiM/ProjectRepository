GLint triangleVertexPositionBuffer;


glGenBuffers(1,&triangleVertexPositionBuffer);
glBindBuffer (GL_ARRAY_BUFFER, triangleVertexPositionBuffer);
glEnableClientState (GL_VERTEX_ARRAY);
glVertexPointer (3, GL_FLOAT, 0, 0);

glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective (70, 4.0f / 3, 1, 1000);

glMatrixMode (GL_MODELVIEW);
glLoadIdentity ();

gluLookAt (0, 0, -5,
       0, 0,  0,
       0, 1,  0);

void main() {}//main

void initBuffers() {
    triangleVertexPositionBuffer = gl.createBuffer(); 
    gl.bindBuffer(gl.ARRAY_BUFFER, triangleVertexPositionBuffer);
             
    var vertices = [
         0.0,  1.0,  0.0,
        -1.0, -1.0,  0.0,
         1.0, -1.0,  0.0
		 
		 
		 /*
   -1.0f, -1.0f, 0.0f,
   1.0f, -1.0f, 0.0f,
   0.0f,  1.0f, 0.0f,
		 
		 
		 
		 
		 */
    ];
          
    gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(vertices), gl.STATIC_DRAW);   

         
}//initBuffers

 void initShaders() {
	 
	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertexSource, NULL);
	glCompileShader(vertexShader);

	
	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragmentSource, NULL);
	glCompileShader(fragmentShader);	 
	 
	 
	GLuint shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);

	
    gl.linkProgram(shaderProgram);

    if (!gl.getProgramParameter(shaderProgram, gl.LINK_STATUS)) {
      alert("Could not initialise shaders");
    }

    gl.useProgram(shaderProgram);
    shaderProgram.vertexPositionAttribute = gl.getAttribLocation(shaderProgram, "aVertexPosition");
    gl.enableVertexAttribArray(shaderProgram.vertexPositionAttribute);      
      
    shaderProgram.pMatrixUniform = gl.getUniformLocation(shaderProgram, "uPMatrix");
    shaderProgram.mvMatrixUniform = gl.getUniformLocation(shaderProgram, "uMVMatrix");
  }//initShaders
   
void draw() { 
	glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, 0); 
 }//draw

void vertexShader (){
#version 120

 in vec2 position;

void main()
{
    gl_Position = vec4(position, 0.0, 1.0);
}
	 
	 
	 
	 
	 
	 
 }
 
 
 
void fragmentShader (){
	 
	 
#version 120
	 
out vec4 outColor;

void main()
{
    outColor = vec4(1.0, 1.0, 1.0, 1.0);
}	 
	 
	 
	 
	 
	 
 }
 
 