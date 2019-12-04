#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <list>
#include "paciente.h"
#ifndef TRATAMIENTOS_H
#define TRATAMIENTOS_H

using namespace std;


class Tratamientos{

	private:

        Paciente p_;
        string medicamentos_;
        string dosis_;
        string regularidad_;
        string fechainicio_;
        string fechafinal_; //If fecha final anterior a fecha actual eliminar tratamiento.
        string identificador_;
		
	public:

		Tratamientos(Paciente p):p_(p){ p_=p;};

        void setFechainicio(string fechainicio);
        inline string getFechainicio() const {return fechainicio_;}
        void setFechafinal(string fechafinal);
        inline string getFechafinal() const{return fechafinal_;}
        void setIdentificador(string identificador);
        inline string getIdentificador() const {return identificador_;}
        Paciente getPacientetratamiento();
        inline string getRegularidad() const {return regularidad_;}
        void setRegularidad(string regularidad);
        inline string getDosis() const {return dosis_;}
        void setDosis(string dosis);
        inline string getMedicamentos() const {return medicamentos_;}
        void setMedicamentos(string medicamentos);


};


#endif