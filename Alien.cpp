#include "Alien.h"
#include<graphics.h>
#include<math.h>

void Alien::drawAlien3(int tmpX, int tmpY){
    polygon.drawPixel(tmpX,tmpY,0, 0);
    polygon.drawPixel(tmpX,tmpY,25, 0);
    polygon.drawPixel(tmpX,tmpY,5, 5);
    polygon.drawPixel(tmpX,tmpY,20, 5);
    polygon.drawPixel(tmpX,tmpY,0, 10);
    polygon.drawPixel(tmpX,tmpY,5, 10);
    polygon.drawPixel(tmpX,tmpY,10, 10);
    polygon.drawPixel(tmpX,tmpY,15, 10);
    polygon.drawPixel(tmpX,tmpY,20, 10);
    polygon.drawPixel(tmpX,tmpY,25, 10);
    polygon.drawPixel(tmpX,tmpY,-5, 15);
    polygon.drawPixel(tmpX,tmpY,0, 15);
    polygon.drawPixel(tmpX,tmpY,10, 15);
    polygon.drawPixel(tmpX,tmpY,15, 15);
    polygon.drawPixel(tmpX,tmpY,25, 15);
    polygon.drawPixel(tmpX,tmpY,30, 15);
    polygon.drawPixel(tmpX,tmpY,-10, 20);
    polygon.drawPixel(tmpX,tmpY,-5, 20);
    polygon.drawPixel(tmpX,tmpY,0, 20);
    polygon.drawPixel(tmpX,tmpY,5, 20);
    polygon.drawPixel(tmpX,tmpY,10, 20);
    polygon.drawPixel(tmpX,tmpY,15, 20);
    polygon.drawPixel(tmpX,tmpY,20, 20);
    polygon.drawPixel(tmpX,tmpY,25, 20);
    polygon.drawPixel(tmpX,tmpY,30, 20);
    polygon.drawPixel(tmpX,tmpY,35, 20);
    polygon.drawPixel(tmpX,tmpY,-10, 25);
    polygon.drawPixel(tmpX,tmpY,0, 25);
    polygon.drawPixel(tmpX,tmpY,5, 25);
    polygon.drawPixel(tmpX,tmpY,10, 25);
    polygon.drawPixel(tmpX,tmpY,15, 25);
    polygon.drawPixel(tmpX,tmpY,20, 25);
    polygon.drawPixel(tmpX,tmpY,25, 25);
    polygon.drawPixel(tmpX,tmpY,35, 25);
    polygon.drawPixel(tmpX,tmpY,-10, 30);
    polygon.drawPixel(tmpX,tmpY,0, 30);
    polygon.drawPixel(tmpX,tmpY,25, 30);
    polygon.drawPixel(tmpX,tmpY,35, 30);
    polygon.drawPixel(tmpX,tmpY,5, 35);
    polygon.drawPixel(tmpX,tmpY,20, 35);
}

void Alien::drawAlien1(int tmpX, int tmpY){
    polygon.drawPixel(tmpX,tmpY,0, 0);
    polygon.drawPixel(tmpX,tmpY,5, 0);
    polygon.drawPixel(tmpX,tmpY,10, 0);
    polygon.drawPixel(tmpX,tmpY,15, 0);
    polygon.drawPixel(tmpX,tmpY,20, 0);
    polygon.drawPixel(tmpX,tmpY,25, 0);
    polygon.drawPixel(tmpX,tmpY,30, 0);
    polygon.drawPixel(tmpX,tmpY,35, 0);
     polygon.drawPixel(tmpX,tmpY,0, 5);
      polygon.drawPixel(tmpX,tmpY,0, 10);
       polygon.drawPixel(tmpX,tmpY,0, 15);
        polygon.drawPixel(tmpX,tmpY,0, 20);
         polygon.drawPixel(tmpX,tmpY,0, 25);
          polygon.drawPixel(tmpX,tmpY,0, 30);
           polygon.drawPixel(tmpX,tmpY,0, 35);
             polygon.drawPixel(tmpX,tmpY,35, 5);
           polygon.drawPixel(tmpX,tmpY,35, 10);
          polygon.drawPixel(tmpX,tmpY,35, 15);
        polygon.drawPixel(tmpX,tmpY,35, 20);
       polygon.drawPixel(tmpX,tmpY,35, 25);
      polygon.drawPixel(tmpX,tmpY,35, 30);
    polygon.drawPixel(tmpX,tmpY,35, 35);
    polygon.drawPixel(tmpX,tmpY,0, 35);
    polygon.drawPixel(tmpX,tmpY,5, 35);
    polygon.drawPixel(tmpX,tmpY,10, 35);
    polygon.drawPixel(tmpX,tmpY,15, 35);
    polygon.drawPixel(tmpX,tmpY,20, 35);
    polygon.drawPixel(tmpX,tmpY,25, 35);
    polygon.drawPixel(tmpX,tmpY,30, 35);
    polygon.drawPixel(tmpX,tmpY,35, 35);
}

void Alien::drawAlien2(int tmpX, int tmpY){
    polygon.drawPixel(tmpX,tmpY,0, 0);
    polygon.drawPixel(tmpX,tmpY,5, 0);
    polygon.drawPixel(tmpX,tmpY,10, 0);
    polygon.drawPixel(tmpX,tmpY,15, 0);
    polygon.drawPixel(tmpX,tmpY,20, 0);
    polygon.drawPixel(tmpX,tmpY,25, 0);
    polygon.drawPixel(tmpX,tmpY,30, 0);
    polygon.drawPixel(tmpX,tmpY,35, 0);
     polygon.drawPixel(tmpX,tmpY,0, 5);
      polygon.drawPixel(tmpX,tmpY,0, 10);
       polygon.drawPixel(tmpX,tmpY,0, 15);
        polygon.drawPixel(tmpX,tmpY,0, 20);
         polygon.drawPixel(tmpX,tmpY,0, 25);
          polygon.drawPixel(tmpX,tmpY,0, 30);
           polygon.drawPixel(tmpX,tmpY,0, 35);
             polygon.drawPixel(tmpX,tmpY,35, 5);
           polygon.drawPixel(tmpX,tmpY,35, 10);
          polygon.drawPixel(tmpX,tmpY,35, 15);
        polygon.drawPixel(tmpX,tmpY,35, 20);
       polygon.drawPixel(tmpX,tmpY,35, 25);
      polygon.drawPixel(tmpX,tmpY,35, 30);
    polygon.drawPixel(tmpX,tmpY,35, 35);
    polygon.drawPixel(tmpX,tmpY,0, 35);
    polygon.drawPixel(tmpX,tmpY,5, 35);
    polygon.drawPixel(tmpX,tmpY,10, 35);
    polygon.drawPixel(tmpX,tmpY,15, 35);
    polygon.drawPixel(tmpX,tmpY,20, 35);
    polygon.drawPixel(tmpX,tmpY,25, 35);
    polygon.drawPixel(tmpX,tmpY,30, 35);
    polygon.drawPixel(tmpX,tmpY,35, 35);
}

