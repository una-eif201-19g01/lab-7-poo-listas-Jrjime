#include "ListaVehiculos.h"

ListaVehiculos::ListaVehiculos()
{
	primero = nullptr;
	actual = nullptr;
}

ListaVehiculos::~ListaVehiculos()
{
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void ListaVehiculos::insertarInicio(const Vehiculo &_vehiculo)
{
	actual = new Nodo(_vehiculo, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void ListaVehiculos::insertarFinal(const Vehiculo & _vehiculo)
{
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_vehiculo, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_vehiculo, nullptr));
	}
}

bool ListaVehiculos::eliminarInicio()
{
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

bool ListaVehiculos::eliminarFinal()
{
	actual = primero;
	if (primero == nullptr) {
		return false;
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		delete actual;
		return true;
	}
}

bool ListaVehiculos::encontrado(int id)
{
	actual = primero;
	if (primero->getVehiculo().getId() == id) {
		return true;
	}
	else
	{
		while (actual->getSiguiente()->getVehiculo().getId() != id) {
			actual = actual->getSiguiente();
		}
		return true;
	}

	return false;
}

Vehiculo ListaVehiculos::obtenerVehiculo(int id)
{
	actual = primero;
	if (primero->getVehiculo().getId() == id) {
		return primero->getVehiculo();
	}
	else
	{
		while (actual->getSiguiente()->getVehiculo().getId() != id) {
			actual = actual->getSiguiente();
		}
		return actual->getSiguiente()->getVehiculo();
	}

}

int ListaVehiculos::totalNodos()
{
	int totalNodos = 0;
	actual = primero;

	while (actual != nullptr) {
		totalNodos++;
		actual = actual->getSiguiente();
	}

	return totalNodos;
}

bool ListaVehiculos::listaVacia()
{
	return primero == nullptr;;
}

Nodo * ListaVehiculos::getPrimero() const
{
	return primero;
}

void ListaVehiculos::setPrimero(Nodo * primero)
{
	ListaVehiculos::primero = primero;
}

Nodo * ListaVehiculos::getActual() const
{
	return actual;
}

void ListaVehiculos::setActual(Nodo * actual)
{
	ListaVehiculos::actual = actual;
}

std::string ListaVehiculos::toString()
{
	std::string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}
