#include "complejo.h"

Complejo::Complejo(int n, int m){
    a_ = n;
    b_ = m;
}
Complejo::Complejo(){
    a_ = 0;
    b_ = 0;
}
Complejo::~Complejo(){}

void Complejo::imprimir(){
    if(b_ >= 0){
       std::cout << "z = " << a_ << " + " <<  b_ << "i\n";
    }else{
       std::cout << "z = " << a_ << " - " <<  b_ << "i\n";
    }
}
void Complejo::suma(Complejo A, Complejo B){
    a_ = A.get_a() + B.get_a();
    b_ = A.get_b() + B.get_b();
}
int Complejo::get_a(){
    return a_;
}
int Complejo::get_b(){
    return b_;
}
void Complejo::resta(Complejo A, Complejo B){
    a_ = A.get_a() - B.get_a();
    b_ = A.get_b() - B.get_b();
}