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
/*(9-).Hacer un programa de computador, de tal manera que, utilizando
ciclos anidados se generen las siguientes ternas de enteros: 
(con un máximo de cuatro(4) ordenes “IMPRIMIR” (printf).)
Ejemplo:
1 1 1
2 1 2
3 1 3
4 2 1
5 2 2
6 2 3
7 3 1
8 3 2
9 3 3
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void generarTernasEnteros();
/*
    Esta función imprime ternas con base de 3 secuencia 1 a 9, 1 a 5, 1 a 3
    la primera incrementa en 1 progresivamente, la segunda aumenta cada dos iteraciones
    y la tercera incrementa en 1 progresivamente su valor y cuando llega a 3 vuelve a 1
    Ejemplo:
    1 1 1
    2 1 2
    3 1 3
    4 2 1
    5 2 2
    6 2 3
    7 3 1
    8 3 2
    9 3 3
*/
void generarTernasEnteros()
{
    for (int i = 1, j = 1, l = 1; i < 10; i++,l++)
    {
        printf("%i ",i);
        printf("%i ",j);
        printf("%i\n",l);
        if (l==3)
        {
            j++;
            l=0;
        }
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime ternas de n%cmeros del 1 al 9 ",163);
    printf("con n%cmeros del 1 al 5 con n%cmeros del 1 al 3\n",163,163);
    printf("La primera columna incrementa con cada iteraci%cn\n",162);
    printf("La segunda columna incrementa cada 3 iteraciones\n");
    printf("la tercera columna incrementa con cada iteraci%cn y \n",162);
    printf("cuando llega a el n%cmero 3 vuelve al n%cmero uno para ",163,163);
    printf("volver a incrementar\n");
    // se llama la función generarTernasEnteros
    generarTernasEnteros();
    return 0;
}