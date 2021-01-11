#include <iostream>
#include "modificacion_complejo.h"


int main(){
Complejo complejo1(3,2);
Complejo complejo2(8,1);

complejo1.imprimir();
complejo2.imprimir();

Complejo result;
result.suma(complejo1, complejo2);
std::cout << "El resultado de la suma es: ";
result.imprimir();
std::cout << "El resultado de la resta es: ";
result.resta(complejo1,complejo2);
result.imprimir();
std::cout << "El resultado de la resta del complejo mas el real es: ";
result.resta_real(complejo1,4);
result.imprimir();




}