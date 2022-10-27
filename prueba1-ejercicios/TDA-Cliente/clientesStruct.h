#ifndef CLIENTES_STRUCT_H
#define CLIENTES_STRUCT_H

#define tipoDato datosCliente
/* Estructuras*/
struct datosCliente
{
	char nombre[50];
	int edad;
	char cuidad[30];
};

struct nodo{
	tipoDato dato;
	struct nodo* next;
	nodo(){
		next=NULL;
	}
	nodo(tipoDato x)
	{
		nodo();
		dato = x;
	}
};

struct Cliente{
	struct nodo* primero;
	Cliente(){
		primero=NULL;
	}
};

#endif

