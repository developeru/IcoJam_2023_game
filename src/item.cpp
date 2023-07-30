#include "item.h"

bool Item::Collected(Rectangle player) 
{
    item = {(float)posX, (float)posY, (float)width, (float)height};
    if (CheckCollisionRecs(player, item)) hasCollided = true;
    return hasCollided; 
}

void Item::CheckDraw(Rectangle player, float* timerDuration) 
{
    if (!Collected(player))
        Draw();
    else if (Collected(player) && !timeAdded)
    {
        *timerDuration += 5;
        timeAdded = true;
    }
}
