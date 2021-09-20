#include<cstdio>
#include<Gl/gl.h>
#include<Gl/glut.h>
#include "game.h"
#define FPS 10

extern short sdirection;
bool gameover= false;

void display_callback();
void myInit();
void reshape_callback(int,int);
void timer_callback(int);
void keyboard_callback(int,int,int);


void myInit()
{

    glClearColor(0.0,0.0,0.0,1.0);
     initGrid(40,40);



}

int main(int argc,char ** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB);
  glutInitWindowSize(500,500);
  glutCreateWindow(" ");
  glutDisplayFunc(display_callback);
  glutReshapeFunc(reshape_callback);
  glutTimerFunc(0,timer_callback,0);
  glutSpecialFunc(keyboard_callback);
   myInit();
  glutMainLoop();



    return 0;
}




void display_callback()
{

    glClear(GL_COLOR_BUFFER_BIT);
    drawGrid();
    drawsanke();
    drawfood();
    glutSwapBuffers();
    if(gameover)
    {

        MessageBox(NULL,"Your score : ","GAME OVER",0);
        exit(0);

    }


}

void reshape_callback(int w,int h)
{

    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(1.0,40,0.0,40,-1.0,1.0);
    glMatrixMode(GL_MODELVIEW);

}

void timer_callback(int)
{

    glutPostRedisplay();
    glutTimerFunc(1000/FPS,timer_callback,0);

}

void keyboard_callback(int key,int,int)
{
  switch(key)
  {
  case GLUT_KEY_UP:
    if(sdirection!= DOWN)
        sdirection=UP;
        break;


  case GLUT_KEY_DOWN:
    if(sdirection!= UP)
        sdirection=DOWN;
        break;


case GLUT_KEY_RIGHT:
    if(sdirection!= LEFT)
       sdirection = RIGHT;
        break;



case GLUT_KEY_LEFT:
    if(sdirection!= RIGHT)
        sdirection = LEFT;
        break;

  }

}
