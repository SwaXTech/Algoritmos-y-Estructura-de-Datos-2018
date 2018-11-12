#include <iostream>
using namespace std;

//El siguiente programa pide al usuario tres longitudes de correspondientes a los lados de un tri�ngulo,
//EL programa calculo en principio si forman un triangulo, si es correcto, procede a calcular si es:
//Equilatero, Isosceles, o Escaleno.

//Prototipo de funci�nes
int evaluacion (int L1, int L2, int L3);
int tipo (int L1, int L2, int L3);

int main() {
	
	//Declaraci�n de variables.
	int L1 = 0;
	int L2 = 0;
	int L3 = 0;
	
	//Variable de comprobaci�n de tri�ngulo
	int es_triangulo = 0;
	
	//Inserci�n de datos
	cout << "Ingrese el primer lado del triangulo: ";
	cin>> L1;
    
	cout<< "Ingrese el segundo lado del triangulo: "; 
	cin>> L2;	

	cout<< "Ingrese el tercer lado del triangulo: "; 
	cin>> L3;
	
	//Invocaci�n de funciones
	es_triangulo = evaluacion(L1, L2, L3);
	
	//Evaluaci�n para la ejecuci�n de la segunda funci�n
	if(es_triangulo == 1){ 
		
		cout<< "Los datos ingresados forman un triangulo: "<< endl;
		
		//Devoluci�n de resultados por consola
		if(tipo(L1, L2, L3) == 0){
			    cout << "El triangulo formado es Equilatero";
			}
			else if(tipo(L1, L2, L3) == 1) {
				cout << "El triangulo formado es Escaleno.";
			}
			else if (tipo(L1, L2, L3) == 2){
			    cout << "El triangulo formado es Isosceles.";	
			}
		}
		
	 else {
		cout<< "Los datos ingresados no forman un triangulo";
	}
	
	    //Finalizaci�n del programa.
		return 0;
}

//Funci�n que eval�a si los datos ingresados forman un tri�ngulo
//Devuelve 1 si forman un tri�ngulo, en caso contrario devuelve 0
int evaluacion (int L1, int L2, int L3){

	if((L1 + L2 > L3) && (L1 + L3 > L2) && (L2 + L3 > L1)){	
		
		return 1;

		}else{
			
		return 0;
	}
}

//Funci�n que eval�a el t�po de tri�ngulo
//Solo se ejecuta si los datos ingresados forman un tri�ngulo (An�lisis realizado en Main)
int tipo(int L1, int L2, int L3){
	if((L1 == L2) && (L2 == L3)){ 
	    return 0;
		
		}else if((L1 != L2 && L2!=L3 && L1!=L3)){	
	    return 1;
		
		}else{
		return 2;
		
		}
	

}


