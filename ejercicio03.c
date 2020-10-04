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
/*(3-).hacer un programa de computador, de tal manera que lea desde 
el teclado un numero entero y lo imprima al revés.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
int invertirNumero(int num);
/*
    Esta función recibe un numero como parametro y retorna el mismo
    numero con los digitos invertidos, recibe el numero que se desea
    invertir, contiene dos variables locales a la función en la que retorna
    el numero con los digitos ya invertidos y un aux i=n1+n2
    invertirNumero(45)-> 54
*/
int invertirNumero(int num)
{
    int inv = 0;
    int i = num;
    while (i > 0)
    {
        inv = inv*10+(i%10);
        i = i /10;
    }
    return inv;
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa lee desde el teclado un número");
    printf("\nentero y lo imprime al revús.");
    printf("\nEjemplo.");
    printf("\nEntre el número: 975");
    printf("\n579");
    printf("\n\tEntre el número: ");
    // declara e inicializa la variable num en 0
    int num = 0;
    // se asigna a num un valor ingresado por el usuario
    scanf("%i",&num);
    // se llama la funcion invertirNumero(int num, int inv)
    printf("\n\t%i",invertirNumero(num));
    return 0;
}