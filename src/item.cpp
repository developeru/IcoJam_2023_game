#include "item.h"

bool Item::Collected(Rectangle player) 
{
    item = {(float)posX, (float)posY, (float)width, (float)height};
    if (CheckCollisionRecs(player, item)) hasCollided = true;
    return hasCollided; 
}

