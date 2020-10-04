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
/*(24-).Hacer un programa que calcule e imprima en la pantalla la solucion 
a la funcion ln(x) usando series de tylor.
*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double pot(double x,double y);
double calcularLogaritmoNatural(double x,int n);
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
    Esta función calcula la solucion de la funcion ln(x) a travez 
    de las series de tylor,recibe 2 parametros, m=>e-nesimo termino,x=> ingresado por el usuario
    double x = real;
    int m = 0;
*/
double calcularLogaritmoNatural(double x,int n)
{
    double suma = x-1;
    while (n > 0)
    {
        suma = suma + (pot(-1,n)*pot((x-1),(n+1))/(n+1));
        n--;
    }
    return suma;
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime la soluci%cn de la funci%cn logaritmo natural de x, ln(x) ",162,162);
    printf("\nla soluci%cn se realiza por medio de las series de Taylor, con la ",162);
    printf("\nsiguiente f%crmula, sumatoria de 0 hasta 12 para: (-1^n)*((x-1)^(n+1))/n . \n",162);
    printf("\nIngrese x -> ");
    // declaracion e inicalización de variables
    double ln = 0; // logaritmo natural
    int n = 12; // 12 terminos a sumar
    double x = 0; // x ingresado por el usuario
    scanf("%lg",&x);
    // se asigna el retorno de la función calcularLogaritmoNatural a la variable ln(x)
    ln = calcularLogaritmoNatural(x,n);
    // imprime la solucion a la suma de tylor
    printf("\nSoluci%cn: %lf",162,ln);
    return 0;
}