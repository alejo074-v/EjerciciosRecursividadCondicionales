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
/*(5-).Hacer un programa de computador, de tal manera que presente 
todas las tablas de multiplicar del 1 al 10*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirTablasMultiplicar(int ini,int fin);
/*
    Esta funcion imprime las tablas de multiplicar desde ini hasta fin
    donde ini es el rango inicial y fin es el rango final
*/
void imprimirTablasMultiplicar(int ini,int fin)
{
    printf("\r\tTablas de Multiplicar\n");
    for (int i = ini; i <= fin; i++)
    {
        printf("\n\n\tTabla del #%i\n",i);
        for (int j = 1; j <= fin; j++)
        {
            printf("\n%i X %i = %i",i,j,(i*j));
        }
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime las tablas de multiplicar de 1 a 10\n");
    // se llama la función imprimirTablasMultiplicar
    imprimirTablasMultiplicar(1,10);
    return 0;
}