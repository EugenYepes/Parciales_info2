#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include "costo.hpp"

class Cliente
{
    char nombre[20];
    char direccion[20];

public:
    Cliente();
    Cliente(char *nombre);
    Cliente(char *nombre, char *direccion);

    char *getCliente();
    char *getDireccion();
    void setNombre(char *nombre);
    void setDireccion(char *direccion);
};

#endif // CLIENTE_H
