#include <iostream>
#include <string>
#include <cstdlib> 
#include "paciente.h"
#include <cstdio>



using namespace std;


Paciente::Paciente(string dni, string nombre, string apellidos, int edad, string direccion, string direccionpostal){
	dni_=dni; 
	nombre_=nombre; 
	apellidos_=apellidos; 
	direccion_=direccion; 
	edad_=edad;
    direccionpostal_=direccionpostal;
}


void Paciente::setDNI(string dni){

	dni_=dni;

}
void Paciente::setIdentificador(int c){

    identificador_=c;
}


void Paciente::setNombre(string nombre){

	nombre_=nombre;
}


void Paciente::setApellidos(string apellidos){

	apellidos_=apellidos;
}

bool Paciente::setEdad(int edad){

    if (edad>=0){
        edad_=edad;
        return true;
    }
    else
        return false;
}

bool Paciente::setNumerotelefono(int numerotelefono){

    if (numerotelefono>=0){
        numerotelefono_=numerotelefono;
        return true;
    }
    else
        return false;

}

void Paciente::setTipopaciente(string tipopaciente){

	tipopaciente_=tipopaciente;
}


void Paciente::setDireccion(string direccion){

	direccion_=direccion;
}

void Paciente::setDireccionPostal(string direccionpostal){

    direccionpostal_=direccionpostal;
}

void Paciente::setFechanacimiento(string fechanacimiento){

    fechanacimiento_=fechanacimiento;
}





