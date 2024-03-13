#include "jugador.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Jugador::Jugador(int vida, int attack) : Base(vida, attack, "No definido") { atacadoPor = nullptr; }
void Jugador::atacarJugador(Jugador &j)
{
    atacar(j);
    j.atacadoPor = this;
}
