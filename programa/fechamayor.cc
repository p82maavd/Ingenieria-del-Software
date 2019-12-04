#include <list>
#include <iostream>
#include <string>
using namespace std;


bool comprobarFechas(string/*fecha nacimiento*/ fecha1, string/*fecha actual*/ fecha2){

	int cero1, uno1, tres1, cuatro1,seis1,siete1,ocho1,nueve1,mes1, dias1,anos1;
	string scero1,suno1,stres1,scuatro1,sseis1,ssiete1,socho1,snueve1,sdias1,smes1,sanos1;
	int cero2, uno2, tres2, cuatro2, seis2,siete2,ocho2,nueve2,mes2, dias2,anos2;
	string scero2,suno2,stres2,scuatro2, sseis2, ssiete2, socho2, snueve2, sdias2,smes2,sanos2;

	scero1=fecha1.substr(0,1);
	cero1=stoi(scero1);
	suno1=fecha1.substr(1,1);
	uno1=stoi(suno1);
	sdias1=scero1+suno1;
	dias1=stoi(sdias1);
	stres1=fecha1.substr(3,1);
	tres1=stoi(stres1);
	scuatro1=fecha1.substr(4,1);
	cuatro1=stoi(scuatro1);
	sseis1=fecha1.substr(6,1);
	seis1=stoi(sseis1);
	ssiete1=fecha1.substr(7,1);
	siete1=stoi(ssiete1);
	socho1=fecha1.substr(8,1);
	ocho1=stoi(socho1);
	snueve1=fecha1.substr(9,1);
	nueve1=stoi(snueve1);
	sanos1=sseis1+ssiete1+socho1+snueve1;
	anos1=stoi(sanos1);
	smes1=stres1+scuatro1;
	mes1=stoi(smes1);


	scero2=fecha2.substr(0,1);
	cero2=stoi(scero2);
	suno2=fecha2.substr(1,1);
	uno2=stoi(suno2);
	sdias2=scero2+suno2;
	dias2=stoi(sdias2);
	stres2=fecha2.substr(3,1);
	tres2=stoi(stres2);
	scuatro2=fecha2.substr(4,1);
	cuatro2=stoi(scuatro2);
	sseis2=fecha2.substr(6,1);
	seis2=stoi(sseis2);
	ssiete2=fecha2.substr(7,1);
	siete2=stoi(ssiete2);
	socho2=fecha2.substr(8,1);
	ocho2=stoi(socho2);
	snueve2=fecha2.substr(9,1);
	nueve2=stoi(snueve2);
	sanos2=sseis2+ssiete2+socho2+snueve2;
	anos2=stoi(sanos2);
	smes2=stres2+scuatro2;
	mes2=stoi(smes2);

	if ( anos1<anos2 ){
        return true;
	}
	else if (anos1>anos2)
			return false;
    else{
        if ( mes1<mes2 )
            return true;
	    else if (mes1>mes2)
			return false;
        else{
            if ( dias1<dias2 or dias1==dias2 ){
                return true;
			}
	        else if (dias1>dias2)
			    return false;
        }
		
    }
	
}
