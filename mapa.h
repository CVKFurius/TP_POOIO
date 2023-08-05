#ifndef MAPA_H
#define MAPA_H
#include "estacion.h"


class Mapa
{
private:
    int fila,columna;
    int** Tablero;
    Estacion* estaciones;
public:
    Mapa(int,int);

    int **getTablero() const;
    void setTablero(int **);
    Estacion *getEstaciones() const;
    void setEstaciones(Estacion *);
    int getFila() const;
    void setFila(int );
    int getColumna() const;
    void setColumna(int );
    void genTablero();
    void ConstruirVecEstaciones(int);

};

#endif // MAPA_H
