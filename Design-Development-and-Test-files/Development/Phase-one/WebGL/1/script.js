"using strict";

var canvas;
var gl;
var vBuffer;
var program;
var cubeLenght = 0.50;

window.onload = function init() {
  canvas = document.getElementById("glCanvas");
  gl = canvas.getContext("experimental-webgl");
  gl.viewport(0, 0, canvas.width, canvas.height);
  program = gl.createProgram();

  gl.attachShader(program, vs);
  gl.attachShader(program, fs);
  gl.linkProgram(program);
  gl.useProgram(program);
  vBuffer = gl.createBuffer();
  //update();
	
}//init

function update()
{
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
	
  gl.bindBuffer(gl.ARRAY_BUFFER, vBuffer);
  gl.bufferData(gl.ARRAY_BUFFER, points, gl.STATIC_DRAW);

  var attribPos = gl.getAttribLocation(program, "aPosition");
  gl.vertexAttribPointer(attribPos, 3, gl.FLOAT, false, 0, 0);
  gl.enableVertexAttribArray(attribPos);
  
  
  var mModelView = gl.getUniformLocation(program, "modelViewMatrix");
  var mProjection = gl.getUniformLocation(program, "projectionMatrix");

  render();
}//update

function render() {
  gl.clear(gl.COLOR_BUFFER_BIT);
  gl.clearColor(0.0, 0.0, 0.0, 1.0);
  
  
  
  window.requestAnimationFrame(render);
}//render

function loadShader(id, type)
{
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
}//loadShader

