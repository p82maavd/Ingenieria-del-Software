#include <fstream>
#include <list>
#include "clinica.h"
#include <iostream>

using namespace std;
int main(){
    Clinica m;
	int opcion=0;
	m.cargaPacientes();
	m.cargaCitas();
	m.cargaTratamientos();
	//Dividir los switch en paciente, citas, tratamientos e historial. Formato para fecha.
	string respuesta;
	cout << "\nOpciones a elegir: \n\n" << " 1. Añadir Paciente. \n" << " 2. Mostrar Pacientes. \n" << " 3. Modificar Paciente. \n" <<" 4. Buscar un paciente por nombre y apellidos. \n"<< " 5. Escribir en el historial. \n" << " 6. Ver Historial.\n" << " 7. Añadir Cita. \n" << " 8. Ver Citas de un Paciente. \n" << " 9. Ver citas del dia. \n" << " 10. Modificar Citas.\n" << " 11. Eliminar Citas.\n" << " 12. Añadir Tratamiento. \n" << " 13. Ver Tratamientos de un paciente. \n" << " 14. Eliminar un tratamiento. \n 15. Terminar.\n";
	string sopcion;
	getline(cin,sopcion);
	opcion=stoi(sopcion);

	while (opcion !=15){

		switch(opcion){

			case 1: m.addPaciente(); 
					m.guardaPacientes();
					m.cargaPacientes();
					break;

			case 2: m.getPacientes();
					break;

			case 3: m.modificarPaciente();
				m.guardaPacientes();
				m.cargaPacientes();
					break;
			case 4: m.getPaciente2();
					break;
			case 5: m.addHistorial();
					break;
			case 6: m.getHistorial();
					break;
			case 7: m.addCita();
					m.guardaCitas();
					m.cargaCitas();
					break;
			case 8: m.citasPaciente();
					break;
			case 9: m.citasDia();
					break;
			case 10: m.modificarCitas();
					m.guardaCitas();
					m.cargaCitas();
					break;
			case 11: m.eliminarCitas();
					 m.guardaCitas();
					 m.cargaCitas();
					 break;
			case 12: m.addTratamiento();
					 m.guardaTratamientos();
					 m.cargaTratamientos();
					 break;
			case 13: m.tratamientosPaciente();
					 break;
			case 14: m.eliminarTratamiento();
					 m.guardaTratamientos();
					 m.cargaTratamientos();
					 break;
		}
        cout << "¿Quiere Continuar?(Si/No) ";
		getline(cin,respuesta);
		
		if (respuesta == "Si" or respuesta=="SI" or respuesta == "si" or respuesta=="sI"){
			cout << "\nOpciones a elegir: \n\n" << " 1. Añadir Paciente. \n" << " 2. Mostrar Pacientes. \n" << " 3. Modificar Paciente. \n" <<" 4. Buscar un paciente por nombre y apellidos. \n"<< " 5. Escribir en el historial. \n" << " 6. Ver Historial.\n" << " 7. Añadir Cita. \n" << " 8. Ver Citas de un Paciente. \n" << " 9. Ver citas del dia. \n" << " 10. Modificar Citas.\n" << " 11. Eliminar Citas.\n" << " 12. Añadir Tratamiento. \n" << " 13. Ver Tratamientos de un paciente. \n" << " 14. Eliminar un tratamiento. \n 15. Terminar.\n";
			getline(cin,sopcion);
            		opcion=stoi(sopcion);
		}
		else{
			//m.guardaPacientes();
			opcion=15;
		}
				   
	}
			
}
