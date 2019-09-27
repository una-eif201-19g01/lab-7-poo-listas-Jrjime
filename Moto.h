//
// Created by Rafael Jiménez  on 2019-09-25.
//

#ifndef EJERCICIOLISTAVEHICULOS_MOTO_H
#define EJERCICIOLISTAVEHICULOS_MOTO_H
#include <string>
#include <ostream>
#include "Vehiculo.h"




class Moto : public Vehiculo
{


public:
	Moto();

	Moto(int,float, const std::string);

	virtual ~Moto();

	float calcularMonto(int);

	std::string toString();
};


#endif //EJERCICIOLISTAVEHICULOS_MOTO_H
