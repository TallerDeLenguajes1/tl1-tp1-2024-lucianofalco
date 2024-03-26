
//a) Haga una función que devuelva el cuadrado de un número
//b) Haga la función anterior, pero devolviendo un tipo void

#include<stdio.h>

int cuadrado(int numero); 
void cuadrad(int numero);

int main(int argc, char const *argv[])
{
    int numero , resultado ;
     printf("\nEscriba un numero\n");
     scanf("%d" , &numero);
     cuadrad(numero);
    return 0;
}
int cuadrado(int numero){
    return numero*numero ;
} 
void cuadrad(int numero){
    printf("\n El cuadrado de %d es : %d \n ", numero , numero*numero);
}

