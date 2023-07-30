#pragma once
#include "entity.h"

class Player : public Entity {
public:
    using Entity::Entity;
    void Movement();
    Rectangle player;
    Rectangle playercol;
protected:
    bool canJump;
    bool Jump;
    int JumpTimer;
    bool onFloor;
    bool Collision;
    float hspeed;
    float vspeed;
};