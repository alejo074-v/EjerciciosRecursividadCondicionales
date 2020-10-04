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
/*(14-).Este programa imprime un triangulo rectangulo a base de la 
letra 'P' con un angulo  hacia abajo.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios);
void imprimirP(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime un triangulo rectangulo a base de la letra 'P'
    con un angulo  hacia abajo, tiene dos parametros
    nChar=>cantidad de letras a imprimir,nEspacios=>cantidad de espacios
    int nChar = 13;
    int nEspacios = 0;
*/
void imprimirPantalla(int nChar,int nEspacios)
{
    while (nChar > 0)
    {
        imprimirEspacios(nEspacios);
        imprimirP(nChar);
        printf("\n");
        nChar = nChar-2;
        nEspacios++;
    }
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de 'P' equivalente a ese valor
    n=>cantidad de P
    int n = llega como parametro;
*/
void imprimirP(int n)
{
    while (n > 0)
    {
        printf("%c",80);
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
    printf("\nEste programa imprime un tri%cngulo hacia abajo hecho a partir ",160);
    printf("\ndel car%ccter 'P' .\n\r");
    // se llama la función imprimirPantalla
    imprimirPantalla(13,0);
    return 0;
}