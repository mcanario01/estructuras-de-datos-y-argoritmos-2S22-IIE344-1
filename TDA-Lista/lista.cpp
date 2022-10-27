#include "lista.h"
#include <stdio.h>

bool vacia(Lista lista)
{
    return (lista == NULL);
}

int primero(Lista lista)
{
    return 1;
}

int fin(Lista lista)
{
    if(vacia(lista))
    {
        return primero(lista);
    }
    else
    {
        return 1 + fin(lista->next);        
    }
}

int siguiente(int p, Lista lista)
{
    int aux = fin(lista);
    if(p == aux)
    {
        return fin(lista);
    }
    if(p>=primero(lista) && p < fin(lista))
    {
        return p + 1;
    }
    else
    {
        printf("Error en siguiente()");
        return 0;
    }
}

int anterior(int p, Lista lista)
{
    if(p > primero(lista) && p <= fin(lista))
    {
        return p - 1;
    }
    else
    {
        printf("Error en anterior()");
        return 0;
    }
}

void inserta(tipoDato x, int p, Lista lista)
{
    if(p < 1 || p > fin(lista)){
        printf("Error en inserta()");
        return;
    }
    Lista aux = lista;
    nodo* nuevo = new nodo;
}

tipoDato recupera(int p, Lista lista)
{
    if(p<primero(lista) || p>=fin(lista))
    {
        printf("Error en recupera()");
        return;
    }
    for (int i = primero(lista); i < p; i++)
    {
        lista = lista->next;
    }
    return lista->dato;
}

void imprimeLista(Lista lista)
{
    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista))
    {
        printf("%d", recupera(i, lista));
    }
}

int localiza(tipoDato x, Lista lista)
{
    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista))
    {
        if(x == recupera(i, lista))
        {
            return i;
        }
    }    
    return fin(lista);
}

void suprime(int p, Lista &lista)
{
    return;
}

void anula(Lista & lista)
{
    while(!vacia(lista))
    {
        suprime(primero(lista), lista);
    }
}

tipoDato datoMax(Lista lista)
{
    tipoDato datoMax;
    if (vacia(lista))
    {
        printf("La lista está vacia!");
        return NULL;
    }
    else
    {
        datoMax = lista->dato;
    }
    
    for (int i = primero(lista); i < fin(lista); i++)
    {
        if (recupera(i, lista) > datoMax)
        {
            datoMax = recupera(i, lista);
        }
    }
    return datoMax;
}