#include <stdio.h>

struct Cliente{
    char nombre[26];
    char apellido[26];
    unsigned long rut;
    char clave[26];
    char correo[26];
    char direccion[26];
    unsigned long telefono;
};

void registroCliente (Cliente cliente);

int main(){
    Cliente cliente;
    registroCliente(cliente);
    

    return 0;
}

void registroCliente (Cliente& cliente){
    printf("\nIngrese su nombre: ");
    scanf("&s",cliente.nombre);
    printf("\nIngrese su apellido: ");
    scanf("&s",cliente.apellido);
    printf("\nIngrese su rut: ");
    scanf("&lu",&cliente.rut);
    printf("\nIngrese su clave: ");
    scanf("&s",cliente.clave);
    printf("\nIngrese su correo: ");
    scanf("&s",cliente.correo);
    printf("\nIngrese su direccion: ");
    scanf("&s",cliente.direccion);
    printf("\nIngrese su telefono: ");
    scanf("&l",&cliente.telefono);
}

Cliente ingresaCliente (){
    Cliente cliente;
    printf("\nIngrese su nombre: ");
    scanf("&s",cliente.nombre);
    printf("\nIngrese su apellido: ");
    scanf("&s",cliente.apellido);
    printf("\nIngrese su rut: ");
    scanf("&lu",&cliente.rut);
    printf("\nIngrese su clave: ");
    scanf("&s",cliente.clave);
    printf("\nIngrese su correo: ");
    scanf("&s",cliente.correo);
    printf("\nIngrese su direccion: ");
    scanf("&s",cliente.direccion);
    printf("\nIngrese su telefono: ");
    scanf("&l",&cliente.telefono);
    return cliente;
}
