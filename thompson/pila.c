#include <stddef.h>
#include <stdlib.h>
#include "pila.h"

int crear(struct pila *p){
	p -> frente = NULL;
	p -> tamano = 0;
	return 1;
}

int push(struct pila *p, struct elemento elemento){
	struct elemento *nuevo = (struct elemento *) malloc(sizeof(struct elemento));
	if(nuevo == NULL) { return -1; }
	nuevo -> dato = elemento.dato;
	nuevo -> next = NULL;

	nuevo -> next = p -> frente;
	p -> frente = nuevo;
	p -> tamano ++;
	return 1;
}


int pop(struct pila *p, struct elemento *elemento){
	if(vacia(*p)) {return -1;}
	elemento -> dato = p -> frente -> dato;
	p -> frente = p -> frente -> next;
	p -> tamano --;
}

int vacia(struct pila p){
	if(p.tamano == 0) {return 1;}
	return 0;
}

int tamano(struct pila p){
	return p.tamano;
}

elemento top(struct pila p){
	return *(p.frente);
}