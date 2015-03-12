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
    ];
          
    gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(vertices), gl.STATIC_DRAW);   

         
}//initBuffers

 void initShaders() {
    var fragmentShader = getShader(gl, "shader-fs");
    var vertexShader = getShader(gl, "shader-vs");

    shaderProgram = gl.createProgram();
    gl.attachShader(shaderProgram, vertexShader);
    gl.attachShader(shaderProgram, fragmentShader);
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