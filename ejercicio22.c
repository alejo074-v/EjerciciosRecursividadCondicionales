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
/*(22-).Hacer un programa que calcule e imprima en la pantalla la solucion 
a la funcion senh(x) usando series de tylor
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double calcularFactorial(double n);
double pot(double x,double y);
double calcularSenh(double x,int m);
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
    Esta función calcula la solucion de la funcion senh(x) a travez 
    de las series de tylor,recibe 2 parametros,m=>e-nesimo termino,
    x=>valor de x igresado por el usuario
    double x = real;
    int m = 12;
*/
double calcularSenh(double x,int m)
{
    double suma = x;
    do{
        suma = suma + (pot(x,(2*m+1))/calcularFactorial(2*m+1));
        m--;
    } while (m > 0);
    return suma;
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime la soluci%cn de la funci%cn seno hiperb%clico de x, senh(x) ",162,162,162);
    printf("\nla soluci%cn se realiza por medio de las series de Taylor, con la ",162);
    printf("\nsiguiente f%crmula, sumatoria de 0 hasta 12 para: (x^(2*m+1))/(2*m+1)! . \n",162);
    printf("\nIngrese x -> ");
    // declaracion e inicalización de variables
    double senh = 0; // seno hiporbolico
    int m = 12; // 13 terminos a sumar
    double x = 0; // x ingresado por el usuario
    scanf("%lg",&x);
    // se asigna el retorno de la función calcularSenh a la variable senhx
    senh = calcularSenh(x,m);
    // imprime la solucion a la suma de tylor
    printf("\nSoluci%cn en radianes: %lf",162,senh);
    return 0;
}