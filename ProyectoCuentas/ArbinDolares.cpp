/*
*Proyecto Final Estructuras de Datos 1
*Diego Salas
*Stephan Endres
*2013
*/
#include "ArbinDolares.h"
#include <iostream>
#include "Cuenta.h"
using namespace std;

ArbinDolares::ArbinDolares() {
	cuentaRaiz= NULL;
	cuentaActual= NULL;
}

//Inserta una cuenta en el arbol
void ArbinDolares::insertarCuenta(int pnumCuenta, string pcliente, double psaldo){
		
	Cuenta * cuentaPadre = NULL;
	cuentaActual = cuentaRaiz;

	// Buscar la cuenta en el árbol de cuentas manteniendo el puntero en la raíz padre
	while(!Vacio(cuentaActual) && pnumCuenta != cuentaActual->getNumCuenta()) 
	{
		cuentaPadre = cuentaActual;
		if(pnumCuenta > cuentaActual->getNumCuenta()) cuentaActual = cuentaActual->getCuentaDerecha();
		else if(pnumCuenta < cuentaActual->getNumCuenta()) cuentaActual = cuentaActual->getCuentaIzquierda();
	}

	// Si se ha encontrado el elemento, regresar sin insertar
	if(!Vacio(cuentaActual))
	{
		return;
	}
	// Si padre es NULL, entonces el árbol estaba vacío, el nuevo nodo será
	// el nodo raiz

	if(Vacio(cuentaPadre))
	{
		cuentaRaiz = new Cuenta(pnumCuenta, pcliente, psaldo);
	}

	//// Si el numero de cuenta es menor que el que contiene el nodo padre, lo insertamos
	//// en la rama izquierda
	else if(pnumCuenta < cuentaPadre->getNumCuenta())
	{
		Cuenta * objCuenta = new Cuenta(pnumCuenta, pcliente, psaldo);
		cuentaPadre->setCuentaIzquierda(objCuenta);
	}

	// Si el número de cuenta es mayor que el que contiene el nodo padre, lo insertamos
	// en la rama derecha
	else if(pnumCuenta > cuentaPadre->getNumCuenta())
	{
		Cuenta * objCuenta = new Cuenta(pnumCuenta, pcliente, psaldo);
		cuentaPadre->setCuentaDerecha(objCuenta);
	}

}

// Comprobar si el árbol está vacío:
bool ArbinDolares:: Vacio(Cuenta * r) { 
    return r== NULL; 
}

//Busca una cuenta por número de cuenta
bool ArbinDolares:: buscarCuentaXNumCuenta(int pnumCuenta){
	
	cuentaActual = cuentaRaiz;

	// Todavía puede aparecer, ya que quedan cuentas por mirar
	while(!Vacio(cuentaActual)) {
		if(pnumCuenta == cuentaActual->getNumCuenta()) return true; // int encontrado
		else if(pnumCuenta > cuentaActual->getNumCuenta()) cuentaActual = cuentaActual->getCuentaDerecha(); // Seguir
		else if(pnumCuenta < cuentaActual->getNumCuenta()) cuentaActual = cuentaActual->getCuentaIzquierda();
	}
	return false; // No está en árbol

}

//Busca una cuenta por nombre del cliente
bool ArbinDolares:: buscarCuentaXNombreCliente(string pnombreCliente){
	cuentaActual = cuentaRaiz;

	// Todavía puede aparecer, ya que quedan cuentas por mirar
	while(!Vacio(cuentaActual)) {
		if(pnombreCliente == cuentaActual->getCliente()) return true; // int encontrado
		else if(pnombreCliente > cuentaActual->getCliente()) cuentaActual = cuentaActual->getCuentaDerecha(); // Seguir
		else if(pnombreCliente < cuentaActual->getCliente()) cuentaActual = cuentaActual->getCuentaIzquierda();
	}
	return false; // No está en árbol
}


//Cambia el saldo de una cuenta por # de cuenta
bool ArbinDolares:: cambiarSaldoCuentaXNumCuenta(int pnumCuenta, double psaldo){

	cuentaActual = cuentaRaiz;

	while(!Vacio(cuentaActual)) {
		if(pnumCuenta == cuentaActual->getNumCuenta()){// int encontrado
			cuentaActual->setSaldo(psaldo);
			return true;
		}
		else if(pnumCuenta > cuentaActual->getNumCuenta()) cuentaActual = cuentaActual->getCuentaDerecha(); // Seguir
		else if(pnumCuenta < cuentaActual->getNumCuenta()) cuentaActual = cuentaActual->getCuentaIzquierda();
	}
	return false; // No está en árbol
}

//Lista las cuentas en In-orden
void ArbinDolares::listarCuentasInOrden(Cuenta * pcuenta, bool r){
	if(r) pcuenta = cuentaRaiz;
	if(pcuenta->getCuentaIzquierda()) listarCuentasInOrden(pcuenta->getCuentaIzquierda(), false);
	string cliente;
	cliente = pcuenta->getCliente();
	Mostrar(pcuenta->getNumCuenta(), pcuenta->getSaldo(),cliente);
	if(pcuenta->getCuentaDerecha()) listarCuentasInOrden(pcuenta->getCuentaDerecha(), false);
}

//Impresion de datos de la cuenta
void ArbinDolares::Mostrar(int pnumCuenta, int psaldo, string pcliente)
{
   cout << pnumCuenta << " , " << psaldo << " , " << pcliente << " ." << endl;
}
