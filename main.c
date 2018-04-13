#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>
#include <conio.h>

int main()
{
    system("color 4");
    char seguir='s';
    int opcion=0;

    float num1 = 0;
    float num2 = 0;
    int flagN1 = 0;
    int flagN2 = 0;
    float resultadoSum;
    float resultadoMult;
    float resultadoRest;
    float resultadoDiv;
    long long resultadoFact;
    while(seguir=='s')
    {

        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            num1 = ingresar();
            flagN1 = 1;

            break;
        case 2:

            num2 = ingresar();
            flagN2 = 1;
            break;
        case 3:
            if(flagN1 == 1 && flagN2 == 1) //Flags de control de ingreso de los numeros a operar
            {
                resultadoSum = suma(num1,num2);
                printf("El resultado de la suma es: %.2f\n", resultadoSum);
                system("pause");
                system("cls");
            }
            else
            {
                printf("Error, no Ingreso los dos operandos.\n");
                system("pause");
                system("cls");
            }
            break;
        case 4:
            if(flagN1 == 1 && flagN2 == 1)
            {
                resultadoRest = resta(num1,num2);
                printf("El resultado de la resta es: %.2f\n", resultadoRest);
                system("pause");
                system("cls");
            }
            else
            {
                printf("Error, no Ingreso los dos operandos.\n");
                system("pause");
                system("cls");
            }
            break;
        case 5:
            if(flagN1 == 1 && flagN2 == 1 && num2 != 0)
            {
                resultadoDiv = division(num1,num2);
                printf("El resultado de la division es: %f\n", resultadoDiv);
                system("pause");
                system("cls");
            }
            else
            {
                printf("Error, no Ingreso los dos operandos o el segundo operando es 0.\n");
                system("pause");
                system("cls");
            }
            break;
        case 6:
            if(flagN1 == 1 && flagN2 == 1)
            {
                resultadoMult = multiplicacion(num1,num2);
                printf("El resultado de la multiplicacion es: %.2f\n", resultadoMult);
                system("pause");
                system("cls");
            }
            else
            {
                printf("Error, no Ingreso los dos operandos.\n");
                system("pause");
                system("cls");
            }
            break;
        case 7:
            if(flagN1 == 1)
            {
                resultadoFact = factorial(num1);
                printf("\nEl resultado del factorial es: %lld\n", resultadoFact);
                system("pause");
                system("cls");
            }
            else
            {
                printf("No ingreso el operando. Reingrese.\n");
                system("pause");
                system("cls");
            }
            break;
        case 8:
            if(flagN1 == 1 && flagN2 == 1)
            {
                resultadoSum = suma(num1,num2);
                resultadoRest = resta(num1,num2);
                resultadoDiv = division(num1,num2);
                resultadoMult = multiplicacion(num1,num2);
                resultadoFact = factorial(num1);

                printf("\nEl resultado de la suma es: %.2f\n", resultadoSum);
                printf("El resultado de la resta es: %.2f\n", resultadoRest);
                printf("El resultado de la division es: %.2f\n", resultadoDiv);
                printf("El resultado de la multiplicacion es: %.2f\n", resultadoMult);
                printf("El resultado del factorial es: %lld\n", resultadoFact);
                system("pause");
                system("cls");
            }
            else
            {
                printf("No ingreso los dos operandos. Reingrese.\n");
                system("pause");
                system("cls");
            }
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    return 0;
}
