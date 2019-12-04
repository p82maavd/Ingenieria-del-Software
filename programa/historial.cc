#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <list>
#include "historial.h"
#include "fecha.cc"

using namespace std;


void Historial::setFecha(){

    fecha_= getDate();
}

void Historial::setObservaciones(string observaciones){

    observaciones_= observaciones;
}
    

//void guardaHistorial(){

    //for (it = p.listahistorial.begin(); it != p.listahistorial.end(); ++it){
	    //fich << (*it).getFecha()<< ": " << (*it).getObservaciones() << "\n";
//}

/*void escribeHistorial(){

    list<Historial>::iterator it;

    for ( it = listahistorial_.begin(); it !=listahistorial_.end(); it++){
          cout << (*it).getFecha() << (*it).getObservaciones();
    }
*/
