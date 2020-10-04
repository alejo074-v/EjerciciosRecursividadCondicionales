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
/*(6-).Hacer un programa de computador, de tal manera que, lea un 
número e imprima su factorial.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void calcularFactorial(double n);
/*
    Esta función calcula e imprime el factorial de un numero entero 
    positivo, n=>numero a calcular el factorial
*/
void calcularFactorial(double n)
{
    if (n >=0 )
    {
        double fac = 1;
        for (int i = 1; i <= n; i++)
        {
            fac = fac * i;
        }
        printf("%.2lf ",fac);
    }
    else
    {
        printf("El factorial solo aplica a números enteros positivos.");
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime el factorial de un número ingresado\n");
    printf("\nIngrese un número: ");
    // se declara e inicializa la variable num en 0
    double num = 0;
    // se lee un numero y se le asigna a la variable num
    scanf("%lf", &num);
    // se llama la función calcularFactorial
    calcularFactorial(num);
    return 0;
}