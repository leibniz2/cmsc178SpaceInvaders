#include "MyText.h"

void MyText::writeYouWin(int x, int y, int inc){
    alphabets.writeY(x,y,inc,0);
    alphabets.writeO(x,y,inc,1);
    alphabets.writeU(x,y,inc,2);
    alphabets.writeW(x,y,inc,3);
    alphabets.writeI(x,y,inc,4);
    alphabets.writeN(x,y,inc,5);
}

void MyText::writeYouLose(int x, int y, int inc){
    alphabets.writeY(x,y,inc,0);
    alphabets.writeO(x,y,inc,1);
    alphabets.writeU(x,y,inc,2);
    alphabets.writeL(x,y,inc,3);
    alphabets.writeO(x,y,inc,4);
    alphabets.writeS(x,y,inc,5);
    alphabets.writeE(x,y,inc,6);
}

void MyText::writeSpace(int x, int y, int inc){
    alphabets.writeS(x,y,inc,0);
    alphabets.writeP(x,y,inc,1);
    alphabets.writeA(x,y,inc,2);
    alphabets.writeC(x,y,inc,3);
    alphabets.writeE(x,y,inc,4);
}

void MyText::writeInvaders(int x, int y, int inc){
    alphabets.writeI(x,y+(8*inc),inc,0);
    alphabets.writeN(x,y+(8*inc),inc,1);
    alphabets.writeV(x,y+(8*inc),inc,2);
    alphabets.writeA(x,y+(8*inc),inc,3);
    alphabets.writeD(x,y+(8*inc),inc,4);
    alphabets.writeE(x,y+(8*inc),inc,5);
    alphabets.writeR(x,y+(8*inc),inc,6);
    alphabets.writeS(x,y+(8*inc),inc,7);
}

void MyText::writeSpaceInvaders(int x, int y, int inc){
    writeSpace(x+(9*inc),y,inc);
    writeInvaders(x,y,inc);
}

