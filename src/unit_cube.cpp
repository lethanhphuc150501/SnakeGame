#include <glm/glm.hpp>
#include "unit_cube.h"
#include "sprite_renderer.h"

#define UNIT_SIZE       10

static glm::vec2 round_by_unit(glm::vec2 position) {
    glm::vec2 round_position;
    if ((int)position.x % UNIT_SIZE < UNIT_SIZE / 2) {
        round_position.x = ((int)position.x / UNIT_SIZE) * (float)UNIT_SIZE;
    } else {
        round_position.x = ((int)position.x / UNIT_SIZE + 1) * (float)UNIT_SIZE;
    }
    
    if ((int)position.y % UNIT_SIZE < UNIT_SIZE / 2) {
        round_position.y = ((int)position.y / UNIT_SIZE) * (float)UNIT_SIZE;
    } else {
        round_position.y = ((int)position.y / UNIT_SIZE + 1) * (float)UNIT_SIZE;
    }
    return round_position;
}

UnitCube::UnitCube(glm::vec2 position, glm::vec3 color) {
    this->position = round_by_unit(position);
    this->color = color;
}

void UnitCube::Draw() {
    SpriteRenderer::DrawSprite(this->position, glm::vec2((float)UNIT_SIZE, (float)UNIT_SIZE), this->color);
}