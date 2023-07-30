#pragma once
#include "entity.h"

class Player : public Entity {
public:
    using Entity::Entity;
    bool checkCollision(Rectangle rec1, Rectangle rec2);
    void Movement(int h_speed, int v_speed);
    Rectangle player;
    Rectangle playercol;
private:
    bool canJump;
    bool Jump;
    int JumpTimer;
    bool onFloor;
    bool Collision;
    float speed;
};