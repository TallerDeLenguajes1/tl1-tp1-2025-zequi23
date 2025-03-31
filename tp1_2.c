#include <stdio.h>

int cuadrado(int x);
void cuadradoV(int x);
void var(int x);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){


    int x, y;


    printf("Ingrese dos números:\n");
    scanf("%d %d", &x, &y);

    printf("\nValores iniciales: x = %d, y = %d\n", x, y);

    int cuad = cuadrado(x);
    printf("Cuadrado de variable x: %d\n", cuad);

    cuadradoV(y);

    orden(&x, &y);
    printf("Valores ordenados: x (menor) = %d, y (mayor) = %d\n", x, y);

    Invertir(&x, &y);
    printf("Valores invertidos: x = %d, y = %d\n", x, y);

   

 
    
    return 0;
}

int cuadrado(int x){

    return(x*x);
}

void cuadradoV(int x){
    
   int y = x*x;
    printf("el cuadrado de %d es %d\n", x, y);

}

void var(int x){
    printf("Direccion de memoria de la variable: %d\n", &x);
}

void Invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
