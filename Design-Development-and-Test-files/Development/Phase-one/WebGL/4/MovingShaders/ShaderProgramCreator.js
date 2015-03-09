//This is a simple alert dialog displaying the error and line number.
window.onerror = function (msg, lineno, url) {
	alert("Url: \n" + lineno + "\n\n" + "Line number: " + url + "\n\nMessage: \n" + msg);
}

function createShader(source, shaderType) {
	var shader = gl.createShader(shaderType);
	gl.shaderSource(shader, source);
	gl.compileShader(shader);
    
	if (!gl.getShaderParameter(shader, gl.COMPILE_STATUS)) {
		throw gl.getShaderInfoLog(shader);
	}
	return shader;
}//createShader

function createProgram(vertexShaderSource, fragmentShaderSource) {
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


function ScreenQuad() {
		var vertexPosBuffer = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, vertexPosBuffer);
		var vertices = [-1, -1, 1, -1, -1, 1, 1, 1];
		gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(vertices), gl.STATIC_DRAW);
		vertexPosBuffer.itemSize = 2;
		vertexPosBuffer.numItems = 4;

		return vertexPosBuffer;
}//ScreenQuad


function linkProgram(program) {
    var vshader = createShader(program.vshaderSource, gl.VERTEX_SHADER);
    var fshader = createShader(program.fshaderSource, gl.FRAGMENT_SHADER);
	gl.attachShader(program, vshader);
	gl.attachShader(program, fshader);
	gl.linkProgram(program);
    	if(!gl.getProgramParameter(program, gl.LINK_STATUS)){
		throw gl.getProgramInfoLog(program);
	}
}//linkProgram


    
function loadFile(file, callback, noCache) {
	var request = new XMLHttpRequest();
	request.onreadystatechange = function() {
        if(request.readyState == 1) {
            request.send();
		} else if (request.readyState == 4) {
			if (request.status == 200) {
				callback(request.responseText);
			} else if (request.status == 404) {
				throw 'File ' + file + ' does not exist.';
			} else {
				throw 'XHR error ' + request.status + '.';
			}
		}  
	};
	var url = file;
	if (noCache) {
		url += '?' + (new Date()).getTime();
	}
	request.open('GET', url, true);
}//loadFile    



function loadProgram(vs, fs, callback) {
	var program = gl.createProgram();
    
	function vshaderLoaded(str) {
		program.vshaderSource = str;
		if (program.fshaderSource) {
			linkProgram(program);
			callback(program);
		}
	}//vshaderLoaded
    
	function fshaderLoaded(str) {
		program.fshaderSource = str;
		if (program.vshaderSource) {
			linkProgram(program);
			callback(program);
		}
	}//fshaderLoaded
    
	loadFile(vs, vshaderLoaded, true);
	loadFile(fs, fshaderLoaded, true);
}//loadProgram