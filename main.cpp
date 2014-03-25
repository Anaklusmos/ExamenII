#include <iostream>
#include "ArbolTrinario.h"
#include "NodoTrinario.h"
using namespace std;

int main()
{
    //Función agregar nodo no funciona si se agrega uno más, por lo que no probé en sí agregando nodos...
    //... para recorrer el arbol.

    ArbolTrinario arbol;

    NodoTrinario* n1 = new NodoTrinario(0);
    NodoTrinario* n2 = new NodoTrinario(1);
    NodoTrinario* n3 = new NodoTrinario(2);
    NodoTrinario* n4 = new NodoTrinario(3);
    NodoTrinario* n5 = new NodoTrinario(4);
    NodoTrinario* n6 = new NodoTrinario(5);
    NodoTrinario* n7 = new NodoTrinario(6);
    NodoTrinario* n8 = new NodoTrinario(7);
    NodoTrinario* n9 = new NodoTrinario(8);

    arbol.raiz=n1;
    n1->hijo_derecho=n2;
    n1->hijo_medio=n3;
    n1->hijo_izquierdo=n4;
    n2->hijo_derecho=n5;
    n2->hijo_izquierdo=n6;
    n2->hijo_medio=n7;
    n3->hijo_izquierdo=n8;
    n3->hijo_medio=n9;

    arbol.imprimir(n1);

    if (arbol.existe(n1, 9))
    {
        cout<< "Existe"<<endl;
    }
    else
    {
        cout<<"No Existe"<<endl;
    }
    return 0;
}
