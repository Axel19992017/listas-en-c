#include <stdio.h>
#include <cs50.h>
#include "definiciones.h"
#include <string.h>


bool insertar_alumno();
bool eliminar_alumno(string correo);
void mostrar_alumnos();
void guardar_alumnos();

nodo *cabeza = NULL;

int main(void)
{

    int opcion = get_int("Ingrese la opción: ");

    switch(opcion)
    {
        // agregar un elemento
        case 1:
            insertar_alumno();
        break;

        default: 
        break;
    }
    return 0;
}



bool insertar_alumno()
{
    alumno *nuevo = malloc(sizeof(alumno));
    if(nuevo)
    {
        strcpy(nuevo->nombre ,get_string("Ingrese el nombre: "));
        strcpy(nuevo->apellido ,get_string("Ingrese el apellido: "));
        strcpy(nuevo->correo ,get_string("Ingrese el correo: "));
        nuevo->edad = get_int("Ingrese la edad: "));
        nuevo->grupo = get_char("Ingrese el grupo: "));
        
        // crear nodo
        nodo *nodo_alumno = malloc(sizeof(nodo));
        if(nodo_alumno)
        {
            nodo_alumno->dato_alumno = nuevo;
            nodo_alumno->siguiente = NULL;

            if(cabeza)
            {
                nodo_alumno->siguiente = cabeza;
                cabeza = nodo_alumno;
                
            }else
            {
                cabeza = nodo_alumno;
            }
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
