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
/*(18-).Esta función imprime en pantalla una V invertida hecha a base de 'Z'.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios,int nEspaciosLateral);
void imprimirZ(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime en pantalla una V invertida hecha a base de 'Z',
    tiene tres parametros, nChar=>cantidad de letras a imprimir,
    nEspacios=>cantidad de espacios,nEspaciosLateral=>cantidad de 
    espacios laterales
    int nChar = 0;
    int nEspacios = 0;
    int nEspaciosLateral = 9;
*/
void imprimirPantalla(int nChar,int nEspacios,int nEspaciosLateral)
{
    imprimirEspacios(nEspaciosLateral);
    imprimirZ(nChar);
    printf("\n");
    nEspaciosLateral--;
    for (int i = nEspaciosLateral; i >=0; i--)
    {
        imprimirEspacios(i);
        imprimirZ(nChar);
        imprimirEspacios(nEspacios);
        imprimirZ(nChar);
        printf("\n");
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
        printf("%c",90);
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
    printf("\nEste programa imprime una V invertida hecha a base");
    printf("\ndel car%ccter 'Z'\n",160);
    // se llama la función imprimirPantalla
    imprimirPantalla(1,1,9);
    return 0;
}