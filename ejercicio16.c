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
/*(16-).Este programa imprime un rombo hecho a base de 'Z'.

por medio de recursividad se imprime la cantidad de caracteres 'Z'
y espacios en blanco para cada renglon*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios);
void imprimirZ(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime en pantalla un rombo hecho a base de 'Z',
    tiene dos parametros, nChar=>cantidad de letras a imprimir,
    nEspacios=>cantidad de espacios
    int nChar = 1;
    int nEspacios = 9;
*/
void imprimirPantalla(int nChar,int nEspacios)
{
    imprimirEspacios(nEspacios);
    imprimirZ(nChar);
    printf("\n");
    if (nChar<4)
    {
        imprimirPantalla((nChar+2),(nEspacios-2));
    }
    else
    {
        imprimirEspacios(nEspacios-2);
        imprimirZ(nChar+2);
    }
    printf("\n");
    imprimirEspacios(nEspacios);
    imprimirZ(nChar);
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de 'Z' equivalente a ese valor
    n=>cantidad de Z
    int n = llega como parametro;
*/
void imprimirZ(int n)
{
    if (n > 0)
    {
        printf("%c ",90);
        imprimirZ(n-1);
    }
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de espacios equivalente a ese valor
    n=>cantidad de espacios
    int n = llega como parametro
*/
void imprimirEspacios(int n)
{
    if (n > 0)
    {
        printf(" ");
        imprimirEspacios(n-1);
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime un rombo hecho a base");
    printf("\nde la letra 'Z'\n");
    // se llama la función imprimirPantalla
    imprimirPantalla(1,9);
    return 0;
}