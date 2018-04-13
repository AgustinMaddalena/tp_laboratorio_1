#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float ingresar()
{
    float numero;
    printf("Ingrese el operando: ");
    scanf("%f", &numero);
    system("cls");
    return numero;
}

float suma(float numero1, float numero2)
{
    float resultado;
    resultado = numero1 + numero2;
    return resultado;
}
float resta(float numero1, float numero2)
{
    float resultado;
    resultado = numero1 - numero2;
    return resultado;
}

float division(float numero1, float numero2)
{
    float resultado;
    resultado = (float)numero1 / numero2;
    return resultado;
}
float multiplicacion(float numero1, float numero2)
{
    float resultado;
    resultado = numero1 * numero2;
    return resultado;
}
long long factorial(float numero1)
{
    numero1 = (int)numero1;
    long long factorial = 1;
    int i;

        for(i = numero1; i > 0 ; i--)
        {
            factorial = factorial * i;
        }


    return factorial;

}
