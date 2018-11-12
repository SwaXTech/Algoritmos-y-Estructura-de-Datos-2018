// Se desarrolla el m�todo de la burbuja mejorado.
#include <iostream>
using namespace std;

//Struct. Un estudiante que posee un n�mero de legajo y una nota asociada.
struct estudiantes{
	int NL;
	int nota;
};

//Prototipo de funciones

void ordenarVector(estudiantes V[], int n);
int buscaLegajo(estudiantes V[], int buscado, int n, int &pos);


//Funci�n principal
int main() {
	
	//Declaraci�n e inicializaci�n de variables
	int pos = 0; //Posici�n a la que se agregar�a legajo no encontrado
 	estudiantes V[8]; //Vector de 8 estudiantes
   
   //Inicializaci�n de vector
    V[0].NL = 30;
	V[0].nota = 8;
	
	V[1].NL = 100;
	V[1].nota = 6;
	
	V[2].NL = 20;
	V[2].nota = 9;
	
	V[3].NL = 1;
	V[3].nota = 8;
	
	V[4].NL = 1200;
	V[4].nota = 3;
	
	V[5].NL = 108;
	V[5].nota = 4;
	
	V[6].NL = 9;
	V[6].nota = 6;
	
	V[7].NL = 11;
	V[7].nota = 8;
	
	//Se imprime el vector sin ordenar
	cout << "Vector sin ordenar: "<< endl;
	int i = 0;
	for(i; i<8; i++){
		cout << "N�mero de Legajo: " << V[i].NL << "--> Nota: " << V[i].nota << endl;
	}
	
	//Se ordena el vector V de tama�o 8 por el m�todo de la burbuja mejorado.
	ordenarVector(V, 8);
	
	//Se imprime el vector ordenado
	cout << "Vector ordenado: " << endl;
	for(int i = 0; i<8; i++){
		cout << "N�mero de Legajo: " << V[i].NL << "--> Nota: " << V[i].nota << endl;
	}
	
	//Consulta de legajos
	int leg = 0;
	cout << "Por favor ingrese el n�mero de legajo que desea buscar: (Ej: 100, 1100)" << endl;
	cin >> leg;
	
	//Invocaci�n y an�lisis de caso. Se busca el legajo leg en el vector V de 8 posiciones.
	//Posici�n hallada pos
	if(buscaLegajo(V, leg, 8, pos) != -1){
		cout << "Para el legajo n�mero " << leg << ", se encontr� la nota: " << V[pos].nota << endl;
	} else {
		cout << "No se encontr� el legajo n�mero: " << leg << ", se insertar� en la posici�n " << pos << " empezando a contar por el 0";
	}
	
	return 0;
}

//Funci�n ordenaVector, ordena el vector utilizando el m�todo de la burbuja mejorado
void ordenarVector(estudiantes V[], int n){

	int t = 0; //Variable bandera, indica que termin� el ordenamiento
	int i = 0; //Contador i
	int j; //Contador j
	estudiantes aux; //Variable auxiliar
	
	//Bucle while, cerrar� el ciclo cuando no haya m�s que ordenar
	while(i <= n && t == 0){ //Pasos de ordenamiento
		t = 1; 
		for(j = 1; j<n-i; j++){ //Comparaciones
			
			if(V[j-1].NL > V[j].NL){
				
				t = 0;
				aux = V[j];
				V[j] = V[j-1];
				V[j-1] = aux;
			}
			
		}
		i++;
	}
}
//Funcion buscaLegajo, busca el legajo buscado y devuelve un entero indicando:
// 0 si encontr� el legajo
// -1 si no encontr� el legajo
// Variable por referencia pos, almacena la posici�n que est� el legajo
// o donde debe insertarse el legajo no encontrado
int buscaLegajo(estudiantes V[], int buscado, int n, int &pos){
	int p = 0;
	int u = n-1;
	int m = 0;
	
	while(p <= u){
		m = ((p+u)/2);
		
		if(V[m].NL == buscado){
			pos = m;
			return 0;
		} else if(buscado > V[m].NL){
			p = m+1;
		} else {
			u = m-1;
		}
	}
	pos = p;
	return -1;
}



