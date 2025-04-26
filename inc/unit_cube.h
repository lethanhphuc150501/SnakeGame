#ifndef UNIT_CUBE_H_
#define UNIT_CUBE_H_

#include <glm/glm.hpp>

class UnitCube {
private:
    glm::vec2 position;
    glm::vec3 color;
public:
    UnitCube(glm::vec2 position, glm::vec3 color);
    void Draw();
};

#endif
