#include "environments.h"

SimpleEnvironment::~SimpleEnvironment() {}

SimpleEnvironment::SimpleEnvironment(int screenWidth, int screenHeight) {
    time = 0;
    // move layer
    moveLayer = OscHorizontal(screenHeight/2);
    // data layer
    dataLayer = VertBarCycle(0, screenWidth, 0xFF, 0);
    // devices
    devCoords.push_back({10, 10});
}

void SimpleEnvironment::step() {
    time++;
    dataLayer.step();
    moveLayer.step();
    // update device positions
    for(CartesianXY& pos : devCoords) {
        Velocity v = moveLayer.valueAt(pos.x, pos.y);
        pos.x += v.x;
        pos.y += v.y;
    }
}

uint8_t SimpleEnvironment::dataRAt(int x, int y) {
    return 0;
}

uint8_t SimpleEnvironment::dataGAt(int x, int y) {
    return dataLayer.valueAt(x,y);
}

uint8_t SimpleEnvironment::dataBAt(int x, int y) {
    return 0;
}

vector<CartesianXY> SimpleEnvironment::devices() {
    return devCoords;
}
