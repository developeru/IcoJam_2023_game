#include <raylib.h>
#include <stdlib.h>

#include "entity.h"
#include "player.h"
#include "enemy1.h"
#include "timer1.h"

int main()
{

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "3...2...1...You Lost!");
    SetTargetFPS(60);
    Rectangle floor = {0, 480, 800, 150};
    Player Player(50, 440, 40, 40, BLUE, floor);
    Enemy1 Gooma(500, 440, 40, 40, RED, floor);
    GameTimer timer;
    timer.StartTimer(3.9);
    while (!WindowShouldClose())
    {
        // Update
        timer.RunTimer();
        Player.Movement();

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleRec(floor, GREEN); // Ground
        Player.Draw();
        Gooma.Draw();
        // DrawText(TextFormat("Elapsed Time: %03.0f seconds", timer.timerDuration), 200, 220, 20, BLACK);
        if (timer.RunTimer())
            DrawText("You Lost!", 160, 220, 100, RED);
        else
            DrawText(TextFormat("Elapsed Time: %03.0f", timer.timerDuration), 5, 5, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}