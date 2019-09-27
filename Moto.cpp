#include "Moto.h"

Moto::Moto()
{
}

Moto::Moto(int id,float costo, const std::string marca) : Vehiculo(id, costo, marca)
{
}

Moto::~Moto()
{
}

float Moto::calcularMonto(int horas)
{
	float producto;

	producto = getCosto()*horas;

	return producto;
}

std::string Moto::toString()
{
	std::string reporte = "";

	reporte = Vehiculo::toString() + "Costo por hora:\t" + std::to_string(getCosto()) + "\n";

	return reporte;
}
