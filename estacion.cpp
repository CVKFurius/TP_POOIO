#include "estacion.h"
#include <cstdlib>
#include <ctime>

int Estacion::getX() const
{
    return x;
}

void Estacion::setX(int newX)
{
    x = newX;
}

int Estacion::getY() const
{
    return y;
}

void Estacion::setY(int newY)
{
    y = newY;
}

void Estacion::GenPos(int _fila,int _columna)
{
    srand(time(NULL));
    int x1=1+rand() % (_fila-2);
    int y1=1+rand() % (_columna-2);
    setX(x1);
    setY(y1);

}

Estacion::Estacion(int newX,int newY)
{
    x=newX;
    y=newY;
}
