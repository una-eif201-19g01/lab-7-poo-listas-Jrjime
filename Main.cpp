
#include <iostream>
#include "Carro.h"
#include "Moto.h"
#include "ListaVehiculos.h"

float MONTODIA = 55000;
float MONTOHORA = 5000;

using namespace std;
int main() {
	Carro carro1(111, 45000, "Honda");
	Carro carro2(222, 150000, "Chevrolet");
	Carro carro3(333, 25000, "Hyundai");
	Carro carro4(444, 1750000, "Ferrari");
	Moto moto1(555, 55000, "Harley Davidson");
	Moto moto2(666, 11000, "Yamaha" );
	Moto moto3(777, 7000, "suzuki");


	ListaVehiculos* listaVehiculos = new ListaVehiculos();

	listaVehiculos->insertarInicio(carro1);
	listaVehiculos->insertarInicio(carro2);
	listaVehiculos->insertarInicio(carro3);
	listaVehiculos->insertarInicio(carro4);
	listaVehiculos->insertarInicio(moto1);
	listaVehiculos->insertarInicio(moto2);
	listaVehiculos->insertarInicio(moto3);


	int numero;
	int dias;
	int horas;

	cout << "\t----------BIENVENIDO----------\n";

	//Busca el vehiculo deseado y si existe imprime los atributos del libro 
	cout << "\tInserte el id del vehiculo que desea rentar" << endl;
	cout << "Lista de Vehiculos [" << listaVehiculos->totalNodos() << "] \n" << listaVehiculos->toString() <<"\n" << endl;
	cin >> numero;
	
	if (listaVehiculos->encontrado(numero) == true) {
		if (numero < 4) {

			cout << "¿Cuantos dias desea rentar el carro?" << endl;
			cin >> dias;
			cout << listaVehiculos->obtenerVehiculo(numero).toString() << endl;
			cout << "El costo total es:" + to_string(listaVehiculos->obtenerVehiculo(numero).calcularMonto(dias)) << endl;

		}
		else
		{
			cout << "¿Cuantas horas desea rentar la moto?" << endl;
			cin >> horas;
			cout << listaVehiculos->obtenerVehiculo(numero).toString() << endl;
			cout << "El costo total es:" + to_string(listaVehiculos->obtenerVehiculo(numero).calcularMonto(horas)) << endl;

		}
	}
	else
	{
		cout << "No existe" << endl;
	}


	// Se elimina toda la lista
	delete(listaVehiculos);
	cout << "Lista de libros [" << listaVehiculos->totalNodos() << "] \n" << listaVehiculos->toString() << endl;

	system("pause");
}