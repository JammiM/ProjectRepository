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
    -cubeLenght, -cubeLenght, -cubeLenght, 
  ]);
	
	
	
	
	
	
	
  render();
}//update

function render() {
  gl.clear(gl.COLOR_BUFFER_BIT);
  gl.clearColor(0.0, 0.0, 0.0, 1.0);
  
  
  
  window.requestAnimationFrame(render);
}//render

function loadShader(id, type)
{
  return shader;
}//loadShader

