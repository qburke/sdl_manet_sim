#include "layers.h"

OscHorizontal::~OscHorizontal() {}

OscHorizontal::OscHorizontal(int midLine) {
    this->midLine = midLine;
}

Velocity OscHorizontal::valueAt(int x, int y) {
    return {midLine - x, 0};
}

void OscHorizontal::step() {

}