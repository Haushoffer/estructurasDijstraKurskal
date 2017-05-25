#ifndef NODO_H
#define NODO_H
class Nodo
{
private: 
	int distancia, origen;
	bool presente;
public:
	Nodo();
	~Nodo();
	int getDistancia();
	int getOrigen();
	bool getPresente();
	void setDistancia(int d);
	void setOrigen(int o);
	void setPresente(bool p);
};

#endif