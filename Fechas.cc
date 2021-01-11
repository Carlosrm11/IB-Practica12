#include "fechas.h"

Fecha::Fecha(int d, int m, int a, int n){
    dia_ = d;
    mes_ = m;
    anio_ = a;
    n_ = n;
}

Fecha::Fecha(){
    dia_=0;
    mes_=0;
    anio_=0;
    n_=0;
}

Fecha::~Fecha(){

}


bool Fecha::es_bisiesto(){
    if((anio_ % 4 == 0) && (anio_ % 100 != 0)){
        std::cout << "Año = " << anio_ << "\n";
        return true;
    }
    return false;
}


void Fecha::escribir_ficheros(std::string fichero){

    std::ofstream f1;
    int aux = dia_;

    f1.open(fichero);

    for(int i= 0; i < n_; i++){
        aux +=2;
        f1 << aux <<  "/" << mes_ <<  "/" << anio_  << "\n";
    }

    f1.close();
}
