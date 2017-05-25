#include "Nodo.h"


Nodo::Nodo(void)
{
	marca = false;
	padre = -1;
}


Nodo::~Nodo(void)
{

}


int Nodo::getpadre()
{
	return padre;
}

int Nodo::getmarca()
{
	return marca;
}

void Nodo::setMarca(bool m)
{
	marca = m;
}

void Nodo::setPadre(int p)
{
	padre = p;
}

int Nodo::sacarSiguienteAdyacente(int i_esimo)
{
	i_esimo = i_esimo - 1;
	if(vertices.size() <= 0||i_esimo >= vertices.size())
	{
		return 0;
	}
	else
	{
		return vertices[i_esimo];
	}
}

vector<int>& Nodo::getVertices()
{
	return vertices;
}

void Nodo::mostrarVert()
{
	for(int i=0; i< vertices.size(); i++)
	{
		cout<<vertices[i]<<" ";
	}
	cout<<endl;
}

void Nodo::mostrarNodo()
{
	cout<<"Padre "<<padre<<" = ";
	mostrarVert();
}

