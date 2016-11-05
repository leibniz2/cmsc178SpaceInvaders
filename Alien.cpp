#include "Alien.h"
#include<graphics.h>
#include<math.h>

/*
    Alien is 8 x 8

    // CORNERS
    00 - (0, 0) // UPPER-LEFT CORNER
    07 - (0, 35) // UPPER-RIGHT CORNER
    56 - (35, 0) // LOWER-LEFT  CORNER
    63 - (35,35) // LOWER-RIGHT CORNER

*/

void Alien::drawJigsawAlien(int tmpX, int tmpY, bool willBlink){
    if(willBlink){ // blinking cells
        setcolor(YELLOW);
        polygon.drawPixel(tmpX,tmpY,10, 20);
        polygon.drawPixel(tmpX,tmpY,25, 20);
    }

    setcolor(GREEN);
    polygon.drawPixel(tmpX,tmpY,5, 0);
    polygon.drawPixel(tmpX,tmpY,10, 0);
    polygon.drawPixel(tmpX,tmpY,15, 0);
    polygon.drawPixel(tmpX,tmpY,20, 0);
    polygon.drawPixel(tmpX,tmpY,25, 0);
    polygon.drawPixel(tmpX,tmpY,30, 0);

    polygon.drawPixel(tmpX,tmpY,5, 5);
    polygon.drawPixel(tmpX,tmpY,30, 5);

    polygon.drawPixel(tmpX,tmpY,0, 10);
    polygon.drawPixel(tmpX,tmpY,10, 10);
    polygon.drawPixel(tmpX,tmpY,25, 10);
    polygon.drawPixel(tmpX,tmpY,35, 10);

    polygon.drawPixel(tmpX,tmpY,0, 15);
    polygon.drawPixel(tmpX,tmpY,35, 15);

    polygon.drawPixel(tmpX,tmpY,0, 20);
    polygon.drawPixel(tmpX,tmpY,35, 20);

    polygon.drawPixel(tmpX,tmpY,0, 25);
    polygon.drawPixel(tmpX,tmpY,35, 25);

    polygon.drawPixel(tmpX,tmpY,5, 30);
    polygon.drawPixel(tmpX,tmpY,30, 30);

    polygon.drawPixel(tmpX,tmpY,5, 35);
    polygon.drawPixel(tmpX,tmpY,10, 35);
    polygon.drawPixel(tmpX,tmpY,15, 35);
    polygon.drawPixel(tmpX,tmpY,20, 35);
    polygon.drawPixel(tmpX,tmpY,25, 35);
    polygon.drawPixel(tmpX,tmpY,30, 35);
}

void Alien::drawBlinkingAlien(int tmpX, int tmpY, bool willBlink){
    // alien diagram
    /* 0 1 2
       3   5
       6 7 8
    */
    if(willBlink){ // blinking cells
        setcolor(RED);
        polygon.drawPixel(tmpX,tmpY,0, 0); // 0
        polygon.drawPixel(tmpX,tmpY,0, 35); // 6
        polygon.drawPixel(tmpX,tmpY,35, 35); // 8
        polygon.drawPixel(tmpX,tmpY,35, 0); // 2
    }
        setcolor(BLUE);
        polygon.drawPixel(tmpX,tmpY,18, 0); // 1
        polygon.drawPixel(tmpX,tmpY,0, 20); // 3
        polygon.drawPixel(tmpX,tmpY,35, 20); // 5
        polygon.drawPixel(tmpX,tmpY,18, 35); // 7

}

