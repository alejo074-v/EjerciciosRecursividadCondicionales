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
/*(16-).Este programa imprime un rombo hecho a base de 'Z'.
*/
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
    for (int i = nChar; i < 6; i=i+2)
    {
        imprimirEspacios(nEspacios);
        imprimirZ(i);
        printf("\n");
        nEspacios=nEspacios-2;
    }
    imprimirEspacios(nEspacios);
    imprimirZ(7);
    nEspacios=nEspacios+2;
    for (int i = 5; i > 0; i=i-2)
    {
        printf("\n");
        imprimirEspacios(nEspacios);
        imprimirZ(i);
        nEspacios=nEspacios+2;
    }
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de 'Z' equivalente a ese valor
    n=>cantidad de Z
    int n = llega como parametro;
*/
void imprimirZ(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ",90);
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
    for (int i = 0; i < n; i++)
    {
        printf(" ");
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