
//AVALOS NAVARRETE JOSE DE JESUS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMA_LONGITUD_CADENA 100

struct nodoCadena
{
   
    char cadena[MAXIMA_LONGITUD_CADENA];
   
    struct nodoCadena *izquierda;
    struct nodoCadena *derecha;
};

struct nodoCadena *nuevoNodo(char [MAXIMA_LONGITUD_CADENA])
{
   
    size_t tamanioNodo = sizeof(struct nodoCadena);
    struct nodoCadena *nodo = (struct nodoCadena *)malloc(tamanioNodo);
   
    strcpy(nodo->cadena,  cadena);
    nodo->izquierda = nodo->derecha = NULL;
    return nodo;
}

void agregar(struct nodoCadena *nodo, char *cadena)
{
    if (strcmp(cadena, nodo->cadena) > 0)
    {
        if (nodo->derecha == NULL)
        {
            nodo->derecha = nuevoNodo(cadena);
}

void agregar(struct nodoCadena *nodo, char *cadena)
{
    if (strcmp(cadena, nodo->cadena) > 0)
    {
        if (nodo->derecha == NULL)
        {
            nodo->derecha = nuevoNodo(cadena);
        }
        else
        {
            agregar(nodo->derecha, cadena);
        }
    }
    else
    {
        if (nodo->izquierda == NULL)
        {
            nodo->izquierda = nuevoNodo(cadena);
        }
        else
        {
            agregar(nodo->izquierda, cadena);
        }
    }
}

struct nodoCadena *buscar(struct nodoCadena *nodo, char *cadena)
{
    if (nodo == NULL)
    {
        return NULL;
    }
    if (strcmp(cadena, nodo->cadena) == 0)
    {
struct nodoCadena *buscar(struct nodoCadena *nodo, char *cadena)
{
    if (nodo == NULL)
    {
        return NULL;
    }
    if (strcmp(cadena, nodo->cadena) == 0)
    {
-- INSERTAR --                                                                                                                      46,1          35%

    char busqueda[MAXIMA_LONGITUD_CADENA] = "&busqueda";
    printf ("¿Que numero quieres buscar?");
    scanf  ("%s", &busqueda);

    struct nodoCadena *apuntador = buscar(raiz, busqueda );
    if (apuntador == NULL)
    {
        printf("%s no existe en el árbol\n", busqueda);
    }
    else
    {
        printf("%s sí existe en el árbol\n", busqueda);
    }
