#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <ctype.h>
#include <conio.h>


/** \brief Carga un numero y lo guarda en la variable de retorno
 *
 * \return retorna el numero ingresado
 *
 */
float ingresar();

/** \brief Suma los dos numeros pasados por parametro ( A Y B)
 * \param Numero 1 (A)
 * \param Numero 2 (B)
 * \return La suma de estos dos numeros
 */

float suma(float numero1, float numero2);

/** \brief Resta los dos numeros pasados por parametro ( A Y B)
 * \param Numero 1 (A)
 * \param Numero 2 (B)
 * \return La resta de estos dos numeros
 */
float resta(float numero1, float numero2);

/** \brief Divide los dos numeros pasados por parametro ( A Y B)
 * \param Numero 1 (A)
 * \param Numero 2 (B)
 * \return La division de estos dos numeros
 */
float division(float numero1, float numero2);

/** \brief Multiplica los dos numeros pasados por parametro ( A Y B)
 * \param Numero 1 (A)
 * \param Numero 2 (B)
 * \return La suma de estos dos numeros
 */
float multiplicacion(float numero1, float numero2);

/** \brief Calcula el factorial del numero1(A)
 * \param Numero 1 (A)
 * \return El factorial del numero pasado por parametro
 */
long long factorial(float numero1);

#endif // FUNCIONES_H_INCLUDED
