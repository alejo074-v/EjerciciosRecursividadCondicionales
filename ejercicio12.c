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
/*(12-).Este programa imprime un triangulo a base de las 
letras {P,N,l,J,H,F,D} con la punta hacia abajo.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios,int nCaracter);
void imprimirChar(int n,int nChar);
void imprimirEspacios(int n);
/*
    Esta función imprime un triangulo {P,N,l,J,H,F,D} con la punta
    hacia abajo, tiene tres parametros nChar=>cantidad de letras a imprimir
    ,nEspacios=>cantidad de espacios nCaracter=> numero que equivale a un
    caracter en la tabla ascci
    int nChar = 13;
    int nEspacios = 0;
    int nCaracter = 80;
*/
void imprimirPantalla(int nChar,int nEspacios,int nCaracter)
{
    for (int i = nChar; i > 0; i=i-2)
    {
        imprimirEspacios(nEspacios);
        imprimirChar(i,nCaracter);
        printf("\n");
        nEspacios=nEspacios+1;
        nCaracter=nCaracter-2;
    }    
}
/*
    Esta función recibe un numero entero de parametro y imprime
    la cantidad de letras equivalente a ese valor,
    n=>cantidad de letras,nChar=> numero de caracter
    int n = llega como parametro;
    int nChar = #char;
*/
void imprimirChar(int n,int nChar)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",nChar);
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
    printf("\nEste programa imprime un tri%cngulo hacia abajo hecho a base ",160);
    printf("\nde los caracteres {P,N,l,J,H,F,D}.\n\r");
    // se llama la función imprimirPantalla
    imprimirPantalla(13,0,80);
    return 0;
}