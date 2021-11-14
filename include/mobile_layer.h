#ifndef MOBILE_LAYER_H
#define MOBILE_LAYER_H

typedef struct {
    int x;
    int y;
} Velocity;

/**
 * A planar vector field parametrized by time.
 */
class MobileLayer
{
private:
    unsigned int time;
public:

    virtual ~MobileLayer();

    /**
     * Returns the vector of the layer at Cartesian
     * coordinates (x, y).
     */
    virtual Velocity valueAt(int x, int y);

    /**
     * Advances the time of the layer by 1
     */
    virtual void step();
};


#endif