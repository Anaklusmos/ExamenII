#include <iostream>
#include "NodoTrinario.h"

using namespace std;

NodoTrinario::NodoTrinario(int num)
{
    this->num=num;
    hijo_medio=NULL;
    hijo_derecho=NULL;
    hijo_izquierdo=NULL;
    //ctor
}

NodoTrinario::~NodoTrinario()
{
    //dtor
}
