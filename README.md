# proyectois
Proyecto Ingeniería del Software

Proyecto IS

Datos personales, Dirección Postal, Fecha de Nacimiento, Teléfono, Privado/Seguro (Empresa), Historial Médico, Tratamiento, Citas Registradas, Fecha y duración de la misma, Ordenación por fechas, SO: Linux, +200 Pacientes, Fecha Límite: 23-12.


- Conservar Tratamiento Pasado.
- Posibilidad de Edición de tratamiento en curso.
- Edición de datos personales.


Partes interesadas:
Centro Clínico.
Datos que gestiona el sistema:
Pacientes(+200):
Nombre.
Apellidos.
Teléfono.
Dirección Postal.
Fecha de Nacimiento.
Tipo de paciente (Privado/Público).
Historial Médico (Enfermedad, Problema, etc..).
Tratamiento (Dósis, Regularidad).
Citas Registradas.
Fecha última modificación.
Requisitos funcionales:
Añadir nuevo usuario.
Mostrar una lista de los usuarios.
Buscar usuario por nombre y apellidos.
Modificar datos personales de paciente.
Modificar datos clínicos del paciente.



Requisitos no funcionales
Sistema operativo Linux.
Interfaz CLI.
Lenguaje de implementación: C++.
Máximo 10 GiB de almacenamiento.







**Añadir nuevo usuario.**

**ID:** 01 
**Descripción:** Se introducirán los datos tanto personales (Nombre, Apellidos, Número de teléfono…) como clínicos (Tipo de paciente, historial médico…) del paciente.
**Actores Principales:** Administrador. 
**Actores Secundarios:** Paciente.

**Precondiciones:**
Ninguna.

**Flujo Principal:**
El Administrador desea añadir un nuevo usuario a la lista.
El Administrador selecciona la opción de añadir nuevo paciente.
El Administrador introducirá los datos personales del paciente.
El Administrador introducirá los datos clínicos del paciente.
El sistema añadirá al nuevo paciente a la lista.
**Postcondiciones:**
Se muestran al Administrador una vista previa de la ficha del paciente.

**Flujos alternativos:**
5.a. En caso de no aportar datos suficientes el sistema no añadirá paciente y volverá a pedir los datos.



**Mostrar la lista de pacientes.**

**ID:** 02
**Descripción:** Se mostrará una lista con todos los pacientes registrados en la base de datos hasta la fecha.
**Actores Principales:** Administrador. 
**Actores Secundarios:** Paciente.

**Precondiciones:**
Debe haberse introducido al menos un paciente en el registro.
**Flujo Principal:**
El Administrador desea revisar la lista de pacientes.
El Administrador selecciona la opción que le permitirá revisar la lista del menú.
El sistema mostrará el nombre y apellido de los pacientes.
El Administrador podrá seleccionar un paciente para obtener información más detallada del mismo.
Postcondiciones:
En caso de seleccionar un paciente se mostrarán distintas operaciones relativas al mismo.

Flujos alternativos:
4.a. En caso de que el administrador no quiera realizar ninguna acción en referencia al paciente, se retornará a la lista principal de pacientes.



Buscar usuario por nombre y apellido.

ID: 03
Descripción: Se introduce el nombre y apellido del paciente que se busca y el sistema mostrará la ficha del mismo
Actores Principales: Administrador. 
Actores Secundarios: Paciente.

Precondiciones:
Al menos un paciente en el registro.

Flujo Principal:
El Administrador desea consultar los datos de un paciente.
El Administrador selecciona la opción que le permitirá revisar la lista del menú.
El Administrador selecciona dentro de la lista seleccionará la opción que le permitirá buscarlos por nombre y apellido.
El Administrador introduce el nombre y apellido del paciente.
El sistema muestra la ficha del paciente.
Postcondiciones:
Se muestran al Administrador las distintas operaciones relativas al paciente.

Flujos alternativos:
5.a. Si no existe el paciente, se muestra un mensaje de error y devuelve a la lista.



Modificar datos personales del paciente.

ID: 04
Descripción: Se introducirán unos nuevos datos personales al paciente seleccionado, dando la posibilidad de cambiar su nombre, apellidos, número de teléfono, dirección postal, etc.
Actores Principales: Administrador. 
Actores Secundarios: Paciente.

Precondiciones:
Al menos un paciente en el registro.

Flujo Principal:
El Administrador desea modificar los datos de un paciente.
El Administrador selecciona la opción que le permitirá revisar la lista del menú.
El Administrador selecciona un paciente dentro de la lista.
El Administrador seleccionará la opción de modificar datos personales del paciente.
El Administrador realizará todos los cambios pertinentes.
El sistema mostrará una vista previa de la nueva ficha del paciente.
Postcondiciones:
Al finalizar la edición, se muestran al Administrador las distintas operaciones relativas al paciente.

Flujos alternativos:
5.a. En caso de no realizar ningún cambio el sistema devolverá al Administrador a la lista de pacientes.
Modificar datos clínicos del paciente.

ID: 05
Descripción: Se introducirán unos nuevos datos clínicos al paciente seleccionado, dando la posibilidad de cambiar su tipo de paciente, historial médico, tratamiento, etc.
Actores Principales: Administrador. 
Actores Secundarios: Paciente.

Precondiciones:
Al menos un paciente en el registro.

Flujo Principal:
El Administrador desea modificar los datos de un paciente.
El Administrador selecciona la opción que le permitirá revisar la lista del menú.
El Administrador selecciona un paciente dentro de la lista.
El Administrador seleccionará la opción de modificar datos clínicos del paciente.
El Administrador realizará todos los cambios pertinentes.
El sistema mostrará una vista previa de la nueva ficha del paciente.
Postcondiciones:
Al finalizar la edición, se muestran al Administrador las distintas operaciones relativas al paciente.

Flujos alternativos:
5.a. En caso de no realizar ningún cambio el sistema devolverá al Administrador a la lista de pacientes.

