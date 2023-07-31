#pragma once
#include "entity.h"

class NEnemy : public Entity {
public:
    using Entity::Entity;
    void Movement(int range, float m);
    void CheckDraw(Rectangle player); 
    bool HasHadCollision(Rectangle player);
private:
    Rectangle enemy1;
    float walked;
    bool moveleft;
    bool hasCollided;
};

