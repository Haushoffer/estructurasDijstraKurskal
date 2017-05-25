#include "Lista8.h"


Lista8::Lista8()
{
	primero = NULL;
	ultimo = NULL;
	tam = 0;
}


Lista8::~Lista8()
{
}

Tripla* Lista8::getPrimero()
{
	return primero;
}

void Lista8::insertarFinal(int pos, int peso)
{
	if (primero == NULL)
	{
		primero = new Tripla;
		primero->setPos(pos);
		primero->setPeso(peso);
		ultimo = primero;
	}
	else
	{
		Tripla *aux;
		aux = new Tripla;
		aux->setPos(pos);
		aux->setPeso(peso);
		aux->setAnterior(ultimo);
		ultimo->setSiguiente(aux);
		ultimo = aux;
	}
	tam++;
}

void Lista8::mostrar()
{
	Tripla* aux = primero;

	while (aux != NULL)
	{
		aux->mostrar();
		cout << endl;
		aux = aux->getSiguiente();
	}
}

int Lista8::getTam()
{
	return tam;
}

int Lista8::getIenesimo(int i)
{
	Tripla* aux = primero;
	int cont = 1;
	while (aux!=NULL)
	{
		if (cont == i)
		{
			return aux->getPos();
		}
		cont++;
		aux = aux->getSiguiente();
	}
	return -1;
}