//
// Created by Rafael Jiménez  on 2019-09-25.
//

#ifndef EJERCICIOLISTAVEHICULOS_CARRO_H
#define EJERCICIOLISTAVEHICULOS_CARRO_H
#include <string>
#include <ostream>
#include "Vehiculo.h"



class Carro : public Vehiculo
{


public:
	Carro();

	Carro(int, float, const std::string);

	virtual ~Carro();

	float calcularMonto(int);

	std::string toString();


};


#endif //EJERCICIOLISTAVEHICULOS_CARRO_H
