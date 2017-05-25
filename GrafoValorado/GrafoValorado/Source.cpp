#include <iostream>
using namespace std;
#include  "Grafo.h"
#include <fstream>
int main()
{
	Grafo g;
	fstream archivo;
	archivo.open("data.txt");
	if (!archivo)
	{
		cout << "fin" << endl;
	}
	else
	{
		int origen, destino, peso;
		while (!archivo.eof())
		{
			archivo >> origen >> destino >> peso;
			g.insertar(origen, destino, peso);

		}
		archivo.close();
	}

	int op;
	int o, d,p;
	do{

		cout << "1. Insertar" << endl;
		cout << "2. Dijkstra" << endl;
		cout << "3. Mostrar camino" << endl;
		cout << "4. Reset Padres-Marca-Distancia" << endl;
		cout << "5. Mostrar Grafo" << endl;
		cout << "6. Salir" << endl;

		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Origen: ";
			cin >> o;
			cout << "Destino: ";
			cin >> d;
			cout << "Peso: ";
			cin >> p;
			g.insertar(o, d, p);
			break;
		case 2:
			cout << "Origen: ";
			cin >> o;
			g.Dijkstra(o);
			break;
		case 3:
			cout << "Destino: ";
			cin >> d;
			g.mostrarCamino(d);
			break;
		case 4:
			g.resetPadres();
			break;
		case 5:
			g.mostrarGrafo();
			break;
		}
	} while (op != 6);
	
	return 0;
}