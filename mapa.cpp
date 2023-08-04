#include "mapa.h"
#include <iostream>
using namespace std;
Mapa::Mapa(int _fila,int _columna)
{
    fila=_fila;
    columna=_columna;
}

int Mapa::getFila()
{
    return fila;
}

void Mapa::setFila(int x)
{
    this->fila=x;
}

int Mapa::getColumna()
{
    return columna;
}

void Mapa::setColumna(int y)
{
    this->columna=y;
}

int **Mapa::generarMapa()
{
    int** matriz = new int*[this->columna];
    for (int i = 0; i < this->fila; i++) {
        matriz[i] = new int[this->columna];
    }
    return matriz;
}

void Mapa::Mostrar(int** _matriz)
{
    cout << "Matriz " << this->fila << " x " << this->columna << ":" << endl;
    for (int i = 0; i < this->fila; i++) {
        for (int j = 0; j < this->columna; j++) {
            cout << _matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void Mapa::llenarMapa(int** _matriz)
{


    for (int i = 0; i < this->columna; i++) {
        for (int j = 0; j < this->columna; j++) {
            _matriz[i][j] = 0;

        }
    }

}
