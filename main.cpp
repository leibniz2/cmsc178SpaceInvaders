#include <windows.h>
#include <mmsystem.h>
#include <graphics.h>
#include <math.h>
#include <vector>
#include <stdio.h>
#include <iostream>

#include "MyPolygon.h"
#include "Bullet.h"
#include "Alien.h"
#include "Canon.h"


using namespace std;

class VectorContainer{
    public:
        vector<Bullet> bullets;
        vector<Alien> aliens;
};

void moveAlien(Alien alien, boolean add,int x, int y, int type){
    if (type == 0)
        alien.drawAlien1(x, y);
    else if (type == 1)
        alien.drawAlien2(x, y);
    mciSendString("play .\\assets\\zzz.wav",NULL,0,NULL);
}

vector<Alien> addAlien(vector<Alien> aliens){
    Alien alien;
    int y = 10;
    int x;
    for(int j=0, ctr=0;j<2;j++){
        int type = j%2;
        x = 50;
        for(int i=0; i<5;i++,ctr++){
            alien.x = x;
            alien.y = y;
            alien.ctr = ctr;
            alien.type = type;
            aliens.push_back(alien);
            x+=60;
        }
        y+=50;
    }
    return aliens;
}

vector<Bullet> checkBullets(vector<Bullet> bullets){
    for(int b = 0; b<bullets.size();b++){
        int bx1 = bullets[b].x - 2;
        int by1 = bullets[b].y - 5;
        int bx2 = bullets[b].x + 2;
        int by2 = bullets[b].y - 5;
        if(bx1 < 0 || bx1 > 640 || by1 < 0 || by2 < 0){
            bullets.erase (bullets.begin()+b);
        }
    }
    return bullets;
}

VectorContainer checkCollision(VectorContainer vectorContainer, int &score, int &bullets_left){
    for(int b = 0; b<vectorContainer.bullets.size();b++){
        int newX1 = vectorContainer.bullets[b].x - 5;
        int newY1 = vectorContainer.bullets[b].y;
        int newX2 = vectorContainer.bullets[b].x + 5;
        int newY2 = vectorContainer.bullets[b].y;
        int newX3 = vectorContainer.bullets[b].x - 5;
        int newY3 = vectorContainer.bullets[b].y + 10;
        int newX4 = vectorContainer.bullets[b].x + 5;
        int newY4 = vectorContainer.bullets[b].y + 10;

        int bx1 = cos(vectorContainer.bullets[b].angle) * (newX1 - vectorContainer.bullets[b].x) - sin(vectorContainer.bullets[b].angle) * (newY1 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].x;
        int by1 = sin(vectorContainer.bullets[b].angle) * (newX1 - vectorContainer.bullets[b].x) + cos(vectorContainer.bullets[b].angle) * (newY1 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].y;
        int bx2 = cos(vectorContainer.bullets[b].angle) * (newX2 - vectorContainer.bullets[b].x) - sin(vectorContainer.bullets[b].angle) * (newY2 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].x;
        int by2 = sin(vectorContainer.bullets[b].angle) * (newX2 - vectorContainer.bullets[b].x) + cos(vectorContainer.bullets[b].angle) * (newY2 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].y;
        int bx3 = cos(vectorContainer.bullets[b].angle) * (newX3 - vectorContainer.bullets[b].x) - sin(vectorContainer.bullets[b].angle) * (newY3 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].x;
        int by3 = sin(vectorContainer.bullets[b].angle) * (newX3 - vectorContainer.bullets[b].x) + cos(vectorContainer.bullets[b].angle) * (newY3 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].y;
        int bx4 = cos(vectorContainer.bullets[b].angle) * (newX4 - vectorContainer.bullets[b].x) - sin(vectorContainer.bullets[b].angle) * (newY4 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].x;
        int by4 = sin(vectorContainer.bullets[b].angle) * (newX4 - vectorContainer.bullets[b].x) + cos(vectorContainer.bullets[b].angle) * (newY4 - vectorContainer.bullets[b].y) + vectorContainer.bullets[b].y;

        for(int a = 0; a<vectorContainer.aliens.size();a++){
            int ax1 = vectorContainer.aliens[a].x - 10;
            int ay1 = vectorContainer.aliens[a].y + 0;
            int ax2 = vectorContainer.aliens[a].x + 40;
            int ay2 = vectorContainer.aliens[a].y + 0;
            int ax3 = vectorContainer.aliens[a].x - 10;
            int ay3 = vectorContainer.aliens[a].y + 40;
            int ax4 = vectorContainer.aliens[a].x + 40;
            int ay4 = vectorContainer.aliens[a].y + 40;

            if((ax1 <= bx1 && ax2 >= bx1 && ax3 <= bx1 && ax4 >= bx1 && ay1 <= by1 && ay2 <= by1 && ay3 >= by1 && ay4 >= by1) ||
               (ax1 <= bx2 && ax2 >= bx2 && ax3 <= bx2 && ax4 >= bx2 && ay1 <= by2 && ay2 <= by2 && ay3 >= by2 && ay4 >= by2) ||
               (ax1 <= bx3 && ax2 >= bx3 && ax3 <= bx3 && ax4 >= bx3 && ay1 <= by3 && ay2 <= by3 && ay3 >= by3 && ay4 >= by3) ||
               (ax1 <= bx4 && ax2 >= bx4 && ax3 <= bx4 && ax4 >= bx4 && ay1 <= by4 && ay2 <= by4 && ay3 >= by4 && ay4 >= by4)){
                vectorContainer.aliens.erase (vectorContainer.aliens.begin()+a);
                vectorContainer.bullets.erase (vectorContainer.bullets.begin()+b);
                mciSendString("play .\\assets\\destroyed.wav",NULL,0,NULL);
                score++;
                if(bullets_left !=5){
                    bullets_left++;
                }
            }
        }
    }
    return vectorContainer;
}

