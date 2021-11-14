#ifndef LAYERS_H
#define LAYERS_H

#include "data_layer.h"
#include "mobile_layer.h"

class OscHorizontal : public MobileLayer {
private:
    int midLine;
public:
    OscHorizontal(int midLine);

    ~OscHorizontal();

    Velocity valueAt(int x, int y);

    void step();
};

class VertBarCycle : public DataLayer {
private:
    int barPos;
    int leftBound;
    int rightBound;
    int max;
    int min;
public:
    VertBarCycle(int left, int right, int max, int min);

    ~VertBarCycle();

    int valueAt(int x, int y);

    void step();

};

#endif