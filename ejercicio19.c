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
/*(19-).Esta función imprime por pantalla un triangulo equilatero
hecho de 'A'.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios);
void imprimirA(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime por pantalla un triangulo equilatero hecho de 'A',
    tiene dos parametros, nChar=>cantidad de letras a imprimir,
    nEspacios=>cantidad de espacios
    int nChar = 1;
    int nEspacios = 39;
*/
void imprimirPantalla(int nChar,int nEspacios)
{
    for (int i = nChar; i < 5; i++)
    {
        imprimirEspacios(nEspacios);
        imprimirA(i);
        printf("\n");
        nEspacios=nEspacios-2;
    }
    imprimirEspacios(nEspacios);
    imprimirA(5);
    printf("\n");
    nEspacios=nEspacios+2;
    for (int i = 4; i > 0; i--)
    {
        imprimirEspacios(nEspacios);
        imprimirA(i);
        printf("\n");
        nEspacios=nEspacios+2;
    }
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de 'A' equivalente a ese valor
    n=>cantidad de A
    int n = llega como parametro;
*/
void imprimirA(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ",65);
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
    printf("\nEste programa imprime un tri%cngulo equil%ctero hecho a partir",160,160);
    printf("\ndel car%ccter 'A'\n",160);
    // se llama la función imprimirPantalla
    imprimirPantalla(1,39);
    return 0;
}