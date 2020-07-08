typedef struct elemento{ //nodo
	char dato;
	struct elemento *next;
}elemento;

typedef struct pila{
	struct elemento *frente;
	int tamano;
}pila;

int crear(struct pila *);
int push(struct pila *, struct elemento);
int pop(struct pila *, struct elemento *);
int vacia(struct pila);