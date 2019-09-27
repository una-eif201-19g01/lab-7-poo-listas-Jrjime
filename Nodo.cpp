#include "Nodo.h"

Nodo::Nodo()
{
}

Nodo::Nodo(const Vehiculo &vehiculo, Nodo *siguiente) : vehiculo(vehiculo), siguiente(siguiente)
{
}

Nodo::~Nodo()
{
}

const Vehiculo & Nodo::getVehiculo() const
{
	return vehiculo;
}

void Nodo::setVehiculo(const Vehiculo &_vehiculo)
{
	Nodo::vehiculo = _vehiculo;
}

Nodo * Nodo::getSiguiente() const
{
	return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente)
{
	Nodo::siguiente = _siguiente;
}

std::string Nodo::toString()
{
	return vehiculo.toString();
}
