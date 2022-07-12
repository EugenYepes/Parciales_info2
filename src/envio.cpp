#include "../headers/envio.hpp"

// bool estado = false;
int Envio::cantEnvios = 0;
float Envio::recaudacion = 0.0;

Envio::Envio()
{
    cantDobleCarne = 0;
    cantSimpleCarne = 0;
    cantPollo = 0;
    estado = false;
}

Envio::Envio(Cliente C) : Costo(), C(C)
{
    estado = false;
    cantEnvios++;
    cantDobleCarne = 0;
    cantSimpleCarne = 0;
    cantPollo = 0;
    Cliente cliente(C.getCliente(), C.getDireccion());
}

Envio::Envio(Cliente C, int cantDobleCarne, int cantSimpleCarne, int cantPollo) : Costo(), C(C)
{
    estado = false;
    cantEnvios++;
    Cliente cliente(C.getCliente(), C.getDireccion());
    this->cantDobleCarne = cantDobleCarne;
    this->cantSimpleCarne = cantSimpleCarne;
    this->cantPollo = cantPollo;
    total = Envio::cantDobleCarne * getDobleCarne() + cantSimpleCarne * getSimpleCarne() + cantPollo * getPollo();
    recaudacion += total;
}

void Envio::Entregado(void)
{
    estado = true;
}

// implementar una funcion que permita imprimir los datos del envio
// a saber: N° pedido, nombre del cliente y direccion, total y estado
ostream &operator<<(ostream &o, Envio &envio)
{
    o << "numero de pedido " << envio.cantEnvios << endl
      << "nombre cliente " << envio.C.getCliente() << endl
      << "direccion cliente " << envio.C.getDireccion() << endl
      << "Total " << envio.total << endl
      << "estado ";
    if (envio.estado == true)
    {
        o << "entregado" << endl;
    }
    else
    {
        o << "en curso" << endl;
    }
    /// < @todo hacer la funcion completamente, revisar visibilidad de metodos y atributos de la clase envio
    return o;
}

void Envio::setEstado(bool estado)
{
    Envio::estado = estado;
}

void Envio::getCuenta(void)
{
    cout << "El total es: " << total;
}

float Envio::getRecaudacion(void)
{
    return recaudacion;
}

// implementar una funcion recuadado() de forma que al llamarla sin
// la necesidad de acceder a ella a traves de un objeto de la clase
// permita saber la recaudacion del dia
