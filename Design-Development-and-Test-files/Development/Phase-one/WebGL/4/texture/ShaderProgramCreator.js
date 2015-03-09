//This is a simple alert dialog displaying the error and line number.
window.onerror = function(msg, lineno, url){
	alert(url + "\n" + "Line number " + lineno + "\n" + msg);
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

		return vertexPosBuffer;
}//ScreenQuad