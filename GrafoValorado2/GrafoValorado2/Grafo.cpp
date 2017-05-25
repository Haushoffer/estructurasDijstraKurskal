#include "Grafo.h"


Grafo::Grafo()
{
	aristas = 0;
}


Grafo::~Grafo()
{
}

void Grafo::insertar(int ori, int dt, int peso, int op)
{
	if (op == 0)
	{
		vect[ori].getLista().insertarFinal(dt, peso);
		vect[dt].getLista().insertarFinal(ori, peso);
		vect[ori].setPadre(ori);
		vect[dt].setPadre(dt);
		m.insertar(peso, ori, dt);
		aristas++;
	}

 
}

void Grafo::inicializar()
{
	for (int i =1; i < aristas; i++)
	{
		vect[i].setPadre(i);
	}
}

int Grafo::buscarCiclo(int x)
{
	while (x != vect[x].getPadre())
	{
		x = vect[x].getPadre();
	}
	return x;
}

Grafo Grafo::Kruskal()
{
	Grafo krus;
	int cont = 0, vo, vd,total=0;
	Nodo trio;
	while (cont < aristas)
	{
		trio = m.eliminar();
		vo = buscarCiclo(trio.getOrigen());
		vd = buscarCiclo(trio.getDestino());
		if (vo != vd)
		{
			krus.insertar(trio.getOrigen(), trio.getDestino(), trio.getDistancia(), 0);
			total = total + trio.getDistancia();
			vect[vo].setPadre(vect[vd].getPadre());
		}
		cont++;
	}
	cout << "Distancia Total: " << total << endl;
	return krus;
}

void Grafo::mostrar()
{
	for (int i = 1; i < TAM; i++)
	{
		cout << "Nodo: " << i;
		vect[i].mostrar();
	}
}

void Grafo::mostrarCamino(int d)
{/*
	int c = 0;
	int cam[TAM];
	int total = vect[d].getDistancia();
	while (vect[d].getPadre() != -1)
	{
		cam[c] = d;
		c++;
		d = vect[d].getPadre();
	}
	cam[c] = d;
	for (c; c >= 0; c--)
	{
		cout << " " << cam[c] << endl;
	}*/
}

void Grafo::solucion()
{
	/*for (int i = 1; i < TAM; i++)
	{
		cout<<"Nodo: " << i << endl;
	*/
}