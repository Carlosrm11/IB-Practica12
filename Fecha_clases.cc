#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "fechas.h"

int main(int argc , char *agrv[]){
    int n = atoi(agrv[2]);
    std::string f = agrv[1];
    std::string fichero = agrv[3];

    std::string aux; 
    int dia;
    int mes;
    int anio;
    aux.push_back(f[0]);
    aux.push_back(f[1]);
    dia = stoi(aux);
    aux.clear();
    aux.push_back(f[3]);
    aux.push_back(f[4]);
    mes = stoi(aux);
    aux.clear();
    aux.push_back(f[6]);
    aux.push_back(f[7]);
    anio = stoi(aux);

    if(mes > 0 && mes <=12 ){
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12 ){
            if (dia > 31 || dia < 0){
                std::cout << "Dia introducido incorreecto \n";
                return 0;
            }
            }else{
                if(mes != 2){
                    if (dia > 30 || dia < 0){
                        std::cout << "Dia introducido incorreecto \n";
                        return 0;
                }
                 }else{
                     if( dia > 28 || dia < 0){
                         std::cout << "Dia introducido incorreecto \n";
                        return 0;
                     }
                 }
        }
    }else{
        std::cout << "El mes no es corrector \n";
        return 0;
    }

   Fecha date(dia,mes,anio,n);

    if(date.es_bisiesto()){
        std::cout << "Es bisiesto" << "\n";
    }else{
        std::cout << "No es bisiesto" << "\n";

    }
    
    date.escribir_ficheros(fichero);

}