#ifndef MYTEXT_H
#define MYTEXT_H

#include "Alphabets.h"

class MyText
{
    public:
        Alphabets alphabets;
        void writeYouWin(int,int,int);
        void writeYouLose(int, int, int);
        void writeGameOver(int, int, int);
        void writeSpace(int, int, int);
        void writeInvaders(int, int, int);
        void writeSpaceInvaders(int, int, int);
    protected:

    private:
};

#endif // MYTEXT_H
