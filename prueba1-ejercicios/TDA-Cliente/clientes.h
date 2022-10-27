#include <stdio.h>
#include "clientesStruct.h"

/* Prototipos */
// Viernes 10/06
bool vacia(Cliente lista);
int primero(Cliente lista);
int anterior(int p, Cliente lista);
int siguiente(int p, Cliente lista);

// Martes 14/06
int fin(Cliente lista);
void inserta(tipoDato x, int p, Cliente &lista);
tipoDato recupera(int p, Cliente lista);
int localiza(tipoDato x, Cliente lista);

// Viernes 17/06
//void imprime(Cliente lista);
void suprime(int p, Cliente &lista);
void anula(Cliente &lista);