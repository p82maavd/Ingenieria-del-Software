all: programa

programa: citas.o clinica.o historial.o paciente.o programaprincipal.o tratamientos.o
	g++ -std=gnu++11 -o programa citas.o clinica.o historial.o paciente.o programaprincipal.o tratamientos.o

citas.o: citas.cc
	g++ -std=gnu++11 -c citas.cc

clinica.o: clinica.cc
	g++ -std=gnu++11 -c clinica.cc

historial.o: historial.cc
	g++ -std=gnu++11 -c historial.cc

paciente.o: paciente.cc
	g++ -std=gnu++11 -c paciente.cc

programaprincipal.o: programaprincipal.cpp
	g++ -std=gnu++11 -c programaprincipal.cpp

tratamientos.o: tratamientos.cc
	g++ -std=gnu++11 -c tratamientos.cc

