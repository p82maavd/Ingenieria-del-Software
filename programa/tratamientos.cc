#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <list>
#include "tratamientos.h"


using namespace std;


void Tratamientos::setFechainicio(string fechainicio){

    fechainicio_= fechainicio;
}

void Tratamientos::setFechafinal(string fechafinal){

    fechafinal_= fechafinal;
}
void Tratamientos::setIdentificador(string identificador){

    identificador_= identificador;
}

Paciente Tratamientos::getPacientetratamiento(){

    return p_;
}

void Tratamientos::setRegularidad(string regularidad){

    regularidad_=regularidad;
}

void Tratamientos::setDosis(string dosis){

    dosis_=dosis;
}

void Tratamientos::setMedicamentos(string medicamentos){

    medicamentos_=medicamentos;
}

