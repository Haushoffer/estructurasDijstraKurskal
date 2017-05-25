#include "Grafo.h"


Grafo::Grafo()
{
}


Grafo::~Grafo()
{
}

void Grafo::insertar(int ori, int fin, int peso)
{
	vect[ori].getLista().insertarFinal(fin, peso);
}

void Grafo::Dijkstra(int ori)
{
	Monticulo m;
	Nodo duo;
	int vi;
	Tripla* ady;
	vect[ori].setDistancia(0);
	m.insertar(vect[ori].getDistancia(), ori);

	while (m.getUltimaHoja() != 0)
	{
		duo = m.eliminar();
		vi = duo.getOrigen();

		if (vect[vi].getMarca() == false)
		{
			vect[vi].setMarca(true);
			ady = vect[vi].getLista().getPrimero();
			while (ady != NULL)
			{
				if (vect[ady->getPos()].getMarca() == false && ady->getPeso() > 0)
				{
					if ((vect[vi].getDistancia() + ady->getPeso()) < vect[ady->getPos()].getDistancia())
					{
						vect[ady->getPos()].setDistancia(vect[vi].getDistancia() + ady->getPeso());
						vect[ady->getPos()].setPadre(vi);
						m.insertar(vect[ady->getPos()].getDistancia(), ady->getPos());
					}
				}
				ady = ady->getSiguiente();
			}
			
		}
	}
}

void Grafo::mostrarCamino(int d)
{
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
	}
	cout << "Total de pasos: " << total << endl;
	//cout << endl;
}

void Grafo::resetPadres()
{
	for (int i = 0; i < TAM; i++)
	{
		vect[i].setPadre(-1);
		vect[i].setMarca(false);

	}
}

void Grafo::mostrarGrafo()
{
	for (int i = 1; i < 10; i++)
	{
		cout << "Nodo " << i << endl;
		vect[i].mostrar();
	}
}