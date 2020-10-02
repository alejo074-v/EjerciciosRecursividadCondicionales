////////////////////////////////////////////////////////////////////
/***+**********************************************************+***/
/***+                     /////////////                        +***/
/***+                 /////////////////////                    +***/
/***+             ////////////////////////////                 +***/
/***+          ////////               //////////               +***/
/***+        ///////                    ////////               +***/
/***+       //////                                             +***/
/***+      //////     Alejandro Vergara Álavrez                +***/
/***+      //////            26-09-2020                        +***/
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

por medio de recursividad se imprime la cantidad de caracteres 'Z'
y espacios en blanco para cada renglon y se establece que para la 
ultima recursión imprime solo 'Z'*/
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
    if (nChar==0)
    {
        imprimirEspacios(nEspaciosLateral);
        imprimirZ(1);
        printf("\n");
        imprimirPantalla(1,(nEspacios+1),(nEspaciosLateral-1));
    }
    else if (nEspaciosLateral>=0)
    {
        imprimirEspacios(nEspaciosLateral);
        imprimirZ(nChar);
        imprimirEspacios(nEspacios);
        imprimirZ(nChar);
        printf("\n");
        imprimirPantalla(nChar,(nEspacios+2),(nEspaciosLateral-1));
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
    if (n > 0)
    {
        printf("%c",90);
        imprimirZ(n-1);
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
    if (n > 0)
    {
        printf(" ");
        imprimirEspacios(n-1);
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime una V invertida hecha a base");
    printf("\ndel car%ccter 'Z'\n",160);
    // se llama la función imprimirPantalla
    imprimirPantalla(0,0,9);
    return 0;
}