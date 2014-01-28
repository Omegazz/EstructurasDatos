
/*
*Proyecto Final Estructuras de Datos 1
*Diego Salas
*Stephan Endres
*2013
*/
#include <iostream>
#include "Cuenta.h"
#include "ArbinColones.h"
#include "ArbinDolares.h"
using namespace std;


	/*
*Programa principal
*/

ArbinColones * arbolC;
ArbinDolares * arbolD;

int main()
{
	
	arbolC= new ArbinColones();
	arbolD= new ArbinDolares();


	cout<< "Proyecto Final Estructuras de Datos 1\n";
	cout<< "Sistema de Cuentas en Colones y D\242lares\n";
	cout<< "****************************\n";

	int opcion;
	do
	{
		cout<< "\n";
		cout<< "1.Registrar cuenta\n";
		cout<< "2.Buscar cuenta por n\243mero de cuenta\n";
		cout<< "3.Buscar cuenta por nombre de cliente\n";
		cout<< "4.Cambiar saldo de cuenta por n\243mero de cuenta\n";
		cout<< "5.Listar cuentas en In-Orden\n";
		cout<< "6.Salir\n";
		cin>> opcion;
		cout<< "\n";

		int opcion2=0;
		int numCuenta;
		string cliente;
		double saldo;
		
			//Sentencia de selección 
		switch(opcion)
		{
		case 1:
			
			//Pregunta acerca del tipo de moneda
			cout<< "Seleccione el tipo de Moneda\n";
			cout<< " 1.Colones\n";
			cout<< " 2.D\242lares\n";
			cin>> opcion2;
			cout<< "\n";

			cout<< "Digite el n\243mero de cuenta\n";
			cin>> numCuenta;
			cout<< "\n";
			cout<< "Digite el nombre del cliente\n";
			cin>> cliente;
			cout<< "\n";
			cout<< "Digite el saldo\n";
			cin>> saldo;
			cout<< "\n";
			
			//Colones
			if (opcion2==1)
			{
				if(numCuenta!= NULL && cliente != "" && saldo != NULL)
				{
					arbolC->insertarCuenta(numCuenta, cliente, saldo);
					cout<< "La cuenta se ha registrado satisfactoriamente\n";
				}
				else
				{
					cout<< "Ha ocurrido un error en el registro\n";
					cout<< "Uno o m\240s valores se encuentran vac\241os\n";
				}
			}
			//Dolares
			else if(opcion2==2)
			{
				if(numCuenta!= NULL && cliente != "" && saldo != NULL)
				{
					arbolD->insertarCuenta(numCuenta, cliente, saldo);
					cout<< "La cuenta se ha registrado satisfactoriamente\n";
				}
				else
				{
					cout<< "Ha ocurrido un error en el registro\n";
					cout<< "Uno o m\240s valores se encuentran vac\241os\n";
				}
			}

			break;
		case 2:

			//Pregunta acerca del tipo de moneda
			cout<< "Seleccione el tipo de Moneda\n";
			cout<< " 1.Colones\n";
			cout<< " 2.D\242lares\n";
			cin>> opcion2;
			cout<< "\n";

			cout<< "Digite el n\243mero de cuenta\n";
			cin>> numCuenta;
			cout<< "\n";

			if (opcion2==1)
			{
				if(arbolC->buscarCuentaXNumCuenta(numCuenta))
				{
					cout<< "La cuenta ha sido encontrada\n";
				}
				else
				{
					cout<< "La cuenta no se encuentra en el sistema\n";
				}
			}
			else if(opcion2==2)
			{
				if(arbolD->buscarCuentaXNumCuenta(numCuenta))
				{
					cout<< "La cuenta ha sido encontrada\n";
				}
				else
				{
					cout<< "La cuenta no se encuentra en el sistema\n";
				}
			}

			break;

			//Buscar cuenta por nombre de cliente
		case 3:

			//Pregunta acerca del tipo de moneda
			cout<< "Seleccione el tipo de Moneda\n";
			cout<< " 1.Colones\n";
			cout<< " 2.D\242lares\n";
			cin>> opcion2;
			cout<< "\n";

			cout<< "Digite el nombre del cliente\n";
			cin>> cliente;
			cout<< "\n";
			
			if(opcion2==1)
			{
				if(arbolC->buscarCuentaXNombreCliente(cliente))
				{
					cout<< "La cuenta ha sido encontrada\n";
				}
				else
				{
					cout<< "La cuenta registrara con ese nombre no se encuentra en el sistema\n";
				}

			}
			else if(opcion==2)
			{
				if(arbolD->buscarCuentaXNombreCliente(cliente))
				{
					cout<< "La cuenta ha sido encontrada\n";
				}
				else
				{
					cout<< "La cuenta registrara con ese nombre no se encuentra en el sistema\n";
				}	
			}

			break;

			//Cambiar saldo de cuenta por numero de cuenta
		case 4:

			//Pregunta acerca del tipo de moneda
			cout<< "Seleccione el tipo de Moneda\n";
			cout<< " 1.Colones\n";
			cout<< " 2.D\242lares\n";
			cin>> opcion2;
			cout<< "\n";

			cout<< "Digite el n\243mero de cuenta\n";
			cin>> numCuenta;
			cout<< "\n";
			cout<< "Digite el saldo\n";
			cin>> saldo;
			cout<< "\n";

			if(opcion2==1)
			{
				if(saldo!=NULL)
				{
					arbolC->cambiarSaldoCuentaXNumCuenta(numCuenta, saldo);
					cout<< "El saldo ha sido cambiado satisfactoriamente\n";
				}
				else
				{
					cout<< "Ha ocurrido un error en el proceso\n";
					cout<< "Uno o m\240s valores se encuentran vac\241os\n";
				}

			}
			else if(opcion==2)
			{
				if(saldo!=NULL)
				{
					arbolD->cambiarSaldoCuentaXNumCuenta(numCuenta, saldo);
					cout<< "El saldo ha sido cambiado satisfactoriamente\n";
				}
				else
				{
					cout<< "Ha ocurrido un error en el proceso\n";
					cout<< "Uno o m\240s valores se encuentran vac\241os\n";
				}
			}
			
			break;

			//Imprimir arboles en In-Orden
		case 5:
			//Pregunta acerca del tipo de moneda
			cout<< "Seleccione el tipo de Moneda\n";
			cout<< " 1.Colones\n";
			cout<< " 2.D\242lares\n";
			cin>> opcion2;
			cout<< "\n";

			if(opcion2==1)
			{
				cout<< "Lista de cuentas en Colones\n";
				arbolC->listarCuentasInOrden();
			}
			else if(opcion==2)
			{
				cout<< "Lista de cuentas en D\242lares\n";
				arbolD->listarCuentasInOrden();
			}



			break;

		default:

			break;


		}


	}while(opcion!=6);


}





