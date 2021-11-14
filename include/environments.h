#ifndef ENVIRONMENTS_H
#define ENVIRONMENTS_H

#include "environment.h"
#include "layers.h"

#include <vector>
#include <unordered_map>

using namespace std;

class SimpleEnvironment : public Environment
{
private:
    unsigned int time;
    DataLayer dataLayer;
    MobileLayer moveLayer;
    vector<CartesianXY> devCoords;
public:
    SimpleEnvironment(int screenWidth, int screenHeight);

    ~SimpleEnvironment();

    void step();

    uint8_t dataRAt(int x, int y);

    uint8_t dataGAt(int x, int y);

    uint8_t dataBAt(int x, int y);

    std::vector<CartesianXY> devices();
};

#endif