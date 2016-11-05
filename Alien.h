#ifndef ALIEN_H
#define ALIEN_H

#include "MyPolygon.h"

class Alien
{
    public:
        MyPolygon polygon;
        int x, y, ctr, type;
        void drawAlien1(int,int);
        void drawAlien2(int,int);
        void drawAlien3(int,int);

    protected:

    private:
};

#endif // ALIEN_H
