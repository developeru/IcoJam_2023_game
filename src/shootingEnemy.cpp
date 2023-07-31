#include "shootingEnemy.h"
#include <math.h>
#include <iostream>
#include "bullet.h"

bool SEnemy::HasHadCollision(Rectangle player)
{
    enemy1 = {(float)posX, (float)posY, (float)width, (float)height};
    if (CheckCollisionRecs(player, enemy1))
        hasCollided = true;
    return hasCollided;
}

void SEnemy::CheckDraw(Rectangle player)
{
    if (!HasHadCollision(player))
        Draw();
    else
    {
        DrawText("You Lost!", 160, 220, 100, RED);
    }
}

void SEnemy::Shoot(Rectangle player)
{
    Bullet bullet(400, 240, 10, 10, GREEN);
    if (!hasShooted)
    {
        bullet.Draw();
        // hasShooted = true;
    }
}
/*
    #define INTERCEPTOR_SPEED  10
    float orposX;
    float orposY;
    float obposX;
    float obposY;
    float tposX;
    float tposY;


    // Calculate speed
    float module = sqrt(pow(obposX - orposX, 2) + pow(obposY - orposY, 2));
    float speedX = (obposX - orposX)*INTERCEPTOR_SPEED/module;
    float speedY = (obposY - orposY)*INTERCEPTOR_SPEED/module;
*/
