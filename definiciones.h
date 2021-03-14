typedef struct alumno
{
    char nombre[30];
    char apellido[30];
    char correo[30];
    int edad;
    char grupo;

}alumno;

typedef struct nodo
{
    alumno *dato_alumno;
    struct nodo *siguiente;
}nodo;
