#include <stdio.h>

int suma(int numero1, int numero2);

int main()
{
    printf("%d\n", suma(1,3));
    return 0;
}


int suma(int numero1, int numero2){
    int suma = numero1 + numero2;
    return suma;
}