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
/***+  ///         /////////////////                           +***/
/***+                                                          +***/
/***+**********************************************************+***/
////////////////////////////////////////////////////////////////////
/*(20-).Hacer un programa que calcule e imprima en la pantalla la solucion 
a la funcion exponencia usando series de taylor(e^x): 

A travez de recursividad se suman los terminos de la sumatoria de taylor
para la funcion e^x*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double calcularFactorial(double n);
double pot(double x,double y);
double calcularExponencial(int n,double x);
/*
    Esta función retorna el factorial de un numero que recibe como parametro
    n=>numero a calcular el factorial
    double n = llega por parametro;
*/
double calcularFactorial(double n)
{
    if (n > 0)
    {
        return n * calcularFactorial(n-1);
    }
    else
    {
        return 1;
    }
}
/*
    Esta funcion calcula la potencia de un numero real
    x=>base,y=>exponente
    double x = real;
    double y = real;
*/
double pot(double x,double y)
{
    if (y>0)
    {
        return (x * pot(x,y-1));
    }
    else
    {
        return 1;
    }
}
/*
    Esta función calcula la solucion de la funcion exponencial a travez 
    de las series de taylor,recibe 2 parametros,n=>e-nesimo termino,
    x=>valor de x
    int n = 12;
    double x = real ingresado por el usuario;
*/
double calcularExponencial(int n,double x)
{
    if (n>0)
    {
        return (pot(x,n)/calcularFactorial(n)) + calcularExponencial(n-1,x);
    }
    else
    {
        return 1;
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime la soluci%cn de la funci%cn exponencial (e^x) ",162,162);
    printf("\nla soluci%cn se realiza por medio de las series de Taylor, con la ",162);
    printf("\nsiguiente f%crmula, sumatoria de 0 hasta 12 para: (x^n)/n! . \n",162);
    printf("\nIngrese x -> ");
    // declaracion e inicalización de variables
    double e = 0; // exponencial
    int n = 12; // 13 terminos a sumar
    double x = 0; // x ingresado por el usuario
    scanf("%lg",&x);
    // se asigna el retorno de la función funcionExponencial a la variable exponencial
    e = calcularExponencial(n,x);
    // imprime la solucion a la suma de tylor
    printf("\nSoluci%cn: %lg",162,e);
    return 0;
}