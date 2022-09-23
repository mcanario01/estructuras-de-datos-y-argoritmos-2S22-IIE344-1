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