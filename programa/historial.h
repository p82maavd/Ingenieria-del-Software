#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <list>
#include "paciente.h"
#ifndef HISTORIAL_H
#define HISTORIAL_H

using namespace std;


class Historial{

	private:

        Paciente p_;
        string fecha_;
        string observaciones_;
        
        
        
		
	public:

		Historial(Paciente p):p_(p){ p_=p;};

        void setFecha();
        inline string getFecha() const {return fecha_;}
        void setObservaciones(string observaciones);
        inline string getObservaciones() const {return observaciones_;}
        

};


#endif
