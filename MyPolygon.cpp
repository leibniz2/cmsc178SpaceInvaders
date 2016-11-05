#include "MyPolygon.h"
#include <graphics.h>
#include <math.h>

void MyPolygon::drawRightTriangle(int x, int y, int inc){
    int x1 = x;
    int y1 = y+inc;
    int x2 = x+inc;
    int y2 = y;

    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);
}

void MyPolygon::drawReverseRightTriangle(int x, int y, int inc){
    int x1 = x;
    int y1 = y+inc;
    int x2 = x+inc;
    int y2 = y;
    x = x + inc;
    y = y + inc;

    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x, y);
}

void MyPolygon::drawSquare(int x, int y, int inc){
    drawRightTriangle(x,y,inc);
    drawReverseRightTriangle(x,y,inc);
}

void MyPolygon::rotateGun(int x, int y, double angle){
   int x1 = x - 2;
   int y1 = y - 40;
   int x2 = x + 2;
   int y2 = y - 40;
   int x3 = x - 2;
   int y3 = y + 1;
   int x4 = x + 2;
   int y4 = y + 1;

//    radians to degrees
//    angle = (angle*3.1428)/180;
//
//    set coordinates back to origin
//    xOrigin = x1 - x;
//    yOrigin = y1 - y;
//
//    x' = cos(angle) * xOrigin - sin(angle) * yOrigin + x;
//    y' = sin(angle) * xOrigin + cos(angle) * yOrigin + y;

   int newX1 = cos((angle*3.1428)/180) * (x1 - x) - sin((angle*3.1428)/180) * (y1 - y) + x;
   int newY1 = sin((angle*3.1428)/180) * (x1 - x) + cos((angle*3.1428)/180) * (y1 - y) + y;
   int newX2 = cos((angle*3.1428)/180) * (x2 - x) - sin((angle*3.1428)/180) * (y2 - y) + x;
   int newY2 = sin((angle*3.1428)/180) * (x2 - x) + cos((angle*3.1428)/180) * (y2 - y) + y;
   int newX3 = cos((angle*3.1428)/180) * (x3 - x) - sin((angle*3.1428)/180) * (y3 - y) + x;
   int newY3 = sin((angle*3.1428)/180) * (x3 - x) + cos((angle*3.1428)/180) * (y3 - y) + y;
   int newX4 = cos((angle*3.1428)/180) * (x4 - x) - sin((angle*3.1428)/180) * (y4 - y) + x;
   int newY4 = sin((angle*3.1428)/180) * (x4 - x) + cos((angle*3.1428)/180) * (y4 - y) + y;

   line(newX1, newY1, newX2, newY2);
   line(newX1, newY1, newX3, newY3);
   line(newX2, newY2, newX4, newY4);
   line(newX3, newY3, newX4, newY4);
}

void MyPolygon::drawPixel(int tmpX, int tmpY,int incrementX, int incrementY){
    drawSquare(tmpX+incrementX,tmpY+incrementY,5);
}
