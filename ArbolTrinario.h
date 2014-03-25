#ifndef ARBOLTRINARIO_H
#define ARBOLTRINARIO_H
#include <iostream>
#include "NodoTrinario.h"

using namespace std;

class ArbolTrinario
{
    public:
        NodoTrinario* raiz;
        ArbolTrinario();
        virtual ~ArbolTrinario();

        void imprimir(NodoTrinario* raiz);
        bool existe(NodoTrinario* raiz, int num);
        void agregarNodo(NodoTrinario* nodo);
    protected:
    private:
};

#endif // ARBOLTRINARIO_H
