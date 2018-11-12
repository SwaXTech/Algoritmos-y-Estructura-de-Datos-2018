#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

struct nodo{
	
	int info;
	nodo* sgte;
	
};

void push(nodo* &pila, int valor);
int pop(nodo* &pila);
void imprimirPila(nodo * &pila);
void insertaNumero(nodo* &pila, int pos, int valor);

int main() {
	
	cout <<"Sistema de pila" << endl;
	
	nodo* pila = NULL;
	
	srand(time(NULL));
	int v[10];
	int i = 0;
	for(i; i < 10; i++){
		v[i] = rand();
	}
	
	cout << "Posici�n original:" << endl;
	for(i = 0; i < 10; i++){
		cout << v[i] << endl;
	}
	
	for(i = 0; i < 10; i++){
		push(pila, v[i]);
	}
	
	cout << endl;
	cout << "Posici�n invertida:" << endl;
	while(pila != NULL){
		cout << pop(pila) << endl;
	}
	
	return 0;
}

//Funci�n push, inserta un valor a la pila
void push(nodo* &pila, int valor){ //Recibe el puntero al inicio de la pila y el valor a ingresar
	
	nodo *p = new nodo(); //Crea de forma din�mica una instancia de nodo, una variable an�nima
	
	p -> info = valor; //En el campo info de la instancia reci�n creada, se almacena el valor
	p -> sgte = pila; //En el campo 'siguiente' se almacena el lugar donde ANTES estaba el tope de la pila, es decir el primer elemento
	pila = p; //Ahora el inicio de la pila, es el nodo que acabamos de crear
	
	return;
}


//Funci�n pop, retorna el valor del tope de la pila
int pop(nodo* &pila){ //Recibe como par�metro el puntero al inicio de la pila
	
	nodo* p = pila; //Guardo de manera temporal el tope de la pila
	int x = p -> info; //Extraigo el valor del nodo del tope de la pila
	pila = p -> sgte; //Al puntero al inicio de la pila, le pongo el nodo que ahora est� quedando en el tope de la pila
	delete p; //Libero memoria
	return x; //Devuelvo el entero
	
}

void imprimirPila(nodo* &pila){ //Recibe como par�metro el puntero al inicio de la pila

	while(pila != NULL){ //Mientras que la pila NO est� vac�a
		
		cout << pop(pila) << ", "; //Imprime el valor extra�do con la funci�n pop
		
	}


}

//Insertar un n�mero en una posici�n espec�fica
void insertaNumero(nodo* &pila, int pos, int valor){ 
	
	nodo* pila2 = NULL; //Creo una pila auxiliar
	int x = 0;
	
	int i = 0;
	for(i; i < (pos-1); i++){ //Extraigo los valores de la pila original hasta la posici�n que deseo
		x = pop(pila);
		push(pila2, x);
	}
	
	push(pila, valor); //Meto el valor nuevo
	
	while(pila2 != NULL){ //Vac�o la pila auxiliar y vuelvo a ponerlos en la pila original
		x = pop(pila2);
		push(pila, x);
	}
	
	return;
	
}
