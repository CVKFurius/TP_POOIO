#include "mapa.h"
#include <iostream>
using namespace std;

int **Mapa::getTablero() const
{
    return Tablero;
}

void Mapa::setTablero(int **newTablero)
{
    Tablero = newTablero;
}

Estacion *Mapa::getEstaciones() const
{
    return estaciones;
}

void Mapa::setEstaciones(Estacion *newEstaciones)
{
    estaciones = newEstaciones;
}

int Mapa::getFila() const
{
    return this->fila;
}

void Mapa::setFila(int newFila)
{
    fila = newFila;
}

int Mapa::getColumna() const
{
    return columna;
}

void Mapa::setColumna(int newColumna)
{
    columna = newColumna;
}

void Mapa::genTablero()
{
int** matriz = new int*[columna];
        for (int i = 0; i < fila; i++) {
            matriz[i] = new int[columna];
        }
        for (int i = 0; i < columna; i++) {
            for (int j = 0; j < columna; j++) {
                matriz[i][j] = 0;

            }
        }
        setTablero(matriz);

}

void Mapa::ConstruirVecEstaciones(int cont)
{
        Estacion* estaciones=new [cont];
        setEstaciones(estaciones);
}

Mapa::Mapa(int _fila,int _columna)
{
    fila=_fila;
    columna=_columna;
}
