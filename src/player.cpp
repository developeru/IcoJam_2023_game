#include "player.h"
#include <iostream>

#define G 0.5
#define H_SPEED 2.0f
#define V_SPEED 12.0f

void Player::Movement(Rectangle floor)
{
    player = {(float)posX, (float)posY, (float)width, (float)height};
    playercol = {(float)posX, (float)posY + 2, (float)width, (float)height};
    hspeed = H_SPEED;

    if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) // Running
    {
        hspeed = H_SPEED * 2;
    }
    else
        hspeed = H_SPEED;

    // Bi-directional controls
    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
        posX += hspeed;
    else if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
        posX += -hspeed;

    // Jumping
    if ((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && CheckCollisionRecs(playercol, floor))
    {
        vspeed = -V_SPEED;
        posY += vspeed;
    }

    if (!CheckCollisionRecs(playercol, floor))
    {
        vspeed += G;
        posY += vspeed;
    }
}