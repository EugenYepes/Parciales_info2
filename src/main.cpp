#include <iostream>

#include "../headers/cliente.hpp"
#include "../headers/costo.hpp"
#include "../headers/envio.hpp"

using namespace std;

int main(void)
{
    Cliente A("Pepe", "J.B. Justo 3213");
    Cliente B("Cacho", "Yapeyu 197");
    Cliente C("Jose", "Medrano 75");

    Envio E(A, 2, 1, 1);
    cout << E << endl;

    E.setCosto(200, 200, 200);
    /// < @todo como se setea en variables estaticas, debe afectar a todos los objetos de envio
    Envio E1(B, 2, 1, 1);
    cout << E1 << endl;

    E1.Entregado();
    cout << E1 << endl;
    cout << "la recaudacion es " << Envio::getRecaudacion() << endl;
    return 0;
}