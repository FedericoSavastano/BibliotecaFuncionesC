#include <stdio.h>
#include <stdlib.h>


/** \brief Solicita un numero entero y lo valida entre un max y un min
 *
 * \param char mensaje: mensaje a mostrar
 * \param char mensajeError: mensaje a mostrar en caso de error
 * \param int numero minimo para validar el entero
 * \param int numero maximo para validar el entero
 * \return el numero entero introducido por el usuario
 *
 */
int conseguirEntero (char mensaje[], char mensajeError[], int min, int max)
{
    int numeroEntero;
    printf("%s",mensaje);
    scanf("%d",&numeroEntero);
    while(numeroEntero<min || numeroEntero>max)
    {
        printf("%s\n",mensajeError);
        printf("%s",mensaje);
        scanf("%d",&numeroEntero);
    }
    return numeroEntero;
}



/** \brief Solicita un numero flotante y lo valida entre un max y un min
 *
 * \param char mensaje: mensaje a mostrar
 * \param char mensajeError: mensaje a mostrar en caso de error
 * \param int numero minimo para validar el flotante
 * \param int numero maximo para validar el flotante
 * \return el numero flotante introducido por el usuario
 *
 */
float conseguirFlotante (char mensaje[], char mensajeError[], float min, float max)
{
    float numeroFlotante;
    printf("%s",mensaje);
    scanf("%f",&numeroFlotante);
    while(numeroFlotante<min || numeroFlotante>max)
    {
        printf("%s\n",mensajeError);
        printf("%s",mensaje);
        scanf("%f",&numeroFlotante);
    }
    return numeroFlotante;
}

char conseguirChar (char mensaje[], char mensajeError[], char min, char max)
{
    char caracter;
    printf("%s",mensaje);
    scanf("%c",&caracter);
    while(caracter<min || caracter>max)
    {
        printf("%s\n",mensajeError);
        printf("%s",mensaje);
        scanf("%c",&caracter);
    }
    return caracter;
}

char conseguirString (char mensaje[], char mensajeError[],int min, int max)
{
    char stringAConseguir[max];
    printf("%s",mensaje);
    scanf("%s",&stringAConseguir);
    /**while(stringAConseguir<min || stringAConseguir>max)
    {
        printf("%s\n",mensajeError);
        printf("%s",mensaje);
        scanf("%s",&stringAConseguir);
    }**/
    return stringAConseguir;
}
