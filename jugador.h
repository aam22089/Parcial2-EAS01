#ifndef jugador_h
#define jugador_h

#include "base.h"

using namespace std;
class Jugador : public Base
{
public:
    Jugador *atacadoPor;

    Jugador() : Base() { atacadoPor = nullptr; }
    Jugador(int vida, int attack) : Base(vida, attack) { atacadoPor = nullptr; }
    Jugador(int vida, int attack, string nombre) : Base(vida, attack, nombre) { atacadoPor = nullptr; }

    void atacarJugador(Jugador &j);
};

#endif