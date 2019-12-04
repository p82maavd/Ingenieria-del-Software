#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <list>
#include "paciente.h"
#ifndef CITA_H
#define CITA_H

using namespace std;


class Citas{

	private:

        Paciente p_;
        string fecha_;
        string motivo_;
        string hora_;
        string identificador_;
		
	public:

		Citas(Paciente p):p_(p){ p_=p;};

        void setFecha(string fecha);
        inline string getFecha() const {return fecha_;}
        void setHora(string hora);
        inline string getHora() const {return hora_;}
        void setMotivo(string motivo);
        void setIdentificador(string identificador);
        string getIdentificador();
        Paciente getPacientecita();
        inline string getMotivo() const {return motivo_;}
        

};


#endif
