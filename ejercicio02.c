////////////////////////////////////////////////////////////////////
/***+**********************************************************+***/
/***+                     /////////////                        +***/
/***+                 /////////////////////                    +***/
/***+             ////////////////////////////                 +***/
/***+          ////////               //////////               +***/
/***+        ///////                    ////////               +***/
/***+       //////                                             +***/
/***+      //////     Alejandro Vergara Álavrez                +***/
/***+      //////            26-09-2020                        +***/
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
int sumarFibonacci(int n1,int n2,int fin);
/*
    Esta función calcula y imprime  la suma de los numeros de la serie
    Fibonacci de 0 a 100, recibe cuatro parametros que son: n1=>primer 
    digito, n2=>segundo digito, fin=>valor limite
    int n1 = 0;
    int n2 = 1;
    int fin = 100;
    fibonacci(0,1)-> imprime 1 2 3 5 8 13 21 34 55 89, retorna 232
*/
int sumarFibonacci(int n1,int n2,int fin)
{
    if(n1 + n2 <= fin)
    {
        printf("%i ",(n1 + n2));
        return (n1+n2) + sumarFibonacci(n2,n1+n2,fin);      
    }
    else
    {
        return 1;
    }  
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.");
    printf("\nLos n%cmeros a sumar son:\n",163);
    // se asigna a resultado el valor que retorna la funcion sumarFibonacci(int n1,int n2,int fin)
    int resultado = sumarFibonacci(0,1,100);
    // se imprime el resultado de la sumatoria de los elementos de fibonacci
    printf(" y su suma es: %i",resultado);
    return 0;
}