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
/*(7-).Hacer un programa de computador, de tal manera que, lea un 
número entero N, no negativo(validar esto) y mostrar la suma de los
factoriales de todos los números desde 0 hasta N.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double leerNumeroPositivo(double num);
double calcularFactorial(double n);
double sumarFactoriales(double n);
/*
    Esta función lee un numero ingresado por teclado mayor a cero
    num=>numero ingresado por el usuario
    double num = 0;
*/
double leerNumeroPositivo(double num)
{
    printf("\nIngrese un n%cmero: ",163);
    scanf("%lf",&num);
    if (num >= 0)
    {
        return num;
    }
    printf("\nEl valor debe ser igual o mayor que cero");
    leerNumeroPositivo(num);
}
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
    Esta función calcula y retorna la suma de los factoriales de 0 hasta n
    n=>e-nesimo termino de la sumatoria de factoriales
    double n = llega como parametro;
*/
double sumarFactoriales(double n)
{
    if (n > 0)
    {
        return  calcularFactorial(n) + sumarFactoriales(n-1);
    }
    else
    {
        return calcularFactorial(n);
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("\nEste programa imprime la suma de los factoriales de 0 hasta n");
    // se inicializa la variable num en 0
    double num = 0;
    // se asigna el valor ingresado por el usuario(verificado entero positivo)
    num = leerNumeroPositivo(num);
    // se inicializa la variable sumaFactoriales con el retorno de la función sumarFactoriales
    double sumaFactoriales = sumarFactoriales(num);
    // se imprime el resultado de la suma de factoriales de 0 hasta num
    printf("\nLa suma de los factoriales de 0 hasta %.2lf es: %.2lf",num,sumaFactoriales);
    return 0;
}