boolean checkisGameOver(vector<Alien> aliens){
    for(int a=0;a<aliens.size();a++) {
        int ay3 = aliens[a].y + 40;
        int ay4 = aliens[a].y + 40;
        if(ay3 >= 425 || ay4 >= 425){
            Sleep(2*1000);
            return true;
        }
    }
    return false;
}

void showResults(int page, boolean isStageComplete){
    cleardevice();
    setcolor(11);
    mciSendString("stop .\\assets\\zzz.wav",NULL,0,NULL);
    mciSendString("close .\\assets\\zzz.wav",NULL,0,NULL);
    if(isStageComplete){
        outtextxy(10, 10, "Get ready to next level!");
    }
    else{
        outtextxy(10, 10, "Game over! Starting again!");
        mciSendString("play .\\assets\\over.wav",NULL,0,NULL);
        Sleep(500);
        mciSendString("close .\\assets\\over.wav",NULL,0,NULL);
        Sleep(1500);

    }
    setactivepage(page);
    setvisualpage(1-page);
}

void startGame(int page, int &level, int &score, double &inc){
    VectorContainer vectorContainer;
    vectorContainer.aliens = addAlien(vectorContainer.aliens);
    Canon canon;
    boolean add = true, isGameOver = false, isStageComplete = false, isAllowedToShot = true;
    double k = .07 - inc, angle = 0;
    int timer = 0, bullets_left = 5;
    char msg[12], msg2[12], msg3[18];

    //----GAME LOOP----------
    for(int i=0, j=0, b=0;!isGameOver;i+=10,b++){
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        setcolor(level);
        if (j>=250){ // first zone
            k = 0.03 - inc ;
        } else if(j>=150){ // second zone
            k = 0.05 - inc;
        }
        if (i == 300 && add){
            i = 10;
            j = j + 10;
            add = false;
        } else if (i == 310 && !add){
            i = 0;
            j = j + 10;
            add = true;
        }

        if (angle<60 && GetAsyncKeyState( VK_RIGHT ) & 0x8000){
            angle+=3;
        } else if (angle>-60 && GetAsyncKeyState( VK_LEFT ) & 0x8000){
            angle-=3;
        }
        if (GetAsyncKeyState( VK_SPACE ) & 0x8000 && b>8 && isAllowedToShot && bullets_left != 0){
            mciSendString("play .\\assets\\player_shot.wav",NULL,0,NULL);
            Bullet bullet;
            bullet.x = 330;
            bullet.y = 460;
            bullet.angle = (angle*3.1428)/180;
            vectorContainer.bullets.push_back(bullet);
            b = 0;
            bullets_left--;
            isAllowedToShot = false;
        }

        for(int ctr=0;ctr<vectorContainer.aliens.size();ctr++){
            if(add){
                vectorContainer.aliens[ctr].x = 50 + (vectorContainer.aliens[ctr].ctr%5*60);
                vectorContainer.aliens[ctr].x = vectorContainer.aliens[ctr].x + i;
            } else {
                vectorContainer.aliens[ctr].x = 350 + (vectorContainer.aliens[ctr].ctr%5*60);
                vectorContainer.aliens[ctr].x = vectorContainer.aliens[ctr].x - i;
            }
            vectorContainer.aliens[ctr].y = vectorContainer.aliens[ctr].type*50 + j;
            moveAlien(vectorContainer.aliens[ctr],add,vectorContainer.aliens[ctr].x, vectorContainer.aliens[ctr].y, vectorContainer.aliens[ctr].type);
        }

        if( timer == 17 ) {
            isAllowedToShot = true;
            timer = 0;
        }

        // user
        setcolor(11);

        canon.drawPlatform(310,455);
        canon.drawCanon(330,460, angle);

        for(int ctr=0;ctr<vectorContainer.bullets.size();ctr++){
            vectorContainer.bullets[ctr].rotateBullet(vectorContainer.bullets[ctr].x,vectorContainer.bullets[ctr].y,vectorContainer.bullets[ctr].angle);
            vectorContainer.bullets[ctr].y -= cos(vectorContainer.bullets[ctr].angle)*10;
            vectorContainer.bullets[ctr].x += sin(vectorContainer.bullets[ctr].angle)*10;
        }


        vectorContainer = checkCollision(vectorContainer, score, bullets_left);

        sprintf(msg2, "Level: %d", level);
        sprintf(msg, "Score: %d", score);
        sprintf(msg3, "Bullets Left: %d", bullets_left);
        outtextxy(10,30, msg3);
        outtextxy(10,10, msg2);
        outtextxy(70,10, msg);
        vectorContainer = vectorContainer;
        vectorContainer.bullets = checkBullets(vectorContainer.bullets);

        if (vectorContainer.aliens.size()==0){
            isStageComplete = true;
            level++; // added value
            isGameOver = true;
            inc += 0.001;
        }
        if(checkisGameOver(vectorContainer.aliens) || bullets_left==0){
            isGameOver = true;
            level = 1;
            score = 0;
        }
        page = 1 - page;
        Sleep(k*1000);

        if(isGameOver){
            break;
        }
        timer++;
    }

    showResults(page,isStageComplete);
}

int main(){
    initwindow(640,480,"Space Invaders",GetSystemMetrics(SM_CXSCREEN)/6,GetSystemMetrics(SM_CYSCREEN)/8);
    int level = 1, score = 0;
    double inc = 0.0;

    //Sleep(3000);
    while(true){
        int page = 0;
        cleardevice();
        startGame(page, level, score, inc);
        Sleep(1*1000);
    }
    getch();
    closegraph();
    return 0;
}
