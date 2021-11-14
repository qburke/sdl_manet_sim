#ifndef DATA_LAYER_H
#define DATA_LAYER_H

/**
 * A scalar plane parametrized by time.
 */
class DataLayer
{
private:
    unsigned int time;
public:

    virtual ~DataLayer();

    /**
     * Returns the value of the layer at Cartesian
     * coordinates (x, y).
     */
    virtual int valueAt(int x, int y);

    /**
     * Advances the time of the layer by 1
     */
    virtual void step();
};


#endif