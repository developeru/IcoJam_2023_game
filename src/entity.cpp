#include "entity.h"

Entity::Entity(int x, int y, int z, int a, Color b, Rectangle rec1, Rectangle rec2) {

    posX = x;
    posY = y;
    width = z;
    height = a;
    color = b;
    player = rec1;
    floor = rec2;
}

void Entity::Draw() {

    DrawRectangle(posX, posY, width, height, color);

}