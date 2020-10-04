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
    do{
        imprimirEspacios(nEspacios);
        imprimirZ(nChar);
        printf("\n");
        nChar = nChar+2;
        nEspacios=nEspacios-2;
    } while (nChar < 6);
    imprimirEspacios(nEspacios);
    imprimirZ(7);
    nEspacios=nEspacios+2;
    nChar = nChar-2;
    do{
        printf("\n");
        imprimirEspacios(nEspacios);
        imprimirZ(nChar);
        nChar = nChar-2;
        nEspacios=nEspacios+2;
    } while (nChar > 0);
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de 'Z' equivalente a ese valor
    n=>cantidad de Z
    int n = llega como parametro;
*/
void imprimirZ(int n)
{
    if (n>0)
    {
        do{
            printf("%c ",90);
            n--;
        } while (n > 0);
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
    if (n>0)
    {
        do{
            printf(" ");
            n--;
        } while (n > 0);
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