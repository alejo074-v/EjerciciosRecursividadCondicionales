////////////////////////////////////////////////////////////////////
/***+**********************************************************+***/
/***+                     /////////////                        +***/
/***+                 /////////////////////                    +***/
/***+             ////////////////////////////                 +***/
/***+          ////////               //////////               +***/
/***+        ///////                    ////////               +***/
/***+       //////                                             +***/
/***+      //////     Alejandro Vergara Álavrez                +***/
/***+      //////            02-10-2020                        +***/
/***+      //////    IS284_Programacion_Ii_Gr._4               +***/
/***+      ////// Universidad_Tecnologica_de_Pereira           +***/
/***+      //////                                              +***/
/***+       ///////                    ///////                 +***/
/***+        ////////                ///////                   +***/
/***+          //////////////////////////                      +***/
/***+              /////////////////                           +***/
/***+                                                          +***/
/***+**********************************************************+***/
////////////////////////////////////////////////////////////////////
/*(2-).hacer un programa de computador, de tal manera que presente el
valor de la suma de los numeros de la serie de Fibonacci entre 0 y 100*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
int sumarFibonacci();
/*
    Esta función imprime laserie de fibonacci de 0 hasta llegar sin sobrepasar
    el numero 100 y retorna el resultado de sumar cada digito de la serie 
    hasta llegar a el ultimo digito impreso, tienen 4 variables 
    que corresponden a los dos digitos con los que inicia la serie,
    la suma de los digitos de la serie y un aux i=n1+n2
    fibonacci()-> imprime 1 2 3 5 8 13 21 34 55 89, retorna 232
*/
int sumarFibonacci()
{
    int n1 = 0, n2 = 1;
    int suma = n1+n2;
    printf("%i %i ",n1,n2);
    int i = n1+n2;
    while (i < 100)
    {
        printf("%i ",i);
        suma = suma + i;
        n1 = n2;
        n2 = i;
        i = n1+n2;
    }
    return suma;
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.");
    printf("\nLos números a sumar son:\n");
    // se asigna a resultado el valor que retorna la funcion sumarFibonacci(int n1,int n2,int fin)
    int resultado = sumarFibonacci();
    // se imprime el resultado de la sumatoria de los elementos de fibonacci
    printf(" y su suma es: %i",resultado);
    return 0;
}