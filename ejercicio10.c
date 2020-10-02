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
/*(10-).Este programa imprime dos letras A con un espacio intermedio
y va imprimiendo estas mismas más juntas para crear el efecto
de que se acercan

por medio de recursividad se imprime la cantidad de caracteres 'A'
y espacios en blanco determinados para cada renglon*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirAA(int numEspacios,int numEspaciosLateral);
void imprimirEspacios(int n);
/*
    Esta función imprime dos letras A con un espacio intermedio
    y va imprimiendo estas mismas más juntas para crear el efecto
    de que se acercan, recibe dos parametros, numEspacios=>cantidad
    de espacios intermedios,numEspaciosLateral=>cantidad de espacios
    laterales
    int numEspacios = llega como parametro;
    int numEspaciosLateral = llega como parametro;
*/
void imprimirAA(int numEspacios,int numEspaciosLateral)
{
    imprimirEspacios(numEspaciosLateral);
    printf("A");
    imprimirEspacios(numEspacios);
    printf("A\n");
    if (numEspacios > 0)
    {
        imprimirAA(numEspacios - 2,numEspaciosLateral+1);
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
    printf("\nEste programa imprime 2 caracteres 'A' con un espacio de por medio\n");
    printf("En cada recursi%cn las imprime m%cs cerca para dar el efecto que se acercan\n",162,160);
    // se llama la función imprimirAA
    imprimirAA(20,0);
    return 0;
}