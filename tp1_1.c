#include <stdio.h>

int main(){

    printf("Hola mundo");

    int variable = 42;
    int *puntero = &variable;

    printf("Contenido del puntero (valor apuntado): %d\n", *puntero);
    printf("Direccion almacenada en el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &variable);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamano de memoria de la variable: %zu bytes\n", sizeof(variable));

    return 0;
}