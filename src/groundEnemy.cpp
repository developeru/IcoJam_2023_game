#include "groundEnemy.h"
#include <iostream>


void NEnemy::Movement(int range, float m)
{
    if (walked > range) {
        moveleft = true;
    } else if (walked < 0) moveleft = false;
    
    if (!moveleft) 
    {
        posX += m;
        walked += m;
    }
    else {
        posX -= m;
        walked -= m;
    }
}

bool NEnemy::HasHadCollision(Rectangle player) 
{
    enemy1 = {(float)posX, (float)posY, (float)width, (float)height};
    if (CheckCollisionRecs(player, enemy1)) hasCollided = true;
    return hasCollided; 
}

void NEnemy::CheckDraw(Rectangle player) 
{
    if (!HasHadCollision(player))
        Draw();
    else
    {
        DrawText("You Lost!", 160, 220, 100, RED);
    }
}
