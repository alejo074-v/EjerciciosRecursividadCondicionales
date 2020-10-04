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
/*(11-).Este programa imprime un triangulo rectangulo a base de el
carácter 'A'
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios);
void imprimirA(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime un triangulorectangulo a base de el caracter 'A'
    nChar=>cantidad de 'A' a imprimir,nEspacios=>cantidad de espacios a imprimir
    int nChar = 1;
    int nEspacios = 79;
*/
void imprimirPantalla(int nChar,int nEspacios)
{
    while (nChar < 25)
    {
        imprimirEspacios(nEspacios);
        imprimirA(nChar);
        printf("\n");
        nChar++;
        nEspacios=nEspacios-2;
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
        printf("%c ",65);
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
    printf("\nEste programa imprime un tri%cngulo rect%cngulo\n",160,160);
    printf("hecho a partir de espacios y el car%ccter 'A'\n\r",160);
    // se llama la función imprimirPantalla
    imprimirPantalla(1,79);
    return 0;
}