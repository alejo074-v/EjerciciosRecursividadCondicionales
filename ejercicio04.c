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
/*(4-).Hacer un programa de computador, de tal manera que lea desde el teclado un grupo de 75 números,
diferentes a cero(validar este requisito) y al final de leídos, imprima:
* Cantidad de números Mayores a 150
* Número mayor y número menor encontrado en el grupo
* Cantidad de Números negativos encontrados
* Promedio de los Positivos Encontrados.*/
//  Se incluye la libreria Standar Input Output
#include <stdio.h>
// prototipos de función
void imprimirPromedioNumerosPositivos(int array[],int i,int cont,int suma);
void imprimirCantidadNumerosNegativos(int array[],int i,int cont);
void imprimirNumeroMenor(int array[],int i,int menor);
void imprimirNumeroMayor(int array[],int i,int mayor);
void imprimirCantidadNumerosMayores(int n,int array[],int i,int cont);
void leerNumeros(int array[],int i);
/*
    Esta funcion imprime el promedio de numeros positivos de un arreglo
    array=>numeros ingresados por el usuario,i=>indice que va de 0 a 75
    cont=>cantidad de numeros positivos,suma=>suma de numeros positivos
    int array = array[75];
    int i = 0;
    int cont = 0;
    int suma = 0;
*/
void imprimirPromedioNumerosPositivos(int array[],int i,int cont,int suma)
{
    if (i < 15)
    {
        if (array[i] > 0)
        {
            imprimirPromedioNumerosPositivos(array,(i+1),(cont+1),(suma+array[i]));
        }
        else
        {
            imprimirPromedioNumerosPositivos(array,(i+1),cont,suma);
        }
    }
    else
    {
        printf("\nEl promedio de los n%cmeros positivos es: %i",163,(suma/cont));
    }
}
/*
    Esta funcion imprime la cantidad de numeros negativos de un arreglo
    array=>numeros ingresados por el usuario,i=>indice que va de 0 a 75
    cont=>cantidad de numeros negativos
    int array = array[75];
    int i = 0;
    int cont = 0;
*/
void imprimirCantidadNumerosNegativos(int array[],int i,int cont)
{
    if (i<15)
    {
        if (array[i] < 0)
        {
            imprimirCantidadNumerosNegativos(array,(i+1),(cont+1));
        }
        else
        {
            imprimirCantidadNumerosNegativos(array,(i+1),cont);
        }
    }
    else
    {
        printf("\nLa cantidad de n%cmeros negativos es: %i",163,cont);
    }
}
/*
    Esta funcion imprime el numero menor de un arreglo de enteros
    array=>numeros ingresados por el usuario,i=>indice que va de 0 a 75
    mayor=>numero menor del arreglo de enteros
    int array = array[75];
    int i = 0;
    int menor = array[0];
*/
void imprimirNumeroMenor(int array[],int i,int menor)
{
    if (i<15)
    {
        if (array[i] <= menor)
        {
            imprimirNumeroMenor(array,(i+1),array[i]);
        }
        else
        {
            imprimirNumeroMenor(array,(i+1),menor);
        }
    }
    else
    {
        printf("\nEl n%cmero menor es: %i",163,menor);
    }
}
/*
    Esta funcion imprime el numero mayor de un arreglo de enteros
    array=>numeros ingresados por el usuario,i=>indice que va de 0 a 75
    mayor=>numero mayor del arreglo de enteros
    int array = array[75];
    int i = 0;
    int mayor = 0;
*/
void imprimirNumeroMayor(int array[],int i,int mayor)
{
    if (i<15)
    {
        if (array[i] >= mayor)
        {
            imprimirNumeroMayor(array,(i+1),array[i]);
        }
        else
        {
            imprimirNumeroMayor(array,(i+1),mayor);
        }
    }
    else
    {
        printf("\nEl n%cmero mayor es: %i",163,mayor);
    }
}
/*
    Esta funcion imprime la cantidad de numeros mayores a 150 de un arreglo
    n=>limite a sobrepasar,array=>numeros ingresados por el usuario
    i=>indice que va de 0 a 75,cont=>cantidad de numeros mayores a 150
    int n = 150
    int array = array[75];
    int i = 0;
    int cont = 0;
*/
void imprimirCantidadNumerosMayores(int n,int array[],int i,int cont)
{
    if (i<15)
    {
        if (array[i] > n)
        {
            imprimirCantidadNumerosMayores(n,array,(i+1),(cont+1));
        }else{
            imprimirCantidadNumerosMayores(n,array,(i+1),cont);
        }
    }
    else
    {
        printf("\nLa cantidad de n%cmeros mayores a 150 es: %i",163,cont);
    }
}
/*
    Esta funcion pide 75 numeros enteros por teclado diferente de cero 
    y devuelve una arreglo con los numeros ingresados
    array=>numeros que ingresa el usuario,i=>indice que va de cero a 75
    int array = array[75];
    int i = 0;
*/
void leerNumeros(int array[],int i)
{
    if(i<15)
    {
        printf("\n\ringrese un n%cmero: ",163);
        scanf("%i",&array[i]);
        if (array[i] != 0)
        {
            leerNumeros(array,(i+1));
        }
        else
        {
            printf("\n\t!Solo puede ingresar n%cmeros diferentes de cero¡\nIntentalo de nuevo.\n",163);
            leerNumeros(array,i);
        }
    }
    
}
// declaración de la función principal
int main ()
{
    // Imprime diseño de pantalla del Programa
    printf("Este programa  lee desde el teclado un grupo de 75 n%cmeros,",163);
    printf("\ndiferentes a cero y al final de le%cdos, se imprime:",161);
    printf("\n\t* Cantidad de n%cmeros Mayores a 150",163);
    printf("\n\t* N%cmero mayor y n%cmero menor encontrado en el grupo",163,163);
    printf("\n\t* Cantidad de N%cmeros negativos encontrados",163);
    printf("\n\t* Promedio de los Positivos Encontrados.");
    // se declara un array de enteros para guardar 75 numeros
    int arrayNumeros[15];
    // se llama la función leerNumeros
    leerNumeros(arrayNumeros,0);
    // se llama la función imprimirCantidadNumeroMayores
    imprimirCantidadNumerosMayores(150,arrayNumeros,0,0);
    // se llama la función imprimirNumeroMayor
    imprimirNumeroMayor(arrayNumeros,0,0);
    // se llama la función imprimirNumeroMenor
    imprimirNumeroMenor(arrayNumeros,0,arrayNumeros[0]);
    // se llama la funcióni mprimirCantidadNumerosNegativos
    imprimirCantidadNumerosNegativos(arrayNumeros,0,0);
    // se llama la función imprimirPromedioNumerosPositivos
    imprimirPromedioNumerosPositivos(arrayNumeros,0,0,0);
    return 0;
}