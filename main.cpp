#include <iostream>
#include "ArbolTrinario.h"
#include "NodoTrinario.h"
using namespace std;

int main()
{
    ArbolTrinario arbol;
    cout<<"Hola"<<endl;

    NodoTrinario* n1 = new NodoTrinario(0);

    arbol.agregarNodo(n1);

    arbol.imprimir(n1);
    if (arbol.existe(n1, 0))
    {
        cout<< "Existe"<<endl;
    }
    else
    {
        cout<<"No Existe"<<endl;
    }
    return 0;
}
