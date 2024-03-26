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
int main(int argc, char const *argv[])
{
    printf("Hola mundo");
    int valor = 10;
    int *p_valor = &valor;

    printf ("\nEl valor es : %d\n" , valor);
    printf ("\nY su direccion de memoria es: %p\n" , p_valor);
    printf ("\nEl tamanio de memoria utilizado por la variable es: %d bytes\n" , sizeof(valor));
    printf ("\nEl tamanioo de memoria del puntero es: %d bytes\n" , sizeof(p_valor));
    return 0;
}
