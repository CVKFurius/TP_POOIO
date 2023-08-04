#include "estacion.h"
#include "mapa.h"
#include <iostream>
#include<time.h>

using namespace std;

int main()
{
    int fila,columna;
    cout<<"Ingrese la cantidad de Filas y columnas que desea: ";cout<<endl;
    cin>>fila;cout<<endl;
    cin>>columna;
    Mapa M1(fila,columna);
    int** x=M1.generarMapa();
    M1.llenarMapa(x);
    M1.Mostrar(x);
    cout<<"Generando estaciones..."<<endl;
    Estacion E1(fila,columna,0,0);
    x=E1.genMapConEstacion(x,fila,columna);
    cout<<" ";
    x=E1.genMapConEstacion(x,fila,columna);



    E1.Mostrar(x,fila,columna);
    cout<<"holi";



    return 0;
}
