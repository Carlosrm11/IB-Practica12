#include <iostream>
#include "complejo.h"


int main(){
Complejo complejo1(3,2);
Complejo complejo2(8,1);

complejo1.imprimir();
complejo2.imprimir();

Complejo result;
result.suma(complejo1, complejo2);
result.imprimir();
result.resta(complejo1,complejo2);
result.imprimir();




}