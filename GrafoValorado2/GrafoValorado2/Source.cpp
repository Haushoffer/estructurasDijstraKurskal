#include <iostream>
using namespace std;
#include "Grafo.h"
#include <fstream>
void menu()
{
	Grafo aux;
	Grafo g;
	int resp = 9;
	///////////////
	fstream archivo;
	archivo.open("data.txt");
	if (!archivo)
	{
		cout << "fin" << endl;
	}
	else
	{
		int origen,destino,peso;
		while (!archivo.eof())
		{
			archivo >> origen>>destino>>peso;
			g.insertar(origen, destino, peso, 0);
			
		}
		archivo.close();
	}

	//////////



	do
	{
	cout << "1 Insertar" << endl;
	cout << "2 kruskal" << endl;
	cout << "3 mostrar" << endl;
	cout << "4 mostrar solucion" << endl;
	cout << "5 Salir" << endl;
	cin >> resp;
	
		switch (resp)
		{
		case 1:
			int origen, destino, peso;
			cout << "Origen ";
			cin >> origen;
			cout << "Destino ";
			cin >> destino;
			cout << "Peso ";
			cin >> peso;
			g.insertar(origen, destino, peso, 0);
			break;
		case 2:
			aux=g.Kruskal();
			aux.mostrar();
			break;
		case 3:
			g.mostrar();
			break;
		case 4:
			g.solucion();
			break;

		}
	} while (resp!=5);
	
}
int main()
{
	
	menu();
	return 0;
}