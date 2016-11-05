#ifndef CANON_H
#define CANON_H

#include "MyPolygon.h"

class Canon
{
    public:
        MyPolygon polygon;
        void drawPlatform(int, int);
        void drawCanon(int, int, double);
        void drawPixel(int, int, int, int);

    protected:

    private:
};

#endif // CANON_H
