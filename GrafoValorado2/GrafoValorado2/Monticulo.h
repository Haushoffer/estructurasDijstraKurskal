#ifndef MONTICULO_H
#define MONTICULO_H
#include "Nodo.h"
#include <iostream>
using namespace std;
class Monticulo
{
private:
	Nodo vect[11000];
	int ultimaHoja;
public:
	Monticulo();
	~Monticulo();
	void insertar(int d, int o, int dt);
	void recuperar_abajo_arriba(int i);
	void recuperar_arriba_abajo(int i);
	Nodo eliminar();
	int getUltimaHoja();
	/*void recorrerInOrden(int i);
	void recorrerPostOrden(int i);
	void recorrerPreOrden(int i);
	bool buscar(int i, int e);
	int calcularAltura(int i);
	int contarNodos(int i);
	void mostrarNivel(int n);
	void extraerRaices();

	void insertarEnABB();*/
};

#endif
