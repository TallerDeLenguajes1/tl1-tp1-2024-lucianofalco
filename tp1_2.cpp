//a) Haga una función que devuelva el cuadrado de un número
//b) Haga la función anterior, pero devolviendo un tipo void
//c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
//d)  Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
//e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
//f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla.
#include<stdio.h>
#include<stdlib.h>

int cuadrado(int numero); 
void leer(int a , int b);
void cuadrad(int *numero);
void invertir (int *a , int *b);
void ordenar (int*a , int*b);



int main(int argc, char const *argv[])
{
    int a , b;
    leer(a,b);
    system("cls");
    printf("\n--------------------------------------------------------------------\n");
    //cuadrad(&numero);
    invertir(&a , &a);
    ordenar(&a , &b);
    printf("\nmenor = %d , mayor = %d\n" , a , b );
    return 0;
}
int cuadrado(int numero){
    return numero*numero ;
} 
void cuadrad(int *numero){
    printf("\n El cuadrado de %d es : %d \n ", *numero , (*numero)*(*numero));
}
void invertir (int *a , int *b){
    int aux;
    aux = *a ; 
    *a = *b ;
    *b = *a ;
    *b = aux;
}
void ordenar (int*a , int*b){
    int aux;
    if (*a>= *b)
    {
        aux = *b;
        *b = *a ;
        *a = aux;
    }    
}

void leer(int a , int b){
    printf("\nIngrese el primer valor");
    scanf("%d" , &a);
    printf("\nIngrese el Segundo valor valor");
    scanf("%d" , &b);
}
