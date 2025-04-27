#ifndef SNAKE_H_
#define SNAKE_H_

#include "unit_cube.h"
#include <vector>

enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Snake {
private:
    static Snake* instance;
    std::vector<UnitCube> snake;
    glm::vec2 head_position;
    enum Direction direction;
    bool isAlive;
    Snake();
public:
    static Snake* getSnake();
    void move();
    void increaseLength();
    void Draw();
};

#endif