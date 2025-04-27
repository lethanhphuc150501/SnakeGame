#ifndef APPLE_H_
#define APPLE_H_

#include "unit_cube.h"
#include <glm/glm.hpp>

class Apple : public UnitCube {
private:
    static Apple* instance;
    bool isEaten;
    Apple(glm::vec2 position);
public:
    static Apple* getApple();
    void updatePosition(glm::vec2 position);
};

#endif

