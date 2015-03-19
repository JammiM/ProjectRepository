const char* vertShaderCode =

"#version 120\r\n"
""
"in attribute vec2 position;"
"void main()"
"{"
""
" gl_Position = vec4(position, 0.0, 1.0);"
""
""
"}";


const char* fragShaderCode =

"#version 120\r\n"
""
"out vec4 colour;"
""
""
"void main()"
"{"
""
"colour = vec4(0.0, 1.0, 0.0, 1.0);"
""
""
""
""
"}";
