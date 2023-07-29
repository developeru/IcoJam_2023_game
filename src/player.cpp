#include "player.h"
#include <iostream>

void Player::Movement(int x)
{
    player = {(float)posX, (float)posY, (float)width, (float)height};
    playercol = {(float)posX, (float)posY+2, (float)width, (float)height};
    switch (CheckCollisionRecs(playercol, floor))
    {
    case true:
        color = YELLOW;
        break;
    case false:
        color = BLUE;
        break;
    }
    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
    {
        posX += x;
    }
    else if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
    {
        posX -= x;
    }
    else if (IsKeyDown(KEY_W))
    {
        posY -= 2;
    }
    else if (IsKeyDown(KEY_S))
    {
        posY += 2;
    }
}