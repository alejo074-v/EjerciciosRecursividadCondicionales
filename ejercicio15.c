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
/*(15-).Esta función imprime en pantalla dos triangulos que se 
reflejan uno al otro.

por medio de recursividad se imprime la cantidad de caracteres 'A'
y espacios en blanco para cada renglon*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios);
void imprimirA(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime en pantalla dos triangulos que se reflejan uno al
    otro, tiene dos parametros, nChar=>cantidad de letras a imprimir,
    nEspacios=>cantidad de espacios
    int nChar = 1;
    int nEspacios = 59;
*/
void imprimirPantalla(int nChar,int nEspacios)
{
    while (nChar < 30)
    {
        imprimirA(nChar);
        imprimirEspacios(nEspacios);
        imprimirA(nChar);
        printf("\n");
        nChar++;
        nEspacios=nEspacios-2;
    }
    imprimirA(60);
    nEspacios=nEspacios+2;
    nChar--;
    while (nChar > 0)
    {
        printf("\n");
        imprimirA(nChar);
        imprimirEspacios(nEspacios);
        imprimirA(nChar);
        nChar--;
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
    while (n > 0)
    {
        printf("%c",65);
        n--;
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
    while (n > 0)
    {
        printf(" ");
        n--;
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime dos tri%cngulos que se reflejan a partir",160);
    printf("\ndel car%ccter 'A'\n",160);
    // se llama la función imprimirPantalla
    imprimirPantalla(1,58);
    return 0;
}