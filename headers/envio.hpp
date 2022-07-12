#ifndef ENVIO_H
#define ENVIO_H
#include "cliente.hpp"
#include <iostream>

class Envio : public Costo
{
    Cliente C;
    bool estado; // inicialmente en false
    int cantDobleCarne;
    int cantSimpleCarne;
    int cantPollo;
    float total;
    static float recaudacion;
    static int cantEnvios;
    // agregar variables recaudacion y cantEnvio con sus tipos y modificadores correspondientes
public:
    Envio();
    Envio(Cliente);
    Envio(Cliente, int cantDobleCarne, int cantSimpleCarne, int cantPollo);

    void Entregado(void);

    // implementar una funcion que permita imprimir los datos del envio
    // a saber: N° pedido, nombre del cliente y direccion, total y estado
    friend ostream &operator<<(ostream &o, Envio &envio);

    void setEstado(bool);
    void getCuenta(); // obtine la cuenta del pedido y almacena el total

    static float getRecaudacion();

    // implementar una funcion recuadado() de forma que al llamarla sin
    // la necesidad de acceder a ella a traves de un objeto de la clase
    // permita saber la recaudacion del dia
};

#endif // ENVIO_H
