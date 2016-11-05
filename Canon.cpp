#include "Canon.h"

void Canon::drawPlatform(int x, int y){
     /*drawPixel(310, 455, 18, 0);

     drawPixel(310, 455, 15, 5);
     drawPixel(310, 455, 21, 5);

     drawPixel(310, 455, 18, 10);
     drawPixel(310, 455, 13, 10);
     drawPixel(310, 455, 23, 10);

     drawPixel(310, 455, 15, 15);
     drawPixel(310, 455, 20, 15);
     drawPixel(310, 455, 10, 15);
     drawPixel(310, 455, 25, 15);

     drawPixel(310, 455, 5, 20);
     drawPixel(310, 455, 10, 20);
     drawPixel(310, 455, 15, 20);
     drawPixel(310, 455, 20, 20);
     drawPixel(310, 455, 25, 20);
     drawPixel(310, 455, 30, 20);*/

        drawPixel(310,455,10, 5);
        drawPixel(310,455,15, 5);
        drawPixel(310,455,20, 5);
        drawPixel(310,455,25, 5);
        drawPixel(310,455,15, 0);
        drawPixel(310,455,20, 0);
        drawPixel(310,455,5, 5);
    drawPixel(310,455,30, 5);

    drawPixel(310,455,0, 10);
    drawPixel(310,455,10, 10);
    drawPixel(310,455,25, 10);
    drawPixel(310,455,35, 10);
    drawPixel(310,455,0, 15);
    drawPixel(310,455,35, 15);
    drawPixel(310,455,0, 20);
    drawPixel(310,455,35, 20);
    drawPixel(310,455,0, 25);
    drawPixel(310,455,35, 25);

    drawPixel(310,455,5, 30);
    drawPixel(310,455,10, 30);
    drawPixel(310,455,15, 30);
    drawPixel(310,455,20, 30);
    drawPixel(310,455,25, 30);
    drawPixel(310,455,30, 30);

    drawPixel(310,455,15, 35);
    drawPixel(310,455,20, 35);



}

void Canon::drawCanon(int x, int y, double angle){
    polygon.rotateGun(x,y,angle);
}

void Canon::drawPixel(int tmpX, int tmpY,int incrementX, int incrementY){
    polygon.drawSquare(tmpX+incrementX,tmpY+incrementY,5);
}
