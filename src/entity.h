#pragma once
#include <Raylib.h>

class Entity
{
public:
    Entity(int x, int y, int z, int a, Color b, Rectangle ground);
    void Draw();
protected:
    int posX;
    int posY;
    int width;
    int height;
    Rectangle player;
    Color color;
    Rectangle floor;
};