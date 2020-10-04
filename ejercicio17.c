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
/*(17-).Este programa imprime en pantalla una V hecha a base de 'Z'.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios,int nEspaciosLateral);
void imprimirZ(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime en pantalla una V hecha a base de 'Z',
    tiene tres parametros, nChar=>cantidad de letras a imprimir,
    nEspacios=>cantidad de espacios,nEspaciosLateral=>cantidad de 
    espacios laterales
    int nChar = 1;
    int nEspacios = 17;
    int nEspaciosLateral = 0;
*/
void imprimirPantalla(int nChar,int nEspacios,int nEspaciosLateral)
{
    while (nEspacios > 1)
    {
        imprimirEspacios(nEspaciosLateral);
        imprimirZ(nChar);
        imprimirEspacios(nEspacios);
        imprimirZ(nChar);
        printf("\n");
        nEspacios = nEspacios-2;
        nEspaciosLateral++;
    }
    imprimirEspacios(nEspaciosLateral+1);
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
    while (n > 0)
    {
        printf("%c",90);
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
    printf("\nEste programa imprime una V hecha a base");
    printf("\ndel car%ccter 'Z'\n",160);
    // se llama la función imprimirPantalla
    imprimirPantalla(1,17,0);
    return 0;
}