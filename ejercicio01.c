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
/*(1-).hacer un programa de computador, de tal manera que presente 
la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.
Descripción:
Se define la serie de Fibonacci como la serie que comienza con los
dígitos 1 y 0 y va sumando progresivamente los dos últimos elementos
de la serie, así: 0 1 1 2 3 5 8 13 21 34.......*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void fibonacci(int n1,int n2);
/*
    Esta función imprime los numeros de la serie Fibonacci, recibe dos
    parametros que son los dos primeros digitos de la secuencia
    int n1 = 0;
    int n2 = 1;
    fibonacci(0,1)-> 0 1 1 2 3 5 8 13 21 34.......
*/
void fibonacci(int n1,int n2)
{
    if (n1==0)
    {
        printf("\t%i %i %i ",n1,n2,n2);
        fibonacci(n2,n2);    
    }
    else if(n1 + n2 < 10000)
    {
        printf("%i ",n1+n2);
        fibonacci(n2,n1+n2);      
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa presenta la serie de Fibonacci como la");
    printf("\nserie que comienza con los d%cgitos 1 y 0 y va sumando",161);
    printf("\nprogresivamente los dos %cltimos elementos de la serie.",163);
    printf("\nAs%c: 0 1 1 2 3 5 8 13 21 34.......",161);
    printf("\nPara este programa, se presentar%c la serie de Fibonacci",160);
    printf("\nhasta llegar sin sobrepasar el n%cmero 10,000.\n\n",163);
    // Llama la funcion fibonacci(int n1,int n2)
    fibonacci(0,1);
    return 0;
}