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
/*(6-).Hacer un programa de computador, de tal manera que, lea un 
número e imprima su factorial.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void calcularFactorial(double n, double i, double fac);
/*
    Esta función calcula e imprime el factorial de un numero entero 
    positivo n=>numero a calcular el factorial,i indice que va desde
    0 hasta n, fac=>factorial de n
    double n = ingesado por el usuario;
    double i = 1;
    double fac = 1;
*/
void calcularFactorial(double n, double i, double fac)
{
    if (n == 0)
    {
        printf("\n0! = 1");
    }
    if (n > 0)
    {
        if (i <= n)
        {
            calcularFactorial(n, (i + 1), (fac * i));
        }
        else
        {
            printf("%.2lf ",fac);
        }
    }
    else
    {
        printf("El factorial solo aplica a n%cmeros enteros positivos.",163);
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime el factorial de un n%cmero ingresado\n",163);
    printf("\nIngrese un n%cmero: ",163);
    // se declara e inicializa la variable num en 0
    double num = 0;
    // se lee un numero y se le asigna a la variable num
    scanf("%lf", &num);
    // se llama la función calcularFactorial
    calcularFactorial(num, 1, 1);
    return 0;
}