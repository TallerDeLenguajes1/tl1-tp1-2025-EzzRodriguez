#include <stdio.h>

int cuadradoDe(int numero);

void cuadradoVoidDe(int numero, int *resultado);

void desglosarVariable(int *variable);

void Invertir(int *a, int *b);

void Orden(int *a, int *b);

int main(){
    int num1, num2, resultado;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("El cuadrado de %d es: %d\n", num1, cuadradoDe(num1));

    cuadradoVoidDe(num1, &resultado);
    printf("El cuadrado de %d es: %d (usando void)\n", num1, resultado);

    int *p1 = &num1;
    int *p2 = &num2;

    desglosarVariable(p1);

    desglosarVariable(p2);

    Invertir(&num1, &num2);
    printf("Después de invertir:\n");
    printf("num1: %d, num2: %d\n", num1, num2);

    Orden(&num1, &num2);
    printf("Después de ordenar (menor a mayor):\n");
    printf("num1: %d, num2: %d\n", num1, num2);

    return 0;
}

int cuadradoDe(int numero)
{
    return numero * numero;
}

void cuadradoVoidDe(int numero, int *resultado)
{
    *resultado = numero * numero;
}

void desglosarVariable(int *variable)
{
    printf("\nDireccion de la variable = %i", variable);
    printf("\nContenido de la variable = %d\n", *variable);
}

void Invertir(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Orden(int* a, int* b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
