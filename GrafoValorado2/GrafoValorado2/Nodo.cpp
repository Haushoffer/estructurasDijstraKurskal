#include "Nodo.h"


Nodo::Nodo()
{
	distancia = 0;
	origen = 0;
	presente = false;
}


Nodo::~Nodo()
{
}

int Nodo::getDistancia()
{
	return distancia;
}

int Nodo::getOrigen()
{
	return origen;
}

int Nodo::getDestino()
{
	return destino;
}

bool Nodo::getPresente()
{
	return presente;
}

void Nodo::setDistancia(int d)
{
	distancia = d;
}

void Nodo::setOrigen(int o)
{
	origen = o;
}

void Nodo::setDestino(int d)
{
	destino = d;
}

void Nodo::setPresente(bool p)
{
	presente = p;
}
