#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <list>
#include "citas.h"


using namespace std;


void Citas::setFecha(string fecha){

    fecha_= fecha;
}

void Citas::setMotivo(string motivo){

    motivo_= motivo;
}
void Citas::setIdentificador(string identificador){

    identificador_= identificador;
}

Paciente Citas::getPacientecita(){

    return p_;
}

string Citas::getIdentificador(){
    return identificador_;
}

void Citas::setHora(string hora){

    hora_=hora;
}