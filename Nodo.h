#ifndef EJERCICIOLISTALIBROS_NODO_H
#define EJERCICIOLISTALIBROS_NODO_H


#include <ostream>
#include "Vehiculo.h"

class Nodo {
	Vehiculo vehiculo;
	Nodo *siguiente;

public:
	Nodo();

	Nodo(const Vehiculo &, Nodo *);

	virtual ~Nodo();

	const Vehiculo &getVehiculo() const;

	void setVehiculo(const Vehiculo &);

	Nodo *getSiguiente() const;

	void setSiguiente(Nodo *);

	std::string toString();

};


#endif //EJERCICIOLISTALIBROS_NODO_H
