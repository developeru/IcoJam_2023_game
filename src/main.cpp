#include <raylib.h>
#include "entity.h"
#include "player.h"

int main()
{

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "3...2...1...You Lost!");
    SetTargetFPS(60);
    Rectangle floor = {0, 480, 800, 150};
    Player Player(50, 440, 40, 40, BLUE, Player.player, floor);
    while (!WindowShouldClose())
    {
        // Update

        Player.Movement(2);

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleRec(floor, GREEN);
        Player.Draw(); // Ground
        EndDrawing();
    }

    CloseWindow();
    return 0;
}