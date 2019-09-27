//
// Created by Rafael Jiménez  on 2019-09-24.
//

#ifndef EJERCICIOLISTALIBROS_LISTAVEHICULOS_H
#define EJERCICIOLISTALIBROS_LISTAVEHICULOS_H


#include <ostream>
#include "Nodo.h"

class ListaVehiculos {
	Nodo *primero;
	Nodo *actual;

public:
	ListaVehiculos();

	virtual ~ListaVehiculos();

	void insertarInicio(const Vehiculo& );
	void insertarFinal(const Vehiculo& );
	bool eliminarInicio();
	bool eliminarFinal();
	bool encontrado(int);
	Vehiculo obtenerVehiculo(int);
	int totalNodos();
	bool listaVacia();

	Nodo *getPrimero() const;

	void setPrimero(Nodo *primero);

	Nodo *getActual() const;

	void setActual(Nodo *actual);

	std::string toString();
};


#endif //EJERCICIOLISTALIBROS_LISTAVEHICULOS_H
