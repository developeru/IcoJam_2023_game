#pragma once
#include <Raylib.h>

class Entity
{
public:
    Entity(float x, float y, float z, float a, Color b);
    void Draw();
    float posX;
    float posY;
    float width;
    float height;
    Rectangle player;
    Color color;
};