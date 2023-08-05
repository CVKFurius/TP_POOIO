#ifndef ESTACION_H
#define ESTACION_H


class Estacion
{
private:
    int x,y;
public:
    Estacion(int,int);
    int getX() const;
    void setX(int);
    int getY() const;
    void setY(int);
    void GenPos(int,int);
};

#endif // ESTACION_H
