#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <list>
#ifndef PACIENTE_H
#define PACIENTE_H

using namespace std;

class Paciente{

	private:

		string dni_;
		string nombre_;
		string apellidos_;
		int numerotelefono_;
		int edad_; 
		string tipopaciente_;
		string direccion_;
		string direccionpostal_;
		int identificador_;
		string fechanacimiento_;
		
		
	public:

		Paciente(string dni, string nombre="", string apellidos="", int edad=0, string direccion="",  string direccionpostal="");
			
		void setDNI(string dni);
		inline string getDNI() const {return dni_;}
		void setIdentificador(int c);
		inline int getIdentificador() const {return identificador_;}
		void setNombre(string nombre);
		inline string getNombre() const {return nombre_;}
		void setApellidos(string apellidos);
		inline string getApellidos() const {return apellidos_;}
		void setFechanacimiento(string fechanacimiento);
		inline string getFechanacimiento() const {return fechanacimiento_;}
		bool setNumerotelefono(int numerotelefono);
		inline int getNumerotelefono() const{return numerotelefono_;}
		bool setEdad(int edad);
		inline int getEdad() const{return edad_;}
		void setTipopaciente(string tipopaciente);
		inline string getTipopaciente() const {return tipopaciente_;}
		void setDireccion(string direccion);
		inline string getDireccion() const {return direccion_;}
		void setDireccionPostal(string direccionpostal);
		inline string getDireccionPostal() const {return direccionpostal_;}

};


#endif


