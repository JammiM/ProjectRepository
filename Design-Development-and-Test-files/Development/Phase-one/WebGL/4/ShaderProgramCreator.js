//This is a simple alert dialog displaying the error and line number.
window.onerror = function(msg, lineno, url){
	alert(url + "\n" + "Line number " + lineno + "\n" + msg);
}

function createShader(source, shaderType){
	var shader = gl.createShader(shaderType);
	gl.shaderSource(shader, source);
	gl.compileShader(shader);
	
	return shader;
}//createShader


function createProgram(vertexShaderSource, fragmentShaderSource){
	var program = gl.createProgram();
	var vertexShader = createShader(vertexShaderSource, gl.VERTEX_SHADER);
	var fragmentShader = createShader(fragmentShaderSource, gl.FRAGMENT_SHADER);
	gl.attachShader(program, vertexShader);
	gl.attachShader(program, fragmentShader);
	gl.linkProgram(program);

	return program;
}//createProgram