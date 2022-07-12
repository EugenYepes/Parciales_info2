#ifndef COSTO_H
#define COSTO_H
#include <iostream>
using namespace std;

class Costo
{
    static float dobleCarne;
    static float simpleCarne;
    static float pollo;

public:
    Costo();

    static void setCosto(float, float, float);
    friend ostream &operator<<(ostream &o, Costo &costo);

    static float getDobleCarne(void);
    static float getSimpleCarne(void);
    static float getPollo(void);
};

#endif // COSTO_H
