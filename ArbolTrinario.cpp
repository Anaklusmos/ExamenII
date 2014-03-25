#include <iostream>
#include "ArbolTrinario.h"

using namespace std;

ArbolTrinario::ArbolTrinario()
{
    raiz=NULL;
    //ctor
}

ArbolTrinario::~ArbolTrinario()
{
    //dtor-
}

void ArbolTrinario::imprimir(NodoTrinario* raiz)
{
    if (raiz == NULL)
    {
        return;
    }

    else
    {
    imprimir(raiz->hijo_derecho);
    imprimir(raiz->hijo_medio);
    imprimir(raiz->hijo_izquierdo);
    }

    cout<< raiz->num <<endl;
}

bool ArbolTrinario::existe(NodoTrinario* raiz, int num)
{
    if (raiz == NULL)
    {
        return false;
    }

    if (raiz->num == num)
        return true;
    else
    {
        if(existe(raiz->hijo_derecho, num))
            return true;
        if (existe(raiz->hijo_medio, num))
            return true;
        if (existe(raiz->hijo_izquierdo, num))
            return true;
    }

    return false;
}

void ArbolTrinario::agregarNodo(NodoTrinario* nodo)
{
    if (raiz == NULL)
    {
        raiz=nodo;
        return;
    }

    NodoTrinario* temp=raiz;

    while (temp !=NULL)
    {
        agregarNodo (temp->hijo_derecho);
        if (temp->hijo_izquierdo == NULL)
        {
            temp->hijo_izquierdo = nodo;
            return;
        }
        if (temp->hijo_medio== NULL)
        {
            temp->hijo_medio = nodo;
            return;
        }
        agregarNodo (temp->hijo_medio);
        if (temp->hijo_derecho == NULL)
        {
            temp->hijo_derecho = nodo;
            return;
        }
        if (temp->hijo_izquierdo == NULL)
        {
            temp->hijo_izquierdo = nodo;
            return;
        }
        agregarNodo (temp->hijo_izquierdo);
        if (temp->hijo_derecho == NULL)
        {
            temp->hijo_derecho = nodo;
            return;
        }
        if (temp->hijo_medio == NULL)
        {
            temp->hijo_medio = nodo;
            return;
        }
    }
}
