#ifndef VERTICE_H
#define VERTICE_H
#include "Lista8.h"

class Vertice
{
private:
	int distancia;
	int padre;
	bool marca;
	Lista8 lista;
public:
	Vertice();
	~Vertice();
	int getDistancia();
	int getPadre();
	bool getMarca();
	void setDistancia(int d);
	void setPadre(int p);
	void setMarca(bool m);
	Lista8& getLista();
	void mostrar();
};

#endif