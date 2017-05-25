#include "Monticulo.h"


Monticulo::Monticulo()
{
	ultimaHoja = 0;
}


Monticulo::~Monticulo()
{
}

void Monticulo::insertar(int d, int o, int dt)
{
	if (vect[1].getPresente() == false)
	{
		ultimaHoja = 1;
		vect[ultimaHoja].setDistancia(d);
		vect[ultimaHoja].setOrigen(o);
		vect[ultimaHoja].setDestino(dt);
		vect[ultimaHoja].setPresente(true);

	}
	else
	{
		ultimaHoja = ultimaHoja + 1;
		vect[ultimaHoja].setDistancia(d);
		vect[ultimaHoja].setOrigen(o);
		vect[ultimaHoja].setDestino(dt);
		vect[ultimaHoja].setPresente(true);
		recuperar_abajo_arriba(ultimaHoja);
	}
}

void Monticulo::recuperar_abajo_arriba(int i)
{
	if (i > 1)
	{
		if (vect[i].getDistancia() < vect[i / 2].getDistancia())
		{
			int aux1 = vect[i / 2].getDistancia();
			int aux2 = vect[i / 2].getOrigen();
			int aux3 = vect[i / 2].getDestino();
			vect[i / 2].setDistancia(vect[i].getDistancia());
			vect[i / 2].setOrigen(vect[i].getOrigen());
			vect[i / 2].setDestino(vect[i].getDestino());
			vect[i].setDistancia(aux1);
			vect[i].setOrigen(aux2);
			vect[i].setDestino(aux3);
			recuperar_abajo_arriba(i / 2);
		}
		
	}
}

void Monticulo::recuperar_arriba_abajo(int i)
{
	int hijoIzq = 2 * i;
	int hijoDer = (2 * i) + 1;

	if (hijoIzq < 11000 && hijoDer < 11000)
	{
		if (vect[hijoIzq].getPresente() == true && vect[hijoDer].getPresente() == true)
		{
			if (vect[hijoIzq].getDistancia() < vect[hijoDer].getDistancia())
			{
				if (vect[hijoIzq].getDistancia() < vect[i].getDistancia())
				{
					int aux1 = vect[i].getDistancia();
					int aux2 = vect[i].getOrigen();
					int aux3 = vect[i].getDestino();
					vect[i].setDistancia(vect[hijoIzq].getDistancia());
					vect[i].setOrigen(vect[hijoIzq].getOrigen());
					vect[i].setDestino(vect[hijoIzq].getDestino());
					vect[hijoIzq].setDistancia(aux1);
					vect[hijoIzq].setOrigen(aux2);
					vect[hijoIzq].setDestino(aux3);
					recuperar_arriba_abajo(hijoIzq);
				}
			}
			else
			{
				if (vect[hijoDer].getDistancia() < vect[i].getDistancia())
				{
					int aux1 = vect[i].getDistancia();
					int aux2 = vect[i].getOrigen();
					int aux3 = vect[i].getDestino();
					vect[i].setDistancia(vect[hijoDer].getDistancia());
					vect[i].setOrigen(vect[hijoDer].getOrigen());
					vect[i].setDestino(vect[hijoDer].getDestino());
					vect[hijoDer].setDistancia(aux1);
					vect[hijoDer].setOrigen(aux2);
					vect[hijoDer].setDestino(aux3);
					recuperar_arriba_abajo(hijoDer);
				}
			}

		}
		else
		{
			if (vect[hijoIzq].getPresente() == true)
			{
				if (vect[hijoIzq].getDistancia() < vect[i].getDistancia())
				{
					int aux1 = vect[i].getDistancia();
					int aux2 = vect[i].getOrigen();
					int aux3 = vect[i].getDestino();
					vect[i].setDistancia(vect[hijoIzq].getDistancia());
					vect[i].setOrigen(vect[hijoIzq].getOrigen());
					vect[i].setDestino(vect[hijoIzq].getDestino());
					vect[hijoIzq].setDistancia(aux1);
					vect[hijoIzq].setOrigen(aux2);
					vect[hijoIzq].setDestino(aux3);
					recuperar_arriba_abajo(hijoIzq);
				}
			}
		}
	}
}

Nodo Monticulo::eliminar()
{
	Nodo menor;
	if (vect[1].getPresente() == false)
	{
		return menor;
	}
	else
	{
		menor = vect[1];
		vect[1].setDistancia(vect[ultimaHoja].getDistancia());
		vect[1].setOrigen(vect[ultimaHoja].getOrigen());
		vect[1].setDestino(vect[ultimaHoja].getDestino());
		vect[ultimaHoja].setPresente(false);
		ultimaHoja = ultimaHoja - 1;
		recuperar_arriba_abajo(1);
	}
	return menor;
}

int Monticulo::getUltimaHoja()
{
	return ultimaHoja;
}

/*
void Monticulo::recorrerInOrden(int i)
{
	if (i < 200)
	{
		if (vect[1].getPresente() == false)
		{
			cout << "Arbol vacio " << endl;
		}
		else
		{
			recorrerInOrden(2 * i);
			if (vect[i].getPresente() == true)
			{
				cout << vect[i].getElemento() << endl;
			}
			recorrerInOrden(2 * i + 1);
		}
	}
}

void Monticulo::recorrerPostOrden(int i)
{
	if (i < 200)
	{
		if (vect[1].getPresente() == false)
		{
			cout << "Arbol vacio " << endl;
		}
		else
		{
			recorrerInOrden(2 * i);
			recorrerInOrden(2 * i + 1);
			if (vect[i].getPresente() == true)
			{
				cout << vect[i].getElemento() << endl;
			}
		}
	}
}

void Monticulo::recorrerPreOrden(int i)
{

	if (i < 200)
	{
		if (vect[1].getPresente() == false)
		{
			cout << "Arbol vacio " << endl;
		}
		else
		{
			if (vect[i].getPresente() == true)
			{
				cout << vect[i].getElemento() << endl;
			}
			recorrerInOrden(2 * i);
			recorrerInOrden(2 * i + 1);
		}
	}
}

bool Monticulo::buscar(int i, int e)
{
	if (vect[i].getPresente() == false)
	{
		return false;
	}
	else
	{
		if (e < vect[i].getElemento())
		{
			return buscar(2 * i, e);
		}
		if (e > vect[i].getElemento())
		{
			return buscar(2 * i + 1, e);
		}
		if (e == vect[i].getElemento())
		{
			return true;
		}
	}
}


int Monticulo::calcularAltura(int i)
{
	int a1, a2;
	if (i < 11000)
	{
		if (vect[i].getPresente() == false)
		{
			return 0;
		}
		else
		{
			a1 = calcularAltura(2 * i);
			a2 = calcularAltura(2 * i + 1);
		}
		if (a1 > a2)
		{
			return a1 + 1;
		}
		else
			return a2 + 1;
	}
}

int Monticulo::contarNodos(int i)
{
	return ultimaHoja;
}
*/

