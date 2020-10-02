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
/*(13-).Este programa imprime un triangulo rectangulo a base de la 
letra 'P'con el angulo recto hacia abajo y una base de 33 caracteres 'P'.

por medio de recursividad se imprime la cantidad de caracteres 'P'
y espacios en blanco para cada renglon*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPantalla(int nChar,int nEspacios);
void imprimirP(int n);
void imprimirEspacios(int n);
/*
    Esta función imprime un triangulo a base de la letra 'P'
    con el angulo recto hacia abajo y una base de 79 caracteres 'P' 
    tiene 2 parametros nChar=>cantidad de letras a imprimir,
    nEspacios=>cantidad de espacios
    int nChar = 13;
    int nEspacios = 34;
*/
void imprimirPantalla(int nChar,int nEspacios)
{
    imprimirEspacios(nEspacios);
    imprimirP(nChar);
    printf("\n");
    if (nChar>0)
    {
        imprimirPantalla((nChar-2),(nEspacios+1));
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
    if (n > 0)
    {
        printf("%c",80);
        imprimirP(n-1);
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
    printf("\nEste programa imprime un tri%cngulo hacia abajo hecho a partir ",160);
    printf("\ndel car%ccter 'P' y una l%cnea base de 33 caracteres 'P'.\n",160,161);
    // se llama la función imprimirP
    imprimirP(79);
    printf("\n");
    // se llama la función imprimirPantalla
    imprimirPantalla(13,34);
    return 0;
}