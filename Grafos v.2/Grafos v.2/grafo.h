#include <iostream>
#include "Nodo.h"
#include <vector>
#include <queue>
using namespace std;
class grafo
{
private:
	Nodo graf[200];

public:
	grafo();
	~grafo();
	void insertar(int,int);
	void BFS(int,int,bool&);
	bool DFS(int,int,bool);
	void mostrar();
	void mostrarCamino(int, int);
	void resetear();
};