#include "estacion.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
using namespace std;

int Estacion::getPosx()
{
    return posx;
}

void Estacion::setPosx(int _Posx)
{
    posx = _Posx;
}

int Estacion::getPosy()
{
    return posy;
}

void Estacion::setPosy(int _Posy)
{
    posy = _Posy;
}

int** Estacion::genMapConEstacion(int **Mat, int _fila, int _columna)
{

    srand(time(NULL));
    int x1;
    int y1;
    x1 = rand() % (_fila-1)+1;
    y1 = rand() % (_columna-1)+1;

    for(int i=0;i<_fila-1;i++){
        for(int j=0;j<_columna-1;j++){

            if(x1==i&&y1==j){


                if(Mat[x1][y1]==3){
                    if(Mat[x1-1][y1]==3){
                        if(Mat[x1+1][y1]==3){
                            if(Mat[x1][y1-1]==3){
                                if (Mat[x1][y1+1]==3){
                                    x1 = rand() % (_fila-1+1)+1;
                                    y1 = rand() % (_columna-1+1)+1;
                                    Mat[x1][y1]=3;
                                    cout<<"HOLA";
                                    i=_fila;
                                    j=_columna;
                                }

                            }
                        }
                    }

                }
                Mat[x1][y1]=3;
                i=_fila;
                j=_columna;

            }
        }
    }

    return Mat;

}

void Estacion::Mostrar(int ** _matriz, int _fila, int _columna)
{
    cout << "Matriz " << _fila << " x " << _columna<< ":" << endl;
    for (int i = 0; i < _fila ;i++) {
        for (int j = 0; j < _columna; j++) {
            cout << _matriz[i][j] << " ";
        }
        cout << endl;
    }
}

Estacion::Estacion(int _posx, int _posy, int _fila,int _columna):Mapa(_fila,_columna)
{
    posx=_posx;
    posy=_posy;
}
