#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Biblioteca.h"

int pedirEntero(void)
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    return numero;
}

float pedirFloat (void)
{
    float numero;

    printf("Ingrese un numero: ");
    scanf("%f", &numero);

    return numero;
}

void pedirString(char* dato)
{
    char buffer[1024];

    fflush(stdin);
    gets(dato);
    strcpy(buffer, dato);

    while (strlen(buffer)>19)
    {
        printf("Reingrese dato: ");
        fflush(stdin);
        gets(dato);
        strcpy(buffer, dato);
    }
    strcpy(dato, buffer);
}

int sumarInt (int numeroA, int numeroB)
{
    int resultado;

    resultado=numeroA+numeroB;

    return resultado;
}

int restarInt (int numeroA, int numeroB)
{
    int resultado;

    resultado=numeroA-numeroB;

    return resultado;
}

int multiplicarInt (int numeroA, int numeroB)
{
    int resultado;

    resultado=numeroA*numeroB;

    return resultado;
}

float dividirFloat (float numeroA, float numeroB)
{
    float resultado;

    resultado=numeroA/numeroB;

    return resultado;
}

int factorearIint (int numeroA)
{
    int factorialA;
    int factorA=1;

    if (numeroA < 0)
    {
        printf("No se puede factorear un numero negativo");
    }
    else
    {

        for (factorialA=numeroA; factorialA > 0; factorialA--)
        {
            factorA=factorA*factorialA;
        }
    }
    return factorA;
}
