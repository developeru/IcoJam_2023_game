#include <raylib.h>
#include <iostream>

#include "player.h"
#include "groundEnemy.h"
#include "shootingEnemy.h"
#include "item.h"

#include "timer1.h"

int main()
{

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "3...2...1...You Lost!");
    SetTargetFPS(60);

    Rectangle floor = {0, 480, 800, 150};
    Player Player(50, 440, 40, 40, BLUE);
    NEnemy Gooma(500, 440, 40, 40, RED);
    NEnemy flyingGooma(300, 360, 40, 40, PURPLE);
    SEnemy killer(400, 440, 40, 40, RED); 

    GameTimer timer;
    Item Item1(250, 440, 20, 20, YELLOW);
    
    timer.StartTimer(10.9);
    while (!WindowShouldClose())
    {
        // Update
        timer.RunTimer();
        Player.Movement(floor);
        Gooma.Movement(200, 1.5);
        flyingGooma.Movement(200, 2);
        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleRec(floor, GREEN); // Ground
        Player.Draw();

        Item1.CheckDraw(Player.playercol, &timer.timerDuration);
        Gooma.CheckDraw(Player.playercol);
        flyingGooma.CheckDraw(Player.playercol);
        killer.CheckDraw(Player.playercol);
        killer.Shoot(Player.playercol);

        if (timer.RunTimer())
            DrawText("You Lost!", 160, 220, 100, RED);
        else
            DrawText(TextFormat("Elapsed Time: %03.0f", timer.timerDuration), 5, 5, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}