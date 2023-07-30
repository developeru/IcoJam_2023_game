#include "entity.h"

Entity::Entity(int x, int y, int z, int a, Color b, Rectangle ground) {

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