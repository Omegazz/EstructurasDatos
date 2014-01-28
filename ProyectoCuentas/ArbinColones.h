/*
*Proyecto Final Estructuras de Datos 1
*Diego Salas
*Stephan Endres
*2013
*/
#pragma once
#include "Cuenta.h"

class ArbinColones
{
	//Cuenta raíz
	Cuenta * cuentaRaiz;
	Cuenta * cuentaActual;

public:
	ArbinColones();
	//Busca una cuenta por número de cuenta
	bool buscarCuentaXNumCuenta(int pnumCuenta);
	//Busca una cuenta por nombre de cliente
	bool buscarCuentaXNombreCliente(string pnombreCliente);
	//Cambia el saldo de una cuenta por medio de su número de cuenta
	bool cambiarSaldoCuentaXNumCuenta(int pnumCuenta, double psaldo);
	//Inserta una cuenta en el árbol de cuentas
	void insertarCuenta(int pnumCuenta, string pcliente, double psaldo);
	//Lista las cuentas en In orden
	void listarCuentasInOrden(Cuenta  * pcuenta=NULL, bool r=true);
	//Comprueba si la cuenta está vacía
	bool Vacio(Cuenta * c);
	//Muestra los datos de la cuenta
	void Mostrar(int pnumCuenta, int psaldo, string pcliente);

};

