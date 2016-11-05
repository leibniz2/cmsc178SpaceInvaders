#include "Bullet.h"
#include<graphics.h>
#include<math.h>

void Bullet::rotateBullet(int x, int y, double angle){
   int x1 = x - 2;
   int y1 = y - 5;
   int x2 = x + 2;
   int y2 = y - 5;
   int x3 = x - 2;
   int y3 = y + 5;
   int x4 = x + 2;
   int y4 = y + 5;


   int newX1 = cos(angle) * (x1 - x) - sin(angle) * (y1 - y) + x;
   int newY1 = sin(angle) * (x1 - x) + cos(angle) * (y1 - y) + y;
   int newX2 = cos(angle) * (x2 - x) - sin(angle) * (y2 - y) + x;
   int newY2 = sin(angle) * (x2 - x) + cos(angle) * (y2 - y) + y;
   int newX3 = cos(angle) * (x3 - x) - sin(angle) * (y3 - y) + x;
   int newY3 = sin(angle) * (x3 - x) + cos(angle) * (y3 - y) + y;
   int newX4 = cos(angle) * (x4 - x) - sin(angle) * (y4 - y) + x;
   int newY4 = sin(angle) * (x4 - x) + cos(angle) * (y4 - y) + y;

   line(newX1, newY1, newX2, newY2);
   line(newX1, newY1, newX3, newY3);
   line(newX2, newY2, newX4, newY4);
   line(newX3, newY3, newX4, newY4);
}
