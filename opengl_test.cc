#include <iostream>

#ifdef USE_GLES
// Enables using OpenGL ES3.
#include "GLES3/gl32.h"
#include "GLES3/gl3ext.h"
#else
// Uses OpenGL.
#include <GL/gl.h>
#include <GL/glext.h>
#endif  // USE_GLES

#define ASSERT_GL_OK()                           \
  do {                                           \
    auto gl_error = glGetError();                \
    if (gl_error != GL_NO_ERROR) {               \
      std::cout << "GL had error!" << std::endl; \
    }                                            \
  } while (false);

int main(int argc, char* argv[]) {
  ASSERT_GL_OK()
}
