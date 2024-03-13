#include "base.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Base::Base()
{
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
    this->vida = 100;
    this->attack = 5;
    this->nombre = "No definido";
}

Base::Base(int vida, int attack, string nombre)
{
    /*
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
    this->vida = vida;
    if (vida > 200)
        this->vida = 200;
    if (vida <= 0)
        this->vida = 1;

    this->attack = attack;
    if (attack > 200)
        this->attack = 200;
    if (attack <= 0)
        this->attack = 1;

    this->nombre = nombre;
}

void Base::atacar(Base &atacado)
{
    int ran = rand() % 5;
    if (ran == 0)
    {
        cout << this->nombre << " ataco a " << atacado.nombre << " pero fallo, vida restante de " << atacado.nombre << " = " << atacado.vida << endl;
    }
    else
    {
        atacado.vida -= this->attack;
        cout << this->nombre << " ataco a " << atacado.nombre << " e hizo " << this->attack << " de danio, vida restante de " << atacado.nombre << " = " << atacado.vida << endl;
    }

}
