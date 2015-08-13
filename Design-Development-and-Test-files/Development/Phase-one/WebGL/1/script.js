//"using strict";

var canvas;
var gl;
var vBuffer;
var program;
var cubeLenght = 0.50;
var fieldOfView =0.0;
var aspectRatio = 0;
var nearPlane = 0.0;
var farPlane = 0.0;

window.onload = function init() {
  canvas = document.getElementById("glCanvas");
  gl = canvas.getContext("experimental-webgl");
  gl.viewport(0, 0, canvas.width, canvas.height);
  
  var vertShader = createShader("shader-vs", gl.VERTEX_SHADER);
  var fragShader = createShader("shader-fs", gl.FRAGMENT_SHADER);
  
  createShaderProgram(gl,vertShader,fragShader)
  //vBuffer = gl.createBuffer();
  //update();
	
}//init

function createShaderProgram(gl, _vertexShader, _fragmentShader) {
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

function update() {
	 var vertices = new Float32Array([
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

  var attribPos = gl.getAttribLocation(program, "aPosition");
  gl.vertexAttribPointer(attribPos, 3, gl.FLOAT, false, 0, 0);
  gl.enableVertexAttribArray(attribPos);
  
  
  var mModelView = gl.getUniformLocation(program, "modelViewMatrix");
  var mProjection = gl.getUniformLocation(program, "projectionMatrix");

  var currentProjectionMatrix = mat4.create();
  
  mat4.perspective(currentProjectionMatrix, fieldOfView, aspectRatio, nearPlane, farPlane);

  
  gl.uniformMatrix4fv(mProjection, false, currentProjectionMatrix);

  //render();
}//update

function render() {
  gl.clear(gl.COLOR_BUFFER_BIT);
  gl.clearColor(0.0, 0.0, 0.0, 1.0);
  
  	//TODO convert to elementArrayBuffer
	 gl.drawArrays(gl.TRIANGLES, 0, 0);
  
  window.requestAnimationFrame(render);
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
    alert("Your shaders are wrong!" + gl.getShaderInfoLog(shader));
    return null;
  }
  return shader;
}//createShader