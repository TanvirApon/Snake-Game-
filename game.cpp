#include<cstdio>
#include<Gl/gl.h>
#include<Gl/glut.h>
#include<ctime>
#include "game.h"

short sdirection = RIGHT;
extern bool gameover;
bool food = true;
int foodX,foodY;
void unit(int,int);
int gridX,gridY;
int snake_length = 3;
int posX[60]={20,20,20},posY[60]={20,19,18};

void initGrid(int x, int y)
{
    gridX = x;
    gridY = y;


}

void drawGrid()
{


   for(int x=0;x<gridX;x++)

   {

       for(int y=0;y<gridY;y++)
       {

           unit(x,y);

       }



   }



}
void drawsanke()
{
    for(int i=snake_length-1;i>0;i--)
    {
        posX[i]=posX[i-1];
        posY[i]=posY[i-1];


    }
   if(sdirection==UP)
         posY[0]++;
  else if(sdirection==DOWN)
            posY[0]--;
    else if(sdirection==RIGHT)
           posX[0]++;
   else if(sdirection==LEFT)
          posX[0]--;
          for(int i= 0; i<snake_length;i++)
          {
              if(i== 0)
             glColor3f(0.0,1.0,0.0);
              else
                glColor3f(0.0,1.0,0.0);
               glRectd(posX[i],posY[i],posX[i]+1,posY[i]+1);
          }

  if( posX[0]== 0 || posX[0]==gridX-1  ||  posY[0]==0 ||  posY[0]==gridY-1)
  {

      gameover=true;


  }

  if(posX[0]== foodX && posY[0]==foodY)
  {
       snake_length++;
       if(snake_length>Max)
            snake_length=Max;

      food=true;
  }
}
void drawfood()
{

    if(food)
        random(foodX,foodY);
    food=false;
    glRectf(foodX,foodY,foodX+1,foodY+1);





}


void unit(int x, int y)
{

    glLineWidth(1.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x,y);
    glVertex2f(x+1,y);
    glVertex2f(x+1,y+1);
    glVertex2f(x,y+1);
    glEnd();
}

void random(int &x, int &y)
{

    int _maxX= gridX-2;

    int _maxY= gridY-2;


    int _min= 1;
    srand(time(NULL));

    x = _min + rand() % (_maxX-_min);
    y = _min + rand() % (_maxY-_min);


}
