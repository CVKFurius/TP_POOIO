#ifndef ESTACION_H
#define ESTACION_H
#include "mapa.h"



class Estacion:private Mapa
{
private:
    int posx,posy;
public:
    Estacion(int,int,int,int);

    int getPosx();
    void setPosx(int);
    int getPosy();
    void setPosy(int);
    int** genMapConEstacion(int**,int,int);
    void Mostrar(int**,int,int);
};

#endif // ESTACION_H
