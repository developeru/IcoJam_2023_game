#include "entity.h"

Entity::Entity(float x, float y, float z, float a, Color b, Rectangle ground) {

    posX = x;
    posY = y;
    width = z;
    height = a;
    color = b;
    floor = ground;
    
}

void Entity::Draw() {

    DrawRectangle(posX, posY, width, height, color);

}