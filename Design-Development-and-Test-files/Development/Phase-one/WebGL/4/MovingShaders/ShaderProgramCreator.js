//This is a simple alert dialog displaying the error and line number.
window.onerror = function (msg, lineno, url) {
	alert("Url: \n" + lineno + "\n\n" + "Line number: " + url + "\n\nMessage: \n" + msg);
}

function createShader(source, shaderType){
	var shader = gl.createShader(shaderType);
	gl.shaderSource(shader, source);
	gl.compileShader(shader);
	if(!gl.getShaderParameter(shader,gl.COMPILE_STATUS)){
		throw gl.getShaderInfoLog(shader);
	}

	return shader;
}//createShader


function createProgram(vertexShaderSource, fragmentShaderSource){
	var program = gl.createProgram();
	var vertexShader = createShader(vertexShaderSource, gl.VERTEX_SHADER);
	var fragmentShader = createShader(fragmentShaderSource, gl.FRAGMENT_SHADER);
	gl.attachShader(program, vertexShader);
	gl.attachShader(program, fragmentShader);
	gl.linkProgram(program);
	if(!gl.getProgramParameter(program, gl.LINK_STATUS)){
		throw gl.getProgramInfoLog(program);
	}

	return program;
}//createProgram

function ScreenQuad(){
		var vertexPosBuffer = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, vertexPosBuffer);
		var vertices = [-1, -1, 1, -1, -1, 1, 1, 1];
		gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(vertices), gl.STATIC_DRAW);
		vertexPosBuffer.itemSize = 2;
		vertexPosBuffer.numItems = 4;

		return vertexPosBuffer;
}//ScreenQuad

function loadProgram(vs, fs, callBack) {
   var program = createProgram();
    function vshaderLoaded(str) {
        program.vshaderSource = str;
        if(!program.fshaderSource) {
            linkProgram(program);
            callBack(program);
        }
    }
}//loadProgram

function fshaderLoaded(str) {
        program.fshaderSource = str;
        if(!program.vshaderSource) {
            linkProgram(program);
            callBack(program);
        }

}//vshaderLoaded
    

loadFile(vs,vshaderSource);
loadFile(str,fshaderSource);
    
//function loadFile() {}    
    