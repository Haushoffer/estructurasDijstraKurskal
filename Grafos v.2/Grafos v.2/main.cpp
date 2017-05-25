#include <iostream>
#include "grafo.h"
#include <vector>
#include <fstream>

using namespace std;


void menu()
{
	fstream archEnter;
	grafo gra;
	int ori,fin;
	int elm,res,niv;
	bool encontre=false;
	bool continuar = false,paridad = false, lado = false;
	int opc;
	do
	{
		
		cout<<"1) Insertar Elementos"<<endl;
		cout<<"2) Busqueda Apmlitud -mostrar Camino "<<endl;
		cout<<"3) Busqueda Profundidad- mostrar Camino  "<<endl;
		cout<<"4) mostrar grafo "<<endl;
		cout<<"RESP.- ";
		cin>>opc;
	
		switch (opc)
		{
			case 1: archEnter.open("numeros.txt");
					
					while(!archEnter.eof()&&archEnter>>ori>>fin)
					{
						gra.insertar(ori,fin);
					}
					
					archEnter.close();

					cout<<"Carga Completa..."<<endl;
					system("pause");
			
				
					break;
			case 2:
				gra.resetear();
					cout<<"origen:";
					cin>>ori;
					cout<<"destino:";
					cin>>fin;
					gra.BFS(ori,fin,encontre);
					if (encontre)
					{
						cout << "Exsiste Camino" << endl;
						gra.mostrarCamino(ori, fin);
						cout << endl;
					}
					else
					{
						cout << "No Exsiste Camino" << endl;
					}
					
					system("pause");
					break;

			case 3: 
				gra.resetear();
					cout<<"origen:";
					cin>>ori;
					cout<<"destino:";
					cin>>fin;
					gra.DFS(ori,fin,encontre);
					if (encontre)
					{
						cout << "Exsiste Camino" << endl;
						gra.mostrarCamino(ori, fin);
						cout << endl;
					}
					else
					{
						cout << "No Exsiste Camino" << endl;
					}
					system("pause");
					break;
			case 4: 
					gra.mostrar();
					system("pause");
					break;
			
				
			case 5:
				exit(0);
			break;
		}
	}while(opc!=5);
}

int main()
{
	menu();

}
