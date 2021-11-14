#include "layers.h"

VertBarCycle::~VertBarCycle() {}

VertBarCycle::VertBarCycle(int left, int right, int max, int min) {
    leftBound = left;
    rightBound = right;
    this->max = max;
    this->min = min;
    barPos = 0;
}

int VertBarCycle::valueAt(int x, int y) {
    if(x >= leftBound && x <= rightBound) {
        int diff = barPos - x;
        diff = diff > 0 ? diff : -diff;
        // TODO change
        return min - diff * 10;
    } else {
        return 0;
    }
}

void VertBarCycle::step() {
    barPos++;
    if(barPos >= rightBound) {
        barPos = leftBound;
    }
}