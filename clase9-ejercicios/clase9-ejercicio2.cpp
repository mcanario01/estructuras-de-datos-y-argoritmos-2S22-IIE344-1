#include <stdio.h>

struct Punto{
    float x;
    float y;
    //ejemplo constructores
    Punto(){x = 0; y = 0;};
    Punto(int a){x = a; y = a;};
    Punto(int a, int b){x = a; y = b;};
};

struct Vector : Punto {
    int z;
    Vector(int a, int b) : Punto(a,b){}
};

//lista enlazada
/*
struct nodo{
    int dato;
    struct nodo * s;
};
*/

/*
Punto operator +(Punto p1, Punto p2);
*/
int main(){
    Punto punto(15, 20);
    printf("Punto: %f, %f\n", punto.x, punto.y);

    return 0;
}

/*
Punto operator +(Punto p1, Punto p2){

}
*/