void Alien::drawClownAlien(int tmpX, int tmpY, bool willBlink){
    // blinking area

    if (willBlink) {
        setcolor(WHITE);
        polygon.drawPixel(tmpX,tmpY,0, 0);
        polygon.drawPixel(tmpX,tmpY,0, 5);
        polygon.drawPixel(tmpX,tmpY,35, 0);
        polygon.drawPixel(tmpX,tmpY,35, 5);
    }
    setcolor(RED);
    polygon.drawPixel(tmpX,tmpY,5, 5);
    polygon.drawPixel(tmpX,tmpY,10, 5);
    polygon.drawPixel(tmpX,tmpY,25, 5);
    polygon.drawPixel(tmpX,tmpY,30, 5);

    polygon.drawPixel(tmpX,tmpY,5, 10);
    polygon.drawPixel(tmpX,tmpY,10, 10);
    polygon.drawPixel(tmpX,tmpY,15, 10);
    polygon.drawPixel(tmpX,tmpY,20, 10);
    polygon.drawPixel(tmpX,tmpY,25, 10);
    polygon.drawPixel(tmpX,tmpY,30, 10);

    polygon.drawPixel(tmpX,tmpY,5, 15);
    polygon.drawPixel(tmpX,tmpY,10, 15);
    polygon.drawPixel(tmpX,tmpY,25, 15);
    polygon.drawPixel(tmpX,tmpY,30, 15);

    polygon.drawPixel(tmpX,tmpY,0, 25);
    polygon.drawPixel(tmpX,tmpY,35, 25);

    polygon.drawPixel(tmpX,tmpY,5, 30);
    polygon.drawPixel(tmpX,tmpY,10, 30);
    polygon.drawPixel(tmpX,tmpY,15, 30);
    polygon.drawPixel(tmpX,tmpY,20, 30);
    polygon.drawPixel(tmpX,tmpY,25, 30);
    polygon.drawPixel(tmpX,tmpY,30, 30);

    polygon.drawPixel(tmpX,tmpY,15, 35);
    polygon.drawPixel(tmpX,tmpY,20, 35);
}


void Alien::drawRocketAlien(int tmpX, int tmpY, int timer){
    //alien diagram
    if( timer % 3 == 0 ){ // ignite 1
        setcolor(RED);
        polygon.drawPixel(tmpX,tmpY,10, 5);
        polygon.drawPixel(tmpX,tmpY,15, 5);
        polygon.drawPixel(tmpX,tmpY,20, 5);
        polygon.drawPixel(tmpX,tmpY,25, 5);
    } else if ( timer % 7 == 0){
        setcolor(RED);
        polygon.drawPixel(tmpX,tmpY,10, 5);
        polygon.drawPixel(tmpX,tmpY,15, 5);
        polygon.drawPixel(tmpX,tmpY,20, 5);
        polygon.drawPixel(tmpX,tmpY,25, 5);
        polygon.drawPixel(tmpX,tmpY,15, 0);
        polygon.drawPixel(tmpX,tmpY,20, 0);
    }

    setcolor(BLUE);

    polygon.drawPixel(tmpX,tmpY,5, 5);
    polygon.drawPixel(tmpX,tmpY,30, 5);

    polygon.drawPixel(tmpX,tmpY,0, 10);
    polygon.drawPixel(tmpX,tmpY,10, 10);
    polygon.drawPixel(tmpX,tmpY,25, 10);
    polygon.drawPixel(tmpX,tmpY,35, 10);
    polygon.drawPixel(tmpX,tmpY,0, 15);
    polygon.drawPixel(tmpX,tmpY,35, 15);
    polygon.drawPixel(tmpX,tmpY,0, 20);
    polygon.drawPixel(tmpX,tmpY,35, 20);
    polygon.drawPixel(tmpX,tmpY,0, 25);
    polygon.drawPixel(tmpX,tmpY,35, 25);

    polygon.drawPixel(tmpX,tmpY,5, 30);
    polygon.drawPixel(tmpX,tmpY,10, 30);
    polygon.drawPixel(tmpX,tmpY,15, 30);
    polygon.drawPixel(tmpX,tmpY,20, 30);
    polygon.drawPixel(tmpX,tmpY,25, 30);
    polygon.drawPixel(tmpX,tmpY,30, 30);

    polygon.drawPixel(tmpX,tmpY,15, 35);
    polygon.drawPixel(tmpX,tmpY,20, 35);
}

