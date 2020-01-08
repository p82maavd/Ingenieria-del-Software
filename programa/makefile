all: programa

programa: citas.o clinica.o historial.o paciente.o programaprincipal.o tratamientos.o
	g++ -o programa citas.o clinica.o historial.o paciente.o programaprincipal.o tratamientos.o

citas.o: citas.cc
	g++ -c citas.cc

clinica.o: clinica.cc
	g++ -c clinica.cc

historial.o: historial.cc
	g++ -c historial.cc

paciente.o: paciente.cc
	g++ -c paciente.cc

programaprincipal.o: programaprincipal.cpp
	g++ -c programaprincipal.cpp

tratamientos.o: tratamientos.cc
	g++ -c tratamientos.cc

