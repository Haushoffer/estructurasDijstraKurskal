#ifndef GRAFO_H
#define GRAFO_H
#include "Vertice.h"
#include "Monticulo.h"
#define TAM 100
class Grafo
{
private:
	Vertice vect[TAM];
public:
	Grafo();
	~Grafo();
	void insertar(int ori, int fin, int peso);
	void Dijkstra(int ori);
	void mostrarCamino(int d);
	void resetPadres();
	void mostrarGrafo();
	void Kruskal();
	void buscarCiclo();
};

#endif
