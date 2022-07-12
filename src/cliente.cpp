#include "../headers/cliente.hpp"

Cliente::Cliente()
{
}

Cliente::Cliente(char *nombre)
{
    strncpy(this->nombre, nombre, 20);
}

Cliente::Cliente(char *nombre, char *direccion)
{
    strncpy(this->nombre, nombre, 20);
    strncpy(this->direccion, direccion, 20);
}

char *Cliente::getCliente()
{
    return nombre;
}

char *Cliente::getDireccion()
{
    return direccion;
}

void Cliente::setNombre(char *nombre)
{
    strncpy(this->direccion, nombre, 20);
}

void Cliente::setDireccion(char *direccion)
{
    strncpy(this->direccion, direccion, 20);
}
