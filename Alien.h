#ifndef ALIEN_H
#define ALIEN_H

#include "Blocks.h"

class Alien
{
    public:
        Blocks polygon;
        int x, y, ctr, type;
        void drawBlinkingAlien(int,int, bool);
        void drawRocketAlien(int, int, int);
        void drawClownAlien(int, int, bool);
        void drawJigsawAlien(int, int, bool);

    protected:

    private:
};

#endif // ALIEN_H
