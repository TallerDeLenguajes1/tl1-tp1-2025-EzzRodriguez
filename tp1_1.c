#include <stdio.h>

int main(){
    printf("HOLA MUNDO\n");

    int numero = 15;
    int *puntero = &numero;

    printf("\nPuntero: %i\nDireccion de memoria que almacena el puntero: %i\nDireccion de memoria variable: %i\nDireccion de memoria del puntero: %i\nMemoria de la variable: %i",*puntero,puntero,&numero,&puntero,sizeof(numero));
}