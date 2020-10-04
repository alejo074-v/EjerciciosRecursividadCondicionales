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
/*(1-).hacer un programa de computador, de tal manera que presente 
la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.
Descripción:
Se define la serie de Fibonacci como la serie que comienza con los
dígitos 1 y 0 y va sumando progresivamente los dos últimos elementos
de la serie, así: 0 1 1 2 3 5 8 13 21 34.......*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void fibonacci();
/*
    Esta función imprime los numeros de la serie Fibonacci
    contiene tres variables que son un aux i=n1+n2 y los dos 
    primeros digitos de la secuencia y a partir de ellos en una
    estructura for va generando el siguiente, sumando los dos 
    ultimos digitos para generar el siguiente.
    fibonacci()-> 0 1 1 2 3 5 8 13 21 34.......
*/
void fibonacci()
{
    int n1 = 0, n2 = 1;
    printf("%i %i ",n1,n2);
    int i =n1+n2;
    do{
        printf("%i ",i);
        n1 = n2;
        n2 = i;
        i = n1+n2;
    } while (i < 10000);
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa presenta la serie de Fibonacci como la");
    printf("\nserie que comienza con los dígitos 1 y 0 y va sumando");
    printf("\nprogresivamente los dos últimos elementos de la serie.");
    printf("\nAsí: 0 1 1 2 3 5 8 13 21 34.......");
    printf("\nPara este programa, se presentará la serie de Fibonacci");
    printf("\nhasta llegar sin sobrepasar el número 10,000.\n\n");
    // Llama la funcion fibonacci(int n1,int n2)
    fibonacci();
    return 0;
}