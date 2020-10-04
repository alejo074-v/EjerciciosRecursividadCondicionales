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
/*(7-).Hacer un programa de computador, de tal manera que, lea un 
número entero N, no negativo(validar esto) y mostrar la suma de los
factoriales de todos los números desde 0 hasta N.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
double leerNumeroPositivo();
double calcularFactorial(double n);
double sumarFactoriales(double n);
/*
    Esta función lee un numero ingresado por teclado mayor a cero
    tiene una variable inicializada en 0 y retorna 
    esa variable con el numero ingresado por el usuario ya habiendo 
    validado que este valor sea mayor o igual a cero
*/
double leerNumeroPositivo()
{
    double num = 0;
    for (int i = 0; i < 1; i++)
    {
        printf("\nIngrese un n%cmero: ",163);
        scanf("%lf",&num);
        if (num < 0)
        {
            printf("\nEl valor debe ser igual o mayor que cero");
            i = -1;
        }
    }
    return num;
}
/*
    Esta función calcula y retorna el factorial de un numero entero 
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
    Esta función  retorna la suma de los factoriales de 0 hasta n
    n=>e-nesimo termino de la sumatoria de factoriales
*/
double sumarFactoriales(double n)
{
    double suma = 0;
    for (double i = 0; i <= n; i++)
    {
        suma = suma + calcularFactorial(i);
    }
    return suma;
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