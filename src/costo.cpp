#include "../headers/costo.hpp"
#include <iostream>
using namespace std;

float Costo::dobleCarne = 100.0;
float Costo::simpleCarne = 100.0;
float Costo::pollo = 100.0;

Costo::Costo()
{
}

void Costo::setCosto(float _dobleCarne, float _simpleCarne, float _pollo)
{
    dobleCarne = _dobleCarne;
    simpleCarne = _simpleCarne;
    pollo = _pollo;
}

float Costo::getDobleCarne(void)
{
    return dobleCarne;
}

float Costo::getSimpleCarne(void)
{
    return simpleCarne;
}

float Costo::getPollo(void)
{
    return pollo;
}

ostream &operator<<(ostream &o, Costo &costo)
{
    o << "doble carne " << costo.dobleCarne << endl
      << "simple carne " << costo.simpleCarne << endl
      << "pollo " << costo.pollo << endl;
    return o;
}