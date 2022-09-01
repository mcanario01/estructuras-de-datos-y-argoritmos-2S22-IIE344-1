#include <stdio.h>

float volumen(float r, float h, float PI);

float superficie (float r, float h, float PI);

int main() {
    const float PI = 3.14159;
    float r, h, vol, sup;
    printf("Ingrese radio y alto: \n");
    scanf("%f %f", &r, &h);
    printf("La superficie es: %.3f \n", superficie(r,h,PI));
    printf("El volumen es: %.3f \n", volumen(r,h,PI));
    return 0;
}


float superficie(float r, float h, float PI){
    return 2 * PI * r * r + 2 * PI * r * h;
}

float volumen(float r, float h, float PI){
    return PI * r * r * h;
}