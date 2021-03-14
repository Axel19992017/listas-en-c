#include <stdio.h>
#include <cs50.h>
#include "definiciones.h"
#include <string.h>

int main(void)
{
    alumno grupoa[11];
    for(int i = 0; i< 11; i++)
    {
        strcpy(grupoa[i].nombre, get_string(""));
        strcpy(grupoa[i].apellido, get_string(""));
        strcpy(grupoa[i].correo, get_string(""));
        grupoa[i].edad = get_int("");
        grupoa[i].grupo = get_char("");
    }
    
    for(int i = 0; i< 11; i++)
    {
        printf("\t%s %s \n\t Grupo: %c, Edad: %d\n\tCorreo: %s\n", grupoa[i].nombre,grupoa[i].apellido, grupoa[i].grupo, grupoa[i].edad, grupoa[i].correo);
    }

    

    return 0;
}
