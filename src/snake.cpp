#include "snake.h"
#include "apple.h"
#include <vector>
#include <glm/glm.hpp>

Snake* Snake::instance = nullptr;

Snake::Snake() {
    this->snake.push_back(UnitCube(glm::vec2(300.0f, 300.0f), glm::vec3(0.0f, 1.0f, 0.0f)));
    this->snake.push_back(UnitCube(glm::vec2(290.0f, 300.0f), glm::vec3(0.0f, 1.0f, 0.0f)));
    this->snake.push_back(UnitCube(glm::vec2(280.0f, 300.0f), glm::vec3(0.0f, 1.0f, 0.0f)));
    this->snake.push_back(UnitCube(glm::vec2(270.0f, 300.0f), glm::vec3(0.0f, 1.0f, 0.0f)));

    this->head_position = glm::vec2(300.0f, 300.0f);
    this->direction = RIGHT;
    this->isAlive = true;
}

Snake* Snake::getSnake() {
    if (instance == nullptr) {
        instance = new Snake();
    }
    return instance;
}

void Snake::move() {
    for (int i = this->snake.size() - 1; i >= 0; i--) {
        this->snake[i] = this->snake[i - 1];
        if (i == 0) {
            switch (this->direction) {
            case UP:
                this->head_position.y += 10.0f;
                break;
            case DOWN:
                this->head_position.y -= 10.0f;
                break;
            case LEFT:
                this->head_position.x -= 10.0f;
                break;
            case RIGHT:
                this->head_position.x += 10.0f;
                break;
            default:
                break;
            }
            this->snake[0] = UnitCube(this->head_position, glm::vec3(0.0f, 1.0f, 0.0f));
        }
    }
}

void increaseLength() {

}