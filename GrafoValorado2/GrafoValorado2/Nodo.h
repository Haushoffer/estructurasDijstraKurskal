#ifndef NODO_H
#define NODO_H
class Nodo
{
private: 
	int distancia, origen,destino;
	bool presente;
public:
	Nodo();
	~Nodo();
	int getDistancia();
	int getOrigen();
	int getDestino();
	bool getPresente();
	void setDistancia(int d);
	void setOrigen(int o);
	void setDestino(int d);
	void setPresente(bool p);
};

#endif