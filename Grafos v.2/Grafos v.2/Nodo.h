#include <iostream>
#include <vector>
using namespace std;


class Nodo
{
	private:
		int padre;
		bool marca;
		vector<int> vertices;

	public:
		Nodo(void);
		~Nodo(void);
		int getpadre();
		int getmarca();
		void setPadre(int);
		void setMarca(bool);
		void mostrarVert();
		void mostrarNodo();
		int sacarSiguienteAdyacente(int);
		vector<int>& getVertices();

};
