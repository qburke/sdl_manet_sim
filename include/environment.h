#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include "data_layer.h"
#include "mobile_layer.h"
#include <vector>
#include <stdint.h>

typedef struct {
    int x;
    int y;
} CartesianXY;

/**
 * @brief A simulated environment broken up into
 * Layers. There are movement layers which dictate how devices
 * move and data layers from which devices sense information.
 * The environment keeps track of the devices and their connections.
 */
class Environment
{
private:
    unsigned int time;
public:

    virtual ~Environment();

    /**
     * Steps the time of the environment by one unit
     */
    virtual void step();

    /**
     * Returns the scaled data at Cartesian coordinates (x,y).
     * Red display color
     */
    virtual uint8_t dataRAt(int x, int y);

    /**
     * Returns the scaled data at Cartesian coordinates (x,y).
     * Green display color
     */
    virtual uint8_t dataGAt(int x, int y);

    /**
     * Returns the scaled data at Cartesian coordinates (x,y).
     * Blue display color
     */
    virtual uint8_t dataBAt(int x, int y);

    /**
     * Returns the location of the devices in the environment.
     */
    virtual std::vector<CartesianXY> devices();
};


#endif