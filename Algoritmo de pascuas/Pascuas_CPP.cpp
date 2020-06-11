//============================================================================
// Name        : Pascuas_Herasimiuk.cpp
// Author      :  Herasimiuk Alexis k1022
//============================================================================

#include <iostream>
#include "string"

using namespace std;

int main() {

	//declaraci�n de variables y constantes
	int a, b, c, d, e;
	int M, N;

	//Variables para almacenar los valores ingresados
	int agnoingresado;
	char agno[10];
	int bandera = 0;
	cout << "Bienvenido al sistema de c�lculo de fecha de Pascuas" << endl;
	cout
			<< "El sistema le permitir� saber el d�a en el que cae el domingo de pascuas seg�n el a�o ingresado"
			<< endl;

	//Bucle do -while que ejecuta el programa las veces que el usuario decida
	do {

		//Bucle do-while verifica que los datos ingresados sean correctos
		do {
			cout << "Por favor ingrese un a�o comprendido entre 1583 y 2299: ";
			cin >> agno;
			agnoingresado = atoi(agno);
			//Solucionar error bucle infinito.

		} while (agnoingresado <= 1583 || agnoingresado >= 2299);

		//C�lculo de variables
		a = agnoingresado % 19;
		b = agnoingresado % 4;
		c = agnoingresado % 7;

		//C�lculo de constantes
		if (agnoingresado >= 1583 && agnoingresado <= 1699) {
			M = 22;
			N = 2;
		} else if (agnoingresado >= 1700 && agnoingresado <= 1799) {
			M = 23;
			N = 3;
		} else if (agnoingresado >= 1800 && agnoingresado <= 1899) {
			M = 23;
			N = 4;
		} else if (agnoingresado >= 1900 && agnoingresado <= 2099) {
			M = 24;
			N = 5;
		} else if (agnoingresado >= 2100 && agnoingresado <= 2199) {
			M = 24;
			N = 6;
		} else if (agnoingresado >= 2200 && agnoingresado <= 2299) {
			M = 25;
			N = 0;
		}

		//C�lculo de variables
		d = ((19 * a + M) % 30);
		e = ((2 * b + 4 * c + 6 * d + N) % 7);

		//C�lculo y devoluci�n de resultados
		if ((d + e) < 10) {
			cout << "El d�a de pascuas en el a�o: " << agnoingresado
					<< " caer� el d�a: " << (d + e + 22) << " de marzo " << "03"
					<< (d + e + 22) << endl;
		} else if ((d + e) > 9) {
			int diadepascuas;
			diadepascuas = (d + e - 9);

			if (diadepascuas == 26) {
				diadepascuas = 19;
			}
			if (diadepascuas == 25 && d == 28 && e == 6 && a > 10) {
				diadepascuas = 18;

			}
			if (diadepascuas < 10) {
				cout << "El d�a de pascuas en el a�o: " << agnoingresado
						<< " caer� el d�a: " << diadepascuas << " de abril "
						<< "04" << 0 << diadepascuas << endl;
			} else {
				cout << "El d�a de pascuas en el a�o: " << agnoingresado
						<< " caer� el d�a: " << diadepascuas << " de abril "
						<< "04" << diadepascuas << endl;
			}
		}


		//Bucle do-while, pregunta al usuario si desea continuar ejecutando
		char band[10];
		do {
			cout
					<< "Por favor seleccione 1 si desea volver a comenzar, seleccione la opci�n 2 para terminar: ";
			cin >> band;
			bandera = atoi(band);
		} while (bandera != 1 && bandera != 2);

	} while (bandera == 1);

	cout
			<< "Gracias por usar el programa de c�lculo de d�as de pascuas. Vuelva pronto!"
			<< endl;

	return 0;
}

int devuelveEntero(int e, int agnoingresado, int d, int a) {
	char agno[10];
	if ((d + e) < 10) {

	    agno = "03" += (d+e+22);
	} else if ((d + e) > 9) {
		int diadepascuas;
		diadepascuas = (d + e - 9);

		if (diadepascuas == 26) {
			diadepascuas = 19;
		}
		if (diadepascuas == 25 && d == 28 && e == 6 && a > 10) {
			diadepascuas = 18;

		}
		if (diadepascuas < 10) {

			agno =  "04" += diadepascuas;
		} else {

			agno =  "04" += diadepascuas;
		}

	}
	return atoi(agno);
}
