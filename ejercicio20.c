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
/***+  ///         /////////////////                           +***/
/***+                                                          +***/
/***+**********************************************************+***/
////////////////////////////////////////////////////////////////////
/*(20-).Hacer un programa que calcule e imprima en la pantalla la solucion 
a la funcion exponencia usando series de taylor(e^x): 
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double calcularFactorial(double n);
double pot(double x,double y);
double calcularExponencial(int n,double x);
/*
    Esta función calcula e imprime el factorial de un numero entero 
    positivo, n=>numero a calcular el factorial
*/
double calcularFactorial(double n)
{
    double fac = 1;
    do{
        fac = fac * n;
        n=n-1;
        if (n<0)
        {
            fac = 1;
        }
    } while (n > 0);
    return fac;
}
/*
    Esta funcion calcula la potencia de un numero real
    x=>base,y=>exponente
    double x = real;
    double y = real;
*/
double pot(double x,double y)
{
    double resultado=1;
    do{
        resultado = resultado*x;
        y--;
        if (y<0)
        {
            resultado = 1;
        }
    } while (y > 0);
    return resultado;
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
    double suma = 0;
    do{
        suma = suma + (pot(x,n)/calcularFactorial(n));
        n--;
    } while (n > 0);
    return suma;
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