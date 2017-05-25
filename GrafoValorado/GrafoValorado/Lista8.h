#ifndef LISTA8_H
#define LISTA8_H
#include "Tripla.h"
class Lista8
{
private:
	Tripla* primero;
	Tripla* ultimo;
	int tam;
public:
	Lista8();
	~Lista8();
	Tripla* getPrimero();
	void insertarFinal(int pos, int peso);
	void mostrar();
	int getTam();
	int getIenesimo(int i);
};

#endif