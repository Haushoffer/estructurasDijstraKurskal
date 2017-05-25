#ifndef GRAFO_H
#define GRAFO_H
#include "Vertice.h"
#include "Monticulo.h"
#define TAM 10
class Grafo
{
private:
	Vertice vect[TAM];

	int aristas;
	Monticulo m;
public:
	Grafo();
	~Grafo();
	void insertar(int ori, int dt, int peso, int op);
	void inicializar();
	Grafo Kruskal();
	int buscarCiclo(int x);
	void mostrar();
	void mostrarCamino(int d);
	void solucion();
};

#endif