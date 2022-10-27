#include <stdio.h>
#include "./TDA-Cola/cola.h"
#include "./TDA-Pila/pila.h"

//Retorna la posición de un dato en un pila.
//Si retorna un 0, el dato no existe en la pila o la pila está vacia.
int localiza(Pila &p, tipoDato x);
void suprime(int pos, Cola &c);

int main()
{
    Cola cola_ejemplo;
    ponerEnCola(12, cola_ejemplo);
    ponerEnCola(412, cola_ejemplo);
    ponerEnCola(23, cola_ejemplo);
    ponerEnCola(84, cola_ejemplo);
    ponerEnCola(7, cola_ejemplo);
    ponerEnCola(25, cola_ejemplo);
    imprimeCola(cola_ejemplo);
    suprime(4, cola_ejemplo);
    imprimeCola(cola_ejemplo);
    return 0;
}

int localiza(Pila &p, tipoDato x)
{
    if(vacia(p))
    {
        printf("Pila está vacía.\n");
        return 0;
    }

    Pila aux;
    int i = 1;
    int posicion = 0;

    while(!vacia(p))
    {
        tipoDato dato = top(p);
        if(dato == x)
        {
            posicion = i;
        }
        push(x, aux);
        pop(p);
        i++;
    }

    while(!vacia(aux))
    {
        push(top(aux), p);
        pop(aux);
    }

    return posicion;
}

void suprime(int pos, Cola &c)
{
    // Validación de cantidad de elementos
    if(vacia(c)){
        printf("La cola se encuentra vacía.\n");
        return;
    }
    
    Cola aux;
    int i = 1;

    // Recorrer la cola original
    while(!vacia(c))
    {
        // conocer el primer valor
        tipoDato x = frente(c);
        // dejar el valor en cola aux
        if(i != pos)
        {
            ponerEnCola(x, aux);
        }
        // sacar el valor de la cola original
        quitarDeCola(c);
        printf("%d\n", i);
        i++;
    }

    // Devolver los elementos a la cola original
    while(!vacia(aux))
    {
        // conocer el primer valor
        tipoDato x = frente(aux);
        // dejar el valor en cola original
        ponerEnCola(x, c);
        // sacar el valor de la cola aux
        quitarDeCola(aux); 
    }
}