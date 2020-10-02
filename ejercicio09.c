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

por medio de recursividad se imprime el numero de la primera secuencia,
luego en otra condicion se imprime el primer numero de la segunda serie
y de ahí el de la tercera serie*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void generarTernasEnteros(int n1,int n2,int n3);
/*
    Esta función imprime ternas con base de 3 secuencia 1 a 9, 1 a 5, 1 a 3
    n1=>valor con el que inicia la primera secuencia,n2=>valor con el que inicia
    la segunda secuencia,n3=>valor con el que inicia
    la tercera secuencia
    int n1 = 1;
    int n2 = 1;
    int n3 = 1;
*/
void generarTernasEnteros(int n1,int n2,int n3)
{
    if (n1 < 10)
    {
        printf("%i ",n1);
        if (n3>=1 && n3<=2)
        {
            printf("%i %i\n",n2,n3);
            generarTernasEnteros((n1+1),n2,(n3+1));
        }
        else
        {
            printf("%i %i\n",n2,n3);
            generarTernasEnteros((n1+1),(n2+1),1);
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
    generarTernasEnteros(1,1,1);
    return 0;
}