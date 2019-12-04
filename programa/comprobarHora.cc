#include <list>
#include <iostream>
#include <string>

bool comprobarHora(string hora){

	int cero, tres, horas, minutos;
	string scero, stres, shoras, sminutos;
	
	if(hora.size()!=5)
		return false;

	scero=hora.substr(0,1);
	cero=stoi(scero);
	stres=hora.substr(3,1);
	tres=stoi(stres);

	shoras=hora.substr(0,2);
	horas=stoi(shoras);

	sminutos=hora.substr(3,2);
	minutos=stoi(sminutos);



	if (hora[2]!=':' or cero>2 or tres > 5 or horas > 23 or minutos >59){

		return false;
	}

	return true;
}
