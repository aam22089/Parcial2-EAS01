#ifndef base_h
#define base_h
#include <iostream>
#include <string>
#include "jugador.h"
using namespace std;

class Base
{
public:
    int vida, attack;
    string nombre;

    Base();
    Base(int vida, int attack, string nombre);

    void atacar(Base &atacado);
};

#endif