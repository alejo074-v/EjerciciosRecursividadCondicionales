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

por medio de recursividad se imprime el numero de la primera secuencia,
luego en otra condicion se imprime el primer numero de la segunda serie*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void generarParejasEnteros(int n1,int n2,int cont);
/*
    Esta función imprime una secuencia de numero del 0 al 10 y la empareja con 
    otra secuencia que va desde 1 a 5 repitiendos dos veces de seguida
    n1=>valor con el que inicia la primera secuencia,n2=>valor con el que inicia
    la seguinda secuencia,cont=> contador que permite repetir dos veces un valor
    de la segunda secuencia
    int n1 = 0;
    int n2 = 1;
    int cont = 0;
*/
void generarParejasEnteros(int n1,int n2,int cont)
{
    if (n1 < 10)
    {
        printf("%i ",n1);
        if (n2 < 6 && cont==0)
        {
            printf("%i\n",n2);
            generarParejasEnteros((n1+1),n2,1);
        }
        else
        {
            printf("%i\n",n2);
            generarParejasEnteros((n1+1),(n2+1),0);
        }
    }
    
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime parejas de n%cmeros del 0 al 9 con n%cmeros del 1 al 5",163,163);
    printf("\nla primera columna incrementa el valor consecutivamente mientras que el \n");
    printf("segundo lo hace cada 2 iteraciones.\n");
    // se llama la función generarParejasEnteros
    generarParejasEnteros(0,1,0);
    return 0;
}