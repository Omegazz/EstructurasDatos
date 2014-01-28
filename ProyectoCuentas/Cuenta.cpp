/*
*Proyecto Final Estructuras de Datos 1
*Diego Salas
*Stephan Endres
*2013
*/
#include "Cuenta.h"

//Constructor
Cuenta::Cuenta(int pnumCuenta, string pcliente, double psaldo)
{
	setNumCuenta(pnumCuenta);
	setCliente(pcliente);
	setSaldo(psaldo);
	setCuentaDerecha(NULL);
	setCuentaIzquierda(NULL);
}

//Sets y gets
void Cuenta::setNumCuenta(int pnumCuenta)
{
	this->numCuenta= pnumCuenta;
}

int Cuenta::getNumCuenta()
{
	return numCuenta;
}

void Cuenta::setCliente(string pcliente)
{
	cliente= pcliente;
}

string Cuenta::getCliente()
{
	return cliente;
}

void Cuenta::setSaldo(double psaldo)
{
	saldo= psaldo;
}

double Cuenta::getSaldo()
{
	return saldo;
}

void Cuenta::setCuentaDerecha(Cuenta * pcuenta)
{
	cuentaDerecha= pcuenta;
}

Cuenta * Cuenta::getCuentaDerecha()
{
	return cuentaDerecha;
}

void Cuenta::setCuentaIzquierda(Cuenta * pcuenta)
{
	cuentaIzquierda= pcuenta;
}

Cuenta * Cuenta::getCuentaIzquierda()
{
	return cuentaIzquierda;
}
