#pragma once
#include <Raylib.h>

class Entity
{
public:
    Entity(float x, float y, float z, float a, Color b, Rectangle ground);
    void Draw();
protected:
    float posX;
    float posY;
    float width;
    float height;
    Rectangle player;
    Color color;
    Rectangle floor;
};