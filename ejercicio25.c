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
/*(25-).Hacer un programa que calcule e imprima en la pantalla la solucion 
a la funcion sen(x) usando series de tylor.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double calcularFactorial(double n);
double pot(double x,double y);
double calcularSenx(double x,int m);
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
    Esta función calcula la solucion de la funcion sen(x) a travez 
    de las series de tylor,recibe 2 parametros, m=>e-nesimo termino,x=> ingresado por el usuario
    double x = real;
    int m = 0;
*/
double calcularSenx(double x,int m)
{
    double suma = x;
    while (m > 0)
    {
        suma = suma + (pot(-1,m)*pot(x,(2*m+1))/calcularFactorial(2*m+1));
        m--;
    }
    return suma;
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime la soluci%cn de la funci%cn seno de x, sen(x) ",162,162);
    printf("\nla soluci%cn se realiza por medio de las series de Taylor, con la ",162);
    printf("\nsiguiente f%crmula, sumatoria de 0 hasta 12 para: (-1^m)*(x^(2*m+1))/(2*m+1)! . \n",162);
    printf("\nIngrese x -> ");
    // declaracion e inicalización de variables
    double senx = 0; // seno de x
    int m = 12; // 12 terminos a sumar
    double x = 0; // x ingresado por el usuario
    scanf("%lg",&x);
    // se asigna el retorno de la función calcularSenx a la variable sen(x)
    senx = calcularSenx(x,m);
    // imprime la solucion a la suma de tylor
    printf("\nSoluci%cn Radianes: %lf",162,senx);
    return 0;
}