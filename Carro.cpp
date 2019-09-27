//
// Created by Rafael Jiménez  on 2019-09-24.
//

#include "Carro.h"


Carro::Carro()
{
}

Carro::Carro(int id, float costo, const std::string marca) : Vehiculo(id, costo, marca)
{
}


Carro::~Carro()
{
}

float Carro::calcularMonto(int dias)
{
	float producto;

	producto = getCosto()*dias;

	return producto;
}

std::string Carro::toString()
{
	std::string reporte = "";

	reporte = Vehiculo::toString() + "Costo por dia:\t" + std::to_string(getCosto())+"\n";

	return reporte;
}

