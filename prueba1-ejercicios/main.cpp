#include <stdio.h>
#include "./TDA-Lista-v2/lista.h"

//Prototipos.

//Copia la lista 1 a la lista 2.
void copiarLista(Lista lista1, Lista &lista2);
//Encuentra el menor dato en lista.
tipoDato datoMinimo(Lista lista);
//Elimina los datos repetidos de lista.
void eliminarRepetidos(Lista &lista);

int main()
{
    printf("Clase de ejercicios.\n");
    Lista lista;
    Lista lista_copia;
    inserta(10, 1, lista);
    inserta(20, 2, lista);
    inserta(20, 3, lista);
    inserta(20, 4, lista);
    inserta(20, 5, lista);
    inserta(30, 6, lista);
    inserta(30, 7, lista);
    inserta(30, 8, lista);
    inserta(30, 9, lista);
    inserta(30, 10, lista);
    inserta(30, 11, lista);
    inserta(40, 12, lista);
    inserta(30, 13, lista);
    inserta(40, 14, lista);
    inserta(20, 15, lista);
    copiarLista(lista, lista_copia);
    imprime(lista);
    imprime(lista_copia);
    printf("%d\n", datoMinimo(lista));
    eliminarRepetidos(lista_copia);
    imprime(lista_copia);
    return 0;
}

//Implementaciones.
void copiarLista(Lista lista1, Lista &lista2)
{
    for (int i = primero(lista1); i < fin(lista1); i = siguiente(i, lista1))
    {
        inserta(recupera(i, lista1), i, lista2);
    }
}

tipoDato datoMinimo(Lista lista)
{
    tipoDato datoMin;
    if (vacia(lista))
    {
        printf("La lista está vacia!");
        return NULL;
    }
    else
    {
        datoMin = lista.primero->dato;
    }
    
    for (int i = primero(lista); i < fin(lista); i++)
    {
        if (recupera(i, lista) < datoMin)
        {
            datoMin = recupera(i, lista);
        }
    }
    return datoMin;
}

void eliminarRepetidos(Lista &lista)
{
    for (int i = primero(lista); i < fin(lista); i++)
    {
        for (int j = i + 1; j < fin(lista); j++)
        {
            if (recupera(i, lista) == recupera(j, lista))
            { 
                suprime(j, lista);
                j--;
            }
        }
    } 
}