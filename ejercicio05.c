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
/*(5-).Hacer un programa de computador, de tal manera que presente 
todas las tablas de multiplicar del 1 al 10*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirTablasMultiplicar(int ini,int fin,int i);
/*
    Esta funcion imprime las tablas de multiplicar desde ini hasta fin
    ini=>numero donde comienza la tabla,fin=>numero ultima tabla a imprimir
    i=>indice que va de 0 a 10
    int ini = 1
    int fin = 10
    int i = 1
*/
void imprimirTablasMultiplicar(int ini,int fin,int i)
{
    if (ini <= fin)
    {
        if (i <= fin)
        {
            printf("\n%i X %i = %i",ini,i,(ini*i));
            imprimirTablasMultiplicar(ini,fin,(i+1));
        }
        else
        {
            printf("\n");
            imprimirTablasMultiplicar((ini+1),fin,1);
        }
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime las tablas de multiplicar de 1 a 10\n");
    // se llama la función imprimirTablasMultiplicar
    imprimirTablasMultiplicar(1,10,1);
    return 0;
}