
var main=function() {
  var CANVAS=document.getElementById("your_canvas");
  CANVAS.width=window.innerWidth;
  CANVAS.height=window.innerHeight;

  /*========================= GET WEBGL CONTEXT ========================= */
  var GL;
  try {
    GL = CANVAS.getContext("experimental-webgl", {antialias: true});
  } catch (e) {
    alert("You are not webgl compatible :(") ;
    return false;
  }

  /*========================= SHADERS ========================= */
  /*jshint multistr: true */

  var shader_vertex_source="\n\
attribute vec2 position; //the position of the point\n\
attribute vec3 color; //the color of the point\n\
varying vec3 vColor;\n\
void main(void) { //pre-built function\n\
gl_Position = vec4(position, 0., 1.); //0. is the z, and 1 is w\n\
vColor=color;\n\
}";

  var shader_fragment_source="\n\
precision mediump float;\n\
varying vec3 vColor;\n\
void main(void) {\n\
gl_FragColor = vec4(vColor, 1.);\n\
}";

  var get_shader=function(source, type, typeString) {
    var shader = GL.createShader(type);
    GL.shaderSource(shader, source);
    GL.compileShader(shader);
    if (!GL.getShaderParameter(shader, GL.COMPILE_STATUS)) {
      alert("ERROR IN "+typeString+ " SHADER : " + GL.getShaderInfoLog(shader));
      return false;
    }
    return shader;
  };

  var shader_vertex=get_shader(shader_vertex_source, GL.VERTEX_SHADER, "VERTEX");
  var shader_fragment=get_shader(shader_fragment_source, GL.FRAGMENT_SHADER, "FRAGMENT");

  var SHADER_PROGRAM=GL.createProgram();
  GL.attachShader(SHADER_PROGRAM, shader_vertex);
  GL.attachShader(SHADER_PROGRAM, shader_fragment);

  GL.linkProgram(SHADER_PROGRAM);


  var _color = GL.getAttribLocation(SHADER_PROGRAM, "color");
  var _position = GL.getAttribLocation(SHADER_PROGRAM, "position");

  GL.enableVertexAttribArray(_color);
  GL.enableVertexAttribArray(_position);

  GL.useProgram(SHADER_PROGRAM);



  /*========================= THE CUBE ========================= */
  //POINTS :
  var cube_vertex=[
    -1,-1,-1,

    0,0,0,

    1,-1,-1,

    1,0,0,

    1,1,-1,

    1,1,0,

    -1,1,-1,

    0,1,0,

    -1,-1,1,

    0,0,1,

    1,-1,1,

    1,0,1,

    1,1,1,

    1,1,1,

    -1,1,1,

    0,1,1
  ];

  var CUBE_VERTEX= GL.createBuffer ();
  GL.bindBuffer(GL.ARRAY_BUFFER, CUBE_VERTEX);
  GL.bufferData(GL.ARRAY_BUFFER,
                new Float32Array(cube_vertex),
    GL.STATIC_DRAW);

  //FACES :
  var cube_faces = [
    0,1,2,
    0,2,3,

    4,5,6,
    4,6,7,

    0,3,7,
    0,4,7,

    1,2,6,
    1,5,6,

    2,3,6,
    3,7,6,

    0,1,5,
    0,4,5

  ];
  var CUBE_FACES= GL.createBuffer ();
  GL.bindBuffer(GL.ELEMENT_ARRAY_BUFFER, CUBE_FACES);
  GL.bufferData(GL.ELEMENT_ARRAY_BUFFER,
                new Uint16Array(cube_faces),
    GL.STATIC_DRAW);

  /*========================= MATRIX ========================= */

  var PROJMATRIX=LIBS.get_projection(40, CANVAS.width/CANVAS.height, 1, 100);
  var MOVEMATRIX=LIBS.get_I4();
  var VIEWMATRIX=LIBS.get_I4();



  LIBS.translateZ(VIEWMATRIX, -6);
  /*========================= DRAWING ========================= */

  GL.enable(GL.DEPTH_TEST);
  GL.depthFunc(GL.LEQUAL);
  GL.clearColor(0.0, 0.0, 0.0, 0.0);
  GL.clearDepth(1.0);

  var time_old=0;
  var animate=function(time) {
    var dt=time-time_old;
    LIBS.rotateZ(MOVEMATRIX, dt*0.001);
    LIBS.rotateY(MOVEMATRIX, dt*0.002);
    LIBS.rotateX(MOVEMATRIX, dt*0.003);
    time_old=time;

    GL.viewport(0.0, 0.0, CANVAS.width, CANVAS.height);
    GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);
    GL.uniformMatrix4fv(_Pmatrix, false, PROJMATRIX);
    GL.uniformMatrix4fv(_Vmatrix, false, VIEWMATRIX);
    GL.uniformMatrix4fv(_Mmatrix, false, MOVEMATRIX);
    GL.bindBuffer(GL.ARRAY_BUFFER, CUBE_VERTEX);
    GL.vertexAttribPointer(_position, 3, GL.FLOAT, false,4*(3+3),0);
    GL.vertexAttribPointer(_color, 3, GL.FLOAT, false,4*(3+3),3*4);
    GL.bindBuffer(GL.ELEMENT_ARRAY_BUFFER, CUBE_FACES);
    GL.drawElements(GL.TRIANGLES, 6*2*3, GL.UNSIGNED_SHORT, 0);

    GL.flush();

    window.requestAnimationFrame(animate);
  };
  animate(0);
};