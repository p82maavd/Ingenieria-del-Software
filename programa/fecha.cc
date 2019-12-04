#include <ctime>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getDate(){

	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char* output = ctime(&tiempo);
    strftime(output,40,"%d/%m/%Y",tlocal);
    return output;

}
