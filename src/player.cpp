#include "player.h"
#include <iostream>

#define G 0.5
#define H_SPEED 2.0f
#define V_SPEED 12.0f

void Player::Movement(int h_speed, int v_speed)
{
    player = {(float)posX, (float)posY, (float)width, (float)height};
    playercol = {(float)posX, (float)posY + 2, (float)width, (float)height};

    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
        posX += H_SPEED;
    else if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
        posX -= H_SPEED;
    if (IsKeyDown(KEY_W) && CheckCollisionRecs(playercol, floor))
    {
        speed += -V_SPEED;
        posY += speed;
    }

    if (!CheckCollisionRecs(playercol, floor))
    {
        speed += G;
        posY += speed;
    }
}