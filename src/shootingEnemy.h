#pragma once
#include "entity.h"

class SEnemy : public Entity
{
public:
    using Entity::Entity;
    bool HasHadCollision(Rectangle player);
    void CheckDraw(Rectangle player);
    void Shoot(Rectangle player);
private:
    Rectangle enemy1;
    bool hasCollided;
    bool hasShooted;
};