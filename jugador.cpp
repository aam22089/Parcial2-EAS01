#include "jugador.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void Jugador::atacarJugador(Jugador &j)
{
    atacar(j);
    j.atacadoPor = this;
}
