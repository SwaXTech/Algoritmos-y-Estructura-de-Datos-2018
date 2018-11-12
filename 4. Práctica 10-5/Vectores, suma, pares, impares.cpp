#include <iostream>
using namespace std;

//Dados N n�meros enteros positivos y negativos, sumarlos.
//Si la suma es mayor que 0, imprimir los n�meros ingresados en las posiciones pares, caso contrario, las impares.

int main() {
	int pos = 0; //Almacena la cantidad de posiciones del arreglo
	
	//Se pide y guarda la cantidad de posiciones deseadas por el usuario
	cout << "Ingrese la cantidad de n�meros enteros a evaluar: ";
	cin >> pos; 
	
	//Declaraci�n de array de enteros, con pos posiciones.
	int arreglo [pos];
	
	//Solicitud de valores
	int i = 0;
	for(i; i < pos; i++){
		cout << "Por favor ingrese el numero entero para almacenar en la posicion #" << i << ": ";
		cin >> arreglo[i];
	}
	
	int suma = 0; //suma de posiciones
	
	//Ejecuci�n de suma
	i = 0;
	for(i; i < pos; i++){
		suma += arreglo[i]; // suma = suma + arreglo[i]
	}
	cout <<"La suma efectuada da como resultado: " << suma <<endl;
	
	//An�lisis de resultado, devoluci�n de valores en posiciones segun condici�n de suma
	i = 0;
	if(suma >= 0){  //Imprime n�meros almacenamos en posiciones pares si la suma es positiva
		for(i; i<pos; i++){
			if(i%2 == 0){
				cout<< "En la posicion: " << i << " se almaceno el numero: " << arreglo[i] <<endl;
			}
	    }
    } else if(suma < 0) { //Imprime n�meros almacenados en posiciones impares si la suma es negativa
    	for(i; i<pos; i++){
			if(i%2 != 0){
				cout<< "En la posicion: " << i << " se almaceno el numero: " << arreglo[i] <<endl;
			}
    	
	   }
   }
	return 0;
}
