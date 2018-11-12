#include <iostream>

//Cola, primero que entra es el primero que sale

struct nodo{
	
	int info;
	nodo* sgte;
};

void encolar(nodo* &frente, nodo* &fin, int valor);
int desencolar(nodo* &frente, nodo* &fin);

int main(int argc, char** argv) {
	
	
	
	return 0;
}

void encolar(nodo* &frente, nodo* &fin, int x){
	
	nodo* p = new nodo(); //Pido un lugar en la memoria
	p -> info = x; //Le asigno el valor x que mand� el usuario
	p -> sgte = NULL; //al ser el �ltimo de la cola, apunta a NULL
	
	if(frente == NULL){ //Si el frente es NULL, es decir, no hay elementos...
		
		frente = p; //El puntero a la primera posici�n va a ser la que creamos reci�n;
		
	} else { //En el caso de que no sea el primer elemento..
		
		fin -> sgte = p; //en el ultimo nodo, se actualiza el puntero al nodo reci�n creado
		
	}
	
	fin = p; //Se actualiza el puntero al �ltimo nodo
	return;
	
}

int desencolar(nodo* &frente, nodo* &fin){
	
	int x; //donde guardamos el valor que sacamos
	nodo* p = frente; //en el puntero p, ponemos el puntero al primer nodo de la cola
	x = p -> info; //A x le damos el valor que contiene el nodo
	frente = p -> sgte; //Actualizamos el puntero del primer elemento, al elemento siguiente
	
	if(frente == NULL){ //Si ya llegamos al �ltimo elemento..
		fin = NULL; //Que el puntero al �ltimo elemento tambi�n sea NULL
	}
	
	delete p; //Borramos el nodo al que le sacamos el valor
	return x; //Retornamos x.
	
}

