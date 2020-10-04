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
    do{
        imprimirEspacios(nEspacios);
        imprimirA(nChar);
        printf("\n");
        nChar++;
        nEspacios = nEspacios-2;
    } while (nChar < 5);
    imprimirEspacios(nEspacios);
    imprimirA(5);
    printf("\n");
    nEspacios=nEspacios+2;
    nChar--;
    do{
        imprimirEspacios(nEspacios);
        imprimirA(nChar);
        printf("\n");
        nChar--;
        nEspacios=nEspacios+2;
    } while (nChar > 0);
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de 'A' equivalente a ese valor
    n=>cantidad de A
    int n = llega como parametro;
*/
void imprimirA(int n)
{
    if (n>0)
    {
        do{
            printf("%c ",65);
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
    printf("\nEste programa imprime un tri%cngulo equil%ctero hecho a partir",160,160);
    printf("\ndel car%ccter 'A'\n",160);
    // se llama la función imprimirPantalla
    imprimirPantalla(1,39);
    return 0;
}