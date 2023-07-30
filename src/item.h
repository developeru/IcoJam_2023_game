#pragma once
#include <raylib.h>

#include "entity.h"
#include "player.h"

class Item : public Entity
{
public:
    using Entity::Entity;
    bool Collected(Rectangle player);
    bool timeAdded;
    void CheckDraw(Rectangle player, float* timerDuration);
private:
    Rectangle item;
    bool hasCollided;
};