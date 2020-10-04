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
/*(23-).Hacer un programa que calcule e imprima en la pantalla la solucion 
a la funcion cosh(x) usando series de tylor.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double calcularFactorial(double n);
double pot(double x,double y);
double calcularCosh(double x,int m);
/*
    Esta función calcula e imprime el factorial de un numero entero 
    positivo, n=>numero a calcular el factorial
*/
double calcularFactorial(double n)
{
    double fac = 1;
    while (n > 0)
    {
        fac = fac * n;
        n--;
    }
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
    while (y > 0)
    {
        resultado = resultado*x;
        y--;
    }
    return resultado;
}
/*
    Esta función calcula la solucion de la funcion cosh(x) a travez 
    de las series de tylor,recibe 2 parametros, m=>e-nesimo termino,x=> ingresado por el usuario
    double x = real;
    int m = 0;
*/
double calcularCosh(double x,int m)
{
    double suma = 1;
    while (m > 0)
    {
        suma = suma + (pot(x,(2*m))/calcularFactorial(2*m));
        m--;
    }
    return suma;
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime la soluci%cn de la funci%cn coseno hiperb%clico de x, cosh(x) ",162);
    printf("\nla soluci%cn se realiza por medio de las series de Taylor, con la ",162);
    printf("\nsiguiente f%crmula, sumatoria de 0 hasta 12 para: (x^(2*m))/(2*m)! . \n",162);
    printf("\nIngrese x -> ");
    // declaracion e inicalización de variables
    double cosh = 0; // coseno hiperbolico
    int m = 12; // 13 terminos a sumar
    double x = 0; // x ingresado por el usuario
    scanf("%lg",&x);
    // se asigna el retorno de la función calcularCosh a la variable cosh(x)
    cosh = calcularCosh(x,m);
    // imprime la solucion a la suma de tylor
    printf("\nSoluci%cn en radianes:%lf",162,cosh);
    return 0;
}