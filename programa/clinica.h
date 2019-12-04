#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "paciente.h"
#include "historial.h"
#include "citas.h"
#include "tratamientos.h"

#ifndef CLINICA_H
#define CLINICA_H

using namespace std;

class Clinica{

    private:
        list <Paciente> listapacientes_;
		list <Historial> listahistorial_;
		list <Citas> listacitas_;
		list <Tratamientos> listatratamientos_;
		

    public:

        void addPaciente();
		void getPacientes();
		void guardaPacientes(); //siempre se ejecuta al final
		void cargaPacientes(); //siempre se ejecuta al inicio
		Paciente &getPaciente();
		void getPaciente2();
		void modificarPaciente();
		void addHistorial();
		void getHistorial();
		void addCita();
		void guardaCitas();
		void cargaCitas();
		void citasPaciente();
		void citasDia();
		void modificarCitas();
		void eliminarCitas();
		void addTratamiento();
		void guardaTratamientos();
		void cargaTratamientos();
		void tratamientosPaciente();
		void eliminarTratamiento();

};

#endif
