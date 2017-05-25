#include "Tripla.h"


Tripla::Tripla()
{
	siguiente = NULL;
	anterior = NULL;
}


Tripla::~Tripla()
{
}

void Tripla::setPeso(int p)
{
	peso = p;
}

void Tripla::setPos(int p)
{
	pos = p;
}

void Tripla::setSiguiente(Tripla* aux)
{
	siguiente = aux;
}

void Tripla::setAnterior(Tripla* aux)
{
	anterior = aux;
}

Tripla* Tripla::getSiguiente()
{
	return siguiente;
}

Tripla* Tripla::getAnterior()
{
	return anterior;
}

int Tripla::getPeso()
{
	return peso;
}

int Tripla::getPos()
{
	return pos;
}

void Tripla::mostrar()
{
	cout << " Origen " << pos << " Peso " << peso;
}