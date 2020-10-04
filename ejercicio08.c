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
/*(8-).Hacer un programa de computador, de tal manera que, utilizando
ciclos anidados se generen las siguientes parejas de enteros: 
(con un máximo de cuatro(4) ordenes “IMPRIMIR” (printf).)
Ejemplo:
0 1
1 1
2 2
3 2
4 3
5 3
6 4
7 4
8 5
9 5
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void generarParejasEnteros();
/*
    Esta función imprime una secuencia de números del 0 al 10 y la empareja con 
    otra secuencia que va desde 1 a 5 repitiendos dos veces el número de la 
    segunda secuencia así:
    Ejemplo:
    0 1
    1 1
    2 2
    3 2
    4 3
    5 3
    6 4
    7 4
    8 5
    9 5
*/
void generarParejasEnteros()
{
    int i = 0, j = 1;
    while (i < 10)
    {
        printf("%i ",i);
        printf("%i\n",j);
        if (((i+1)%2)==0)
        {
            j++;
        }
        i++;
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime parejas de n%cmeros del 0 al 9 con n%cmeros del 1 al 5",163,163);
    printf("\nla primera columna incrementa el valor consecutivamente mientras que el \n");
    printf("segundo lo hace cada 2 iteraciones, así.\n");
    // se llama la función generarParejasEnteros
    generarParejasEnteros();
    return 0;
}