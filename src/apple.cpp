#include "apple.h"
#include <glm/glm.hpp>

Apple* Apple::instance = nullptr;

Apple::Apple(glm::vec2 position) 
    : UnitCube(position, glm::vec3(1.0f, 0.0f, 0.0f)) {
    this->isEaten = false;
}

Apple* Apple::getApple() {
    if (instance == nullptr) {
        instance = new Apple(glm::vec2(0.0f, 0.0f));
    }
    return instance;
}

void Apple::updatePosition(glm::vec2 position) {
    this->position = position;
}