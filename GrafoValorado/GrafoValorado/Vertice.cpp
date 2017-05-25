#include "Vertice.h"


Vertice::Vertice()
{
	marca = false;
	padre = -1;
	distancia = 99999;
}


Vertice::~Vertice()
{
}

int Vertice::getDistancia()
{
	return distancia;
}

int Vertice::getPadre()
{
	return padre;
}

bool Vertice::getMarca()
{
	return marca;
}

void Vertice::setDistancia(int d)
{
	distancia = d;
}

void Vertice::setPadre(int p)
{
	padre = p;
}

void Vertice::setMarca(bool m)
{
	marca = m;
}

Lista8& Vertice::getLista()
{
	return lista;
}

void Vertice::mostrar()
{
	cout << "-----------" << endl;
	cout << "PADRE: " << padre << endl;
	cout << "DISTANCIA: " << distancia << endl;
	cout << "LISTA: " << endl;
	lista.mostrar();
	cout << "-----------" << endl;
}