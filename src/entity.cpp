#include "entity.h"

Entity::Entity(float x, float y, float z, float a, Color b) {

    posX = x;
    posY = y;
    width = z;
    height = a;
    color = b;
    
}

void Entity::Draw() {

    DrawRectangle(posX, posY, width, height, color);

}