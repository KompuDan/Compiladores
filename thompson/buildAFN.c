#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

typedef struct transicion
{
	char simbolo;
	struct estado *fin;
}transicion;

typedef struct estado{
	int id;
	struct transicion *salto;
}estado;

typedef struct AFN{
	estado *inicio;
	estado *fin;
}AFN; 

void initAFN(AFN *afn)
{
	afn->inicio=(estado*)malloc(sizeof(estado));
	afn->fin=(estado*)malloc(sizeof(estado));
}

int main(int argc, char const *argv[])
{
	pila p;
	crear(&p);
	AFN *afn = (AFN*)malloc(sizeof(AFN));
	initAFN(afn);

	return 0;
}