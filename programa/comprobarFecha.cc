#include <list>
#include <iostream>
#include <string>

bool comprobarFecha(string fecha){
	
	if(fecha.size()!=10 )
		return false;

	int cero, uno, tres, cuatro, mes, dias;
	string scero,suno,stres,scuatro,sdias,smes;

	scero=fecha.substr(0,1);
	cero=stoi(scero);
	suno=fecha.substr(1,1);
	uno=stoi(suno);
	sdias=scero+suno;
	dias=stoi(sdias);
	stres=fecha.substr(3,1);
	tres=stoi(stres);
	scuatro=fecha.substr(4,1);
	cuatro=stoi(scuatro);
	/*sseis=fecha.substr(6,1);
	seis=stoi(sseis);
	ssiete=fecha.substr(7,1);
	siete=stoi(ssiete);
	socho=fecha.substr(8,1);
	ocho=stoi(socho);
	snueve=fecha.substr(9,1);
	nueve=stoi(snueve);*/ //El año puede ser cualquiera.
	smes=stres+scuatro;
	mes=stoi(smes);

	if (fecha[2]!='/' or fecha[5]!='/' or dias>31 or mes >12 ){

		return false;
	}

	return true;
}
