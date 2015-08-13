//"using strict";

var canvas;
var gl;
var vBuffer;
var program;
var cubeLenght = 0.25;
var fieldOfView = 45;
var aspectRatio = 400 / 300;
var nearPlane = 0.1;
var farPlane = 1000.0;
var moveFactor = 0;

window.onload = function init() {
  canvas = document.getElementById("glCanvas");
  gl = canvas.getContext("experimental-webgl");
  gl.viewport(0, 0, canvas.width, canvas.height);
  
  var vertShader = createShader("shader-vs", gl.VERTEX_SHADER);
  var fragShader = createShader("shader-fs", gl.FRAGMENT_SHADER);
  
  program = gl.createProgram();
  
  gl.attachShader(program, vertShader);
  gl.attachShader(program, fragShader);
  gl.linkProgram(program);
  gl.useProgram(program);
  
  
  vBuffer = gl.createBuffer();
  update();
	
}//init


function update() {
	 var points = new Float32Array([
    // top
    -cubeLenght,  cubeLenght, -cubeLenght, 
     cubeLenght,  cubeLenght, -cubeLenght, 
     cubeLenght,  cubeLenght,  cubeLenght, 
     cubeLenght,  cubeLenght,  cubeLenght, 
    -cubeLenght,  cubeLenght,  cubeLenght,  
    -cubeLenght,  cubeLenght, -cubeLenght, 
    // bottom
     cubeLenght, -cubeLenght, -cubeLenght, 
    -cubeLenght, -cubeLenght, -cubeLenght, 
     cubeLenght, -cubeLenght,  cubeLenght, 
    -cubeLenght, -cubeLenght,  cubeLenght,  
     cubeLenght, -cubeLenght,  cubeLenght, 
    -cubeLenght, -cubeLenght, -cubeLenght, 
    // left
    -cubeLenght,  cubeLenght, -cubeLenght,  
    -cubeLenght, -cubeLenght, -cubeLenght,  
    -cubeLenght,  cubeLenght,  cubeLenght,  
    -cubeLenght, -cubeLenght,  cubeLenght,   
    -cubeLenght,  cubeLenght,  cubeLenght,  
    -cubeLenght, -cubeLenght, -cubeLenght,  
    // right
     cubeLenght,  cubeLenght, -cubeLenght, 
     cubeLenght, -cubeLenght, -cubeLenght, 
     cubeLenght,  cubeLenght,  cubeLenght, 
     cubeLenght,  cubeLenght,  cubeLenght, 
     cubeLenght, -cubeLenght,  cubeLenght,  
     cubeLenght, -cubeLenght, -cubeLenght, 
    // front
     cubeLenght, -cubeLenght,  cubeLenght, 
    -cubeLenght, -cubeLenght,  cubeLenght, 
     cubeLenght,  cubeLenght,  cubeLenght, 
    -cubeLenght,  cubeLenght,  cubeLenght,  
     cubeLenght,  cubeLenght,  cubeLenght, 
    -cubeLenght, -cubeLenght,  cubeLenght, 
    // back
     cubeLenght, -cubeLenght, -cubeLenght, 
    -cubeLenght, -cubeLenght, -cubeLenght, 
     cubeLenght,  cubeLenght, -cubeLenght, 
    -cubeLenght,  cubeLenght, -cubeLenght,  
     cubeLenght,  cubeLenght, -cubeLenght, 
    -cubeLenght, -cubeLenght, -cubeLenght,]);
	
	//TODO convert to elementArrayBuffer
	
  gl.bindBuffer(gl.ARRAY_BUFFER, vBuffer);
  gl.bufferData(gl.ARRAY_BUFFER, points, gl.STATIC_DRAW);

  var loc = gl.getAttribLocation(program, "aPosition");
  gl.vertexAttribPointer(loc, 3, gl.FLOAT, false, 0, 0);
  gl.enableVertexAttribArray(loc);

  var mvLocation = gl.getUniformLocation(program, "modelViewMatrix");
  var projLocation = gl.getUniformLocation(program, "projectionMatrix");
  var projMatrix = mat4.create();
  mat4.perspective(projMatrix, fieldOfView,aspectRatio, nearPlane, farPlane);
  
  gl.uniformMatrix4fv(projLocation, false, projMatrix);
  gl.enable(gl.DEPTH_TEST);

  render();
}//update

function render() {
  gl.clear(gl.COLOR_BUFFER_BIT);
  gl.clearColor(0.0, 0.0, 0.0, 1.0);

  var i,j,k;

  var drawCalls = 0;

  var vector = vec3.create();
  vec3.set(vector, 0.0, 0.0, -10.0);

  //theta += 0.001;
  for(k = 0; k < 8; k++)
  {
    for(j = 0; j < 8; j++)
    {
      for(i = 0; i < 8; i++)
      {
        var mvMatrix = mat4.create();
        var newVec = vec3.create();
        vec3.set(newVec, i - 4, j - 4, k - 4);
        mat4.rotateX(mvMatrix, mvMatrix, 0.006);
        mat4.translate(mvMatrix, mvMatrix, vector);
        mat4.rotateY(mvMatrix, mvMatrix, moveFactor);
        mat4.translate(mvMatrix, mvMatrix, newVec);
        var mvLocation = gl.getUniformLocation(program, "modelViewMatrix");
        gl.uniformMatrix4fv(mvLocation, false, mvMatrix);
        drawCalls++;
        gl.drawArrays(gl.TRIANGLES, 0, 36);
      }
    }
  }
}//render

function createShader(id, type) {
  var shaderScript = document.getElementById(id);
  var src = "";
  var currentChild = shaderScript.firstChild;
  while(currentChild) {
    if(currentChild.nodeType == currentChild.TEXT_NODE) {
      src += currentChild.textContent;
    }
    currentChild = currentChild.nestSibling;
  }
  var shader = gl.createShader(type);
  gl.shaderSource(shader, src);
  gl.compileShader(shader);
  if(!gl.getShaderParameter(shader, gl.COMPILE_STATUS)) {
    alert("Error!" + gl.getShaderInfoLog(shader));
    return null;
  }
  return shader;
}//createShader

function createShaderProgram(_vertexShader, _fragmentShader) {
  var program = gl.createProgram();
  gl.attachShader(program, _vertexShader);
  gl.attachShader(program, _fragmentShader);
  gl.linkProgram(program);
  var isLinked = gl.getProgramParameter(program, gl.LINK_STATUS);
  if (!isLinked) {
      throw ("failed linking:" + gl.getProgramInfoLog (program));
  }
  return program;
};//createShaderProgram