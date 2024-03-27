#include<stdio.h>
/*e) Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
1) El contenido del puntero
2) La dirección de memoria almacenada por el puntero.
3) la dirección de memoria de la variable.
4) la dirección de memoria del puntero.
5) el tamaño de memoria utilizado por esa variable usando la
función sizeof()
*/

int cuadrado(int numero); 
void cuadrad(int numero);
void MostrarDireccion(int *numero);
void tamanio(int *numero);

int main(int argc, char const *argv[])
{
    int numero , resultado, *p_num ;
     printf("\nEscriba un numero\n");
     scanf("%d" , &numero);
     //cuadrad(numero);
    MostrarDireccion(&numero);

    return 0;
}
int cuadrado(int numero){
    return numero*numero ;
} 
void cuadrad(int numero){
    printf("\n El cuadrado de %d es : %d \n ", numero , numero*numero);
}
void MostrarDireccion(int *numero){
     printf("La direccion de memoria de la variable %d es %p\n" , *numero , numero);
     printf("La direccion de memoria del  puntero de la variable %d es %p\n" , *numero , &numero);

}
void tamanio(int *numero){
    printf("\nEl tamaño de la variable %d es: %d\n" , *numero , sizeof(*numero));
}