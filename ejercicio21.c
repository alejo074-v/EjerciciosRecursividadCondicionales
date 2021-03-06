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
/*(21-).Hacer un programa que calcule e imprima en la pantalla la solucion 
a la funcion cos(x) usando series de tylor:
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double calcularFactorial(double n);
double pot(double x,double y);
double calcularCosenoX(double x,int m);
/*
    Esta función calcula e imprime el factorial de un numero entero 
    positivo, n=>numero a calcular el factorial
*/
double calcularFactorial(double n)
{
    double fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
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
    for (int i = 0; i < y; i++)
    {
        resultado = resultado*x;
    }
    return resultado;
}
/*
    Esta función calcula la solucion de la funcion cos(x) a travez 
    de las series de tylor,recibe 2 parametros, m=>e-nesimo termino,
    x=>valor de x
    double x = real ingresado por el usuario;
    int m = 12;
*/
double calcularCosenoX(double x,int m)
{
    double suma = 1;
    for (int i = m; i > 0; i--)
    {
        suma = suma + (pot(-1,i)*pot(x,(2*i)))/calcularFactorial((2*i));
    }
    return suma;
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime la soluci%cn de la funci%Cn coseno de x, cos(x) ",162,162);
    printf("\nla soluci%cn se realiza por medio de las series de Taylor, con la ",162);
    printf("\nsiguiente f%crmula, sumatoria de 0 hasta 12 para: (-1^m)*(x^(2*m))/(2*m)! . \n",162);
    printf("\nIngrese x -> ");
    // declaracion e inicalización de variables
    double cosx = 0; // coseno de X
    int m = 12; // 13 terminos a sumar
    double x = 0; // x ingresado por el usuario
    scanf("%lg",&x);
    // se asigna el retorno de la función calcularCosenoX a la variable cosx
    cosx = calcularCosenoX(x,m);
    // imprime la solucion a la suma de tylor
    printf("\nSoluci%cn en radianes: %lf",162,cosx);
    return 0;
}