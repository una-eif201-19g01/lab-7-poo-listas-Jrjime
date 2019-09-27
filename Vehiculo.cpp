#include "Vehiculo.h"

Vehiculo::Vehiculo()
{
}

Vehiculo::Vehiculo(int id, float costo, const std::string marca) : id(id),costo(costo),marca(marca)
{
}

Vehiculo::~Vehiculo()
{
}

int Vehiculo::getId() const
{
	return id;
}

void Vehiculo::setId(int id)
{
	Vehiculo::id = id;
}

const std::string Vehiculo::getMarca() const
{
	return marca;
}

void Vehiculo::setMarca(const std::string marca)
{
	Vehiculo::marca = marca;
}

float Vehiculo::getCosto()
{
	return costo;
}

void Vehiculo::setCosto(float costo)
{
	Vehiculo::costo = costo;
}

float Vehiculo::calcularMonto(int numero)
{
	float producto;

	producto = getCosto()*numero;

	return producto;
}

std::string Vehiculo::toString()
{
	std::string reporte = "";

	reporte = "ID:\t" + std::to_string(getId()) + "\tNombre:\t" + getMarca() + "\t";

	return reporte;
}
