/*
*Proyecto Final Estructuras de Datos 1
*Diego Salas
*Stephan Endres
*2013
*/
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Cuenta
{
	//Atributos
private:
	int numCuenta;
	string cliente;
	double saldo;

	//Apuntadores
	Cuenta * cuentaDerecha;
	Cuenta * cuentaIzquierda;

	//Métodos
public:
	//Constructor
	Cuenta(int pnumCuenta, string pcliente, double psaldo);

	//Numero de cuenta
	void setNumCuenta(int pnumCuenta);
	int getNumCuenta();
	//Nombre del cliente
	void setCliente(string pcliente);
	string getCliente();
	//Saldo
	void setSaldo(double psaldo);
	double getSaldo();

	//Cuenta derecha
	void setCuentaDerecha(Cuenta * pcuentaDerecha);
	Cuenta * getCuentaDerecha();
	//Cuenta izquierda
	void setCuentaIzquierda(Cuenta * pcuentaIzquierda);
	Cuenta * getCuentaIzquierda();


};

