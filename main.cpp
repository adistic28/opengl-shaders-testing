#include <stdio.h>
#include <stdlib.h>
#include <GL / glut.h>
#include <GL / glfw.h>
#include <GL / glew.h>
#include <glm / glm.hpp>
using namespace glm ;
int main (){
    glewExperimental = true; //core prof
if (!glfwInit() )
{fprintf(stderr , "failed to initialize glm");
return -1 ;  }
glfwWindowHint(GLFW_SAMPLES , 4 ) ; //ANTIALIASING
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR , 3 ); //OPENGL3.3
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR , 3 ) ;
glfwWindowHint(GLFW_OPENGL_PROFILE , GLFW_OPENGL_CORE_PROFILE ) ; // CORE PROFILE
//window initialisation
glfwWindow * window
window = glfwCreateWindow ( 1024 , 768 , "test1" , NULL , NULL  );
if (window == NULL ){
    fprintf(stderr , "gpu not compatible");
    glfwTerminate();
    return -1 ;

} glfwSetInputMode(window , GLFW_STICKY_KEYS , GL_TRUE) ;
do{
    glClear(GL_COLOR_BUFFER_BIT);
    //draw area
    GLuint VertexArrayID ;
    glGenVertexArrays(1 , &VertexArrayID);
    glBindVertexArrays(VertexArrayID) ;
    //array declaration
    static const * GLfloat g_vertex_buffer_data  [] =  {
        -1.0f , -1.0f , 0.0f ;
        1.0f , -1.0f , 0.0f ;
        0.0f , 1.0f , 1.0f ;

    }
    //code for triangle
      GLuint vertexbuffer ;
      glGEnBuffers(1 , %vertexbuffer ) ;
      glBindBuffer(GL_ARRAY_BUFFER , vertexbuffer) ;
      glBufferData( GL_ARRAY_BUFFER , sizeof(g_vertex_buffer_data) , g_vertex_buffer_data , GL_STATIC_DRAW ) ;
      glEnableVertexAttribArray(0) ;
      glBindBuffer(GL_VERTEX_BUFFER , vertexarray) ;
      glVertexAttribPointer
      (
          0 , //SHADER CONFIG NO
          3 , //SIZE
          GL_FLOAT , //FLOAT TYPE
          GL_FALSE , //NORMALISATION
          0 ;
          (void)* 0 , //shaders
      );
      //real triangle code
      glDrawArrays(GL_TRIANGLES , 0 , 3) ;
      glDisableVertexAttribArray(0) ;




    //swapping buffer
    glfwSwapBuffers(window);
    glfwPollEvents() ;}
while( glfwGetKey(window , GLFW_KEY_ESCAPE ) != GLFW_PRESS &&)
glfwWindowShouldClose(window) == 0 )


}
