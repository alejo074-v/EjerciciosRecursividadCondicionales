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
/*(4-).Hacer un programa de computador, de tal manera que lea desde el 
teclado un grupo de 75 números,diferentes a cero(validar este requisito)
 y al final de leídos, imprima:
* Cantidad de números Mayores a 150
* Número mayor y número menor encontrado en el grupo
* Cantidad de Números negativos encontrados
* Promedio de los Positivos Encontrados.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPromedioNumerosPositivos(int array[]);
void imprimirCantidadNumerosNegativos(int array[]);
void imprimirNumeroMenor(int array[],int i,int menor);
void imprimirNumeroMayorYMenor(int array[]);
void imprimirCantidadNumerosMayores(int array[],int n);
void leerNumeros(int array[]);
/*
    Esta funcion imprime el promedio de numeros positivos de un arreglo
    de 75 números enteros, recibe el arreglo como parametro , contienen
    do variables locales que son:
    entero cont = 0; guarda la cantidad de números enteros encontrados
    entero cont = 0; guarda la suma de los números enteros encontrados
*/
void imprimirPromedioNumerosPositivos(int array[])
{
    int cont = 0;
    int suma = 0;
    int i = 0;
    while (i < 75)
    {
        if (array[i] > 0)
        {
            suma = suma + array[i];
            cont++;
        }
        i++;
    }
    printf("\nEl promedio de los números positivos es: %i",(suma/cont));
}
/*
    Esta funcion imprime la cantidad de numeros negativos de un arreglo
    de 75 numeros enteros, recibe el arreglos como parametro, contiene 
    la variable cont en la que se guarda la cantidad de numeros negativos 
    encontrados dentro del arreglo.
*/
void imprimirCantidadNumerosNegativos(int array[])
{
    int cont = 0;
    int i = 0;
    while (i < 75)
    {
        if (array[i] < 0)
        {
            cont++;
        }
        i++;
    }
    printf("\nLa cantidad de números negativos es: %i",cont);
}
/*
    Esta funcion imprime el número mayor y el número menor de un arreglo
    de 75 numeros enteros, recibe como parametro el arraglo de 75 posisiones,
    contiene las variables locales.
    entero menor = valor de la primera posision del arreglo;
    entero mayor = 0;
*/
void imprimirNumeroMayorYMenor(int array[])
{
    int menor = array[0];
    int mayor = 0;
    int i = 0;
    while (i < 75)
    {
        if (array[i] >= mayor)
        {
            mayor = array[i];
        }
        if (array[i] <= menor)
        {
            menor = array[i];
        }
        i++;
    }
    printf("\nEl número mayor es: %i",mayor);
    printf("\nEl número menor es: %i",menor);
}
/*
    Esta funcion imprime la cantidad de numeros mayores a n(150) que tiene
    un arreglo de 75 posisiones, recibe como parametros el arreglo y el valor
    que deben sobrepasar los digitos para ser contados, contiene una variable 
    local a la función en la que se guarda la cantidad de numeros encontrados 
    mayores a n.
*/
void imprimirCantidadNumerosMayores(int array[],int n)
{
    int cont = 0;
    int i = 0;
    while (i < 75)
    {
        if (array[i] > 150)
        {
            cont++;
        }
        i++;
    }
    printf("\nLa cantidad de números mayores a 150 es: %i",cont);
}
/*
    Esta funcion lee 75 numeros enteros por teclado diferente de cero 
    y asigna cada valor a las posisiones de un arreglo de longitud 75
    recibe un arreglo de 75 posisiones, internamente valida que los 
    numeros ingresados por el usuario sean diferentes de cero.
*/
void leerNumeros(int array[])
{
    int i = 0;
    while (i < 75)
    {
        printf("\n\ringrese un número: ");
        scanf("%i",&array[i]);
        if (array[i] == 0)
        {
            printf("\n\t!Solo puede ingresar números diferentes de cero¡\nIntentalo de nuevo.\n");
            i--;
        }
        i++;
    }
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("Este programa  lee desde el teclado un grupo de 75 números,");
    printf("\ndiferentes a cero y al final de leúdos, se imprime:");
    printf("\n\t* Cantidad de números Mayores a 150");
    printf("\n\t* Número mayor y número menor encontrado en el grupo");
    printf("\n\t* Cantidad de Números negativos encontrados");
    printf("\n\t* Promedio de los Positivos Encontrados.");
    // se declara un array de enteros para guardar 75 numeros
    int arrayNumeros[75];
    // se llama la función leerNumeros
    leerNumeros(arrayNumeros);
    // se llama la función imprimirCantidadNumeroMayores
    imprimirCantidadNumerosMayores(arrayNumeros,150);
    // se llama la función imprimirNumeroMayorYMenor
    imprimirNumeroMayorYMenor(arrayNumeros);
    // se llama la funcióni mprimirCantidadNumerosNegativos
    imprimirCantidadNumerosNegativos(arrayNumeros);
    // se llama la función imprimirPromedioNumerosPositivos
    imprimirPromedioNumerosPositivos(arrayNumeros);
    return 0;
}