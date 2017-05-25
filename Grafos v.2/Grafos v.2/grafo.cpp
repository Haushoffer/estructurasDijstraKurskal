#include "grafo.h"


grafo::grafo()
{

}


grafo::~grafo()
{
}


void grafo::insertar(int ori, int fin)
{
	if(fin != 0)
	{
		graf[ori].getVertices().push_back(fin);
	}
	if (ori != 0)
	{
		graf[fin].getVertices().push_back(ori);
	}
}



void grafo::BFS(int ori, int dest, bool& encontre)
{
	queue<int> cola;
	int i_esimo,vert,adya;
	encontre = false;
	graf[ori].setMarca(true);
	cola.push(ori);

	while(cola.size() != 0 && encontre == false)
	{
		i_esimo = 1;
		vert = cola.front();
		cola.pop();
		adya = graf[vert].sacarSiguienteAdyacente(i_esimo);

		while(adya != 0 && encontre == false)
		{
			if(graf[adya].getmarca() == false)
			{
				graf[adya].setPadre(vert);
				
				if(adya == dest)
				{
					encontre = true;
				}
				else
				{
					graf[adya].setMarca(true);
					cola.push(adya);
				}
			}
			i_esimo = i_esimo + 1;
			adya = graf[vert].sacarSiguienteAdyacente(i_esimo);
		}
	}
}

bool grafo::DFS(int ori, int dest, bool encontre_cam)
{
	int i_esimo,adya;
	encontre_cam = false;
	graf[ori].setMarca(true);
	i_esimo = 1;
	adya = graf[ori].sacarSiguienteAdyacente(i_esimo);

	while(adya != 0)
	{
		if(encontre_cam == false && graf[adya].getmarca() == false)
		{
			graf[adya].setPadre(ori);
			if(adya == dest)
			{
				encontre_cam = true;
			}
			else
			{
				encontre_cam = DFS(adya,dest,encontre_cam);
			}
		}
		i_esimo = i_esimo + 1;
		adya = graf[ori].sacarSiguienteAdyacente(i_esimo);
	}
	return encontre_cam;
}
void grafo::mostrar()
{
	for(int ind=1; ind<10; ind++)
	{
		cout<<ind<<" -> ";
		graf[ind].mostrarNodo();
	}
}
void grafo::resetear()
{
	for (int ind = 1; ind<10; ind++)
	{	
		graf[ind].setPadre(-1);
		graf[ind].setMarca(false);
	}
}
void grafo::mostrarCamino(int ori, int dest)
{
	while (dest != ori)
	{
		cout << dest << "->";
		dest = graf[dest].getpadre();
	}
	cout << ori;
}
