#include <stdio.h>

int sumarArreglo(int sumatoria[], int numero_elementos);

int main(){
    int sumatoria[4] = {1,2,3,4};
    int cantidad_elementos = sizeof(sumatoria) / 4;
    printf("%d\n", sumarArreglo(sumatoria, cantidad_elementos));
    return 0;
}

int sumarArreglo(int sumatoria[], int numero_elementos){
    int suma_total = 0;
    for(int i=0; i<numero_elementos; i++){
        suma_total += sumatoria[i];
    }
    return suma_total;
}