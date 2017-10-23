// include standard headers
#include <stdio.h>
#include <stdlib.h>

// include GLEW. Always include it before gl.h and glfw.h, since it's a bit magic.
#include <GL/glew.h>

// Include GLFW
#include <GL/glfw3.h>

// Include GLM
#include <glm/glm.hpp>

using namespace glm;

int main(){
  // Initialise GLFW
  if( !glfwInit() )
  {
     fprintf( stderr, "Failed to initialize GLFW\n" );
     return -1;
  }
}
