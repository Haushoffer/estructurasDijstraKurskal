#ifndef TRIPLA_H
#define TRIPLA_H
#include <iostream>
using namespace std;
class Tripla
{
private:
	int peso, pos;
	Tripla* siguiente;
	Tripla* anterior;
public:
	Tripla();
	~Tripla();
	void setPeso(int p);
	void setPos(int p);
	void setSiguiente(Tripla* aux);
	void setAnterior(Tripla* aux);
	Tripla* getSiguiente();
	Tripla* getAnterior();
	int getPeso();
	int getPos();
	void mostrar();
};

#endif