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
/*(3-).hacer un programa de computador, de tal manera que lea desde 
el teclado un numero entero y lo imprima al revés.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
int invertirNumero(int num, int inv);
/*
    Esta función recibe un numero como parametro e imprime el mismo
    numero con los digitos invertidos, recibe cuatro parametros que
    son: num=>numero a invertir, inv=>el numero invertido
    int num = ingresado por el usuario;
    int inv = 0;
    invertirNumero(45,0)-> 54
*/
int invertirNumero(int num, int inv)
{
    if (num > 0)
    {
        invertirNumero((num / 10),(inv * 10 + (num % 10)));
    }
    else
    {
        printf("\t%i",inv);
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa lee desde el teclado un n%cmero",163);
    printf("\nentero y lo imprime al rev%cs.",130);
    printf("\nEjemplo.");
    printf("\nEntre el n%cmero: 975",163);
    printf("\n579");
    printf("\n\tEntre el n%cmero: ",163);
    // declara e inicializa la variable num en 0
    int num = 0;
    // se asigna a num un valor ingresado por el usuario
    scanf("%i",&num);
    // se llama la funcion invertirNumero(int num, int inv)
    invertirNumero(num,0);
    return 0;
}