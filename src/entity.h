#pragma once
#include <Raylib.h>

class Entity
{
public:
    Entity(int x, int y, int z, int a, Color b, Rectangle rec1, Rectangle rec2);
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