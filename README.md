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

- Ninguna.

**Flujo Principal:**

1. El Administrador desea añadir un nuevo usuario a la lista.

2. El Administrador selecciona la opción de añadir nuevo paciente.

3. El Administrador introducirá los datos personales del paciente.

4. El Administrador introducirá los datos clínicos del paciente.

5. El sistema añadirá al nuevo paciente a la lista.

**Postcondiciones:**

- Se muestran al Administrador una vista previa de la ficha del paciente.

**Flujos alternativos:**

5.a. En caso de no aportar datos suficientes el sistema no añadirá paciente y volverá a pedir los datos.

---

**Mostrar la lista de pacientes.**

**ID:** 02

**Descripción:** Se mostrará una lista con todos los pacientes registrados en la base de datos hasta la fecha.

**Actores Principales:** Administrador. 

**Actores Secundarios:** Paciente.

**Precondiciones:**

- Debe haberse introducido al menos un paciente en el registro.

**Flujo Principal:**

1. El Administrador desea revisar la lista de pacientes.
2. El Administrador selecciona la opción que le permitirá revisar la lista del menú.
3. El sistema mostrará el nombre y apellido de los pacientes.
4. El Administrador podrá seleccionar un paciente para obtener información más detallada del mismo.

**Postcondiciones:**

- En caso de seleccionar un paciente se mostrarán distintas operaciones relativas al mismo.

**Flujos alternativos:**

4.a. En caso de que el administrador no quiera realizar ninguna acción en referencia al paciente, se retornará a la lista principal de pacientes.

---

**Buscar usuario por nombre y apellido.**

**ID:** 03

**Descripción:** Se introduce el nombre y apellido del paciente que se busca y el sistema mostrará la ficha del mismo

**Actores Principales:** Administrador. 

**Actores Secundarios:** Paciente.

**Precondiciones:**
- Al menos un paciente en el registro.

**Flujo Principal:**
1. El Administrador desea consultar los datos de un paciente.
2. El Administrador selecciona la opción que le permitirá revisar la lista del menú.
3. El Administrador selecciona dentro de la lista seleccionará la opción que le permitirá buscarlos por nombre y apellido.
4. El Administrador introduce el nombre y apellido del paciente.
5. El sistema muestra la ficha del paciente.

**Postcondiciones:**
- Se muestran al Administrador las distintas operaciones relativas al paciente.

**Flujos alternativos:**
5.a. Si no existe el paciente, se muestra un mensaje de error y devuelve a la lista.

---

**Modificar datos personales del paciente.**

**ID:** 04

**Descripción:** Se introducirán unos nuevos datos personales al paciente seleccionado, dando la posibilidad de cambiar su nombre, apellidos, número de teléfono, dirección postal, etc.

**Actores Principales:** Administrador. 

**Actores Secundarios:** Paciente.

**Precondiciones:**
- Al menos un paciente en el registro.

**Flujo Principal:**
1. El Administrador desea modificar los datos de un paciente.
2. El Administrador selecciona la opción que le permitirá revisar la lista del menú.
3. El Administrador selecciona un paciente dentro de la lista.
4. El Administrador seleccionará la opción de modificar datos personales del paciente.
5. El Administrador realizará todos los cambios pertinentes.
6. El sistema mostrará una vista previa de la nueva ficha del paciente.

**Postcondiciones:**
- Al finalizar la edición, se muestran al Administrador las distintas operaciones relativas al paciente.

**Flujos alternativos:**
5.a. En caso de no realizar ningún cambio el sistema devolverá al Administrador a la lista de pacientes.

---

**Modificar datos clínicos del paciente.**

**ID:** 05

**Descripción:** Se introducirán unos nuevos datos clínicos al paciente seleccionado, dando la posibilidad de cambiar su tipo de paciente, historial médico, tratamiento, etc.

**Actores Principales:** Administrador. 

**Actores Secundarios:** Paciente.

**Precondiciones:**
- Al menos un paciente en el registro.

**Flujo Principal:**
1. El Administrador desea modificar los datos de un paciente.
2. El Administrador selecciona la opción que le permitirá revisar la lista del menú.
3. El Administrador selecciona un paciente dentro de la lista.
4. El Administrador seleccionará la opción de modificar datos clínicos del paciente.
5. El Administrador realizará todos los cambios pertinentes.
6. El sistema mostrará una vista previa de la nueva ficha del paciente.

**Postcondiciones:**
- Al finalizar la edición, se muestran al Administrador las distintas operaciones relativas al paciente.

**Flujos alternativos:**
5.a. En caso de no realizar ningún cambio el sistema devolverá al Administrador a la lista de pacientes.

---

**Concertar una cita**

**ID:** 06

**Descripción:** Se registrara una cita asociada a un paciente y a una determinada fecha en el sistema 

**Actores Principales:** Administrador. 

**Actores Secundarios:** Paciente.

**Precondiciones:**
-Al menos un paciente en el registro.
-Disponibilidad de fecha y hora.

**Flujo Principal:**
1. El Administrador desea registrar una cita en el sistema.
2. El Administrador selecciona la opción de concertar una cita.
3. El sistema requerirá la introducción del identificador del paciente y la selección de una fecha y hora con disponibilidad
4. El Administrador proporcionará dichos datos.
5. El sistema registrará dicha cita.

**Postcondiciones:**
- Al terminar la introducción de datos el sistema devolverá al Administrador al registro de citas.

**Flujos alternativos:**
4.a. En caso de no realizar ningún cambio el sistema devolverá al Administrador a la lista de pacientes.

---

**Mostrar citas del día**

**ID:** 07

**Descripción:** Mostrará todas las citas y el nombre de los pacientes que hayan sido registradas en el sistema para el dia en el que se realize

**Actores Principales:** Administrador. 

**Actores Secundarios:** Paciente.

**Precondiciones:**
-Al menos un paciente en el registro.
-Que haya al menos una cita.

**Flujo Principal:**
1. El Administrador desea visualizar las citas del día.
2. El Administrador selecciona la opción de visualizar las citas del día.
3. El sistema mostrará una vista previa de las citas del día.


**Postcondiciones:**
- Las citas son mostradas.

**Flujos alternativos:**
3.a. En el caso de que no haya ninguna cita, el sistema mostrará un mensaje en el que indicará que no hay ninguna cita.

---

**Historia de Usuario**

**ID:** 01        **Nombre:** Añadir nuevo usuario
**Prioridad(de 1 a 10): 10        Puntos Estimado: 3    Iteración: 1**

**Responsable:** Miguel Ángel Romero.

**Descripción:** Se introducirán los datos tanto personales del paciente.

**Validación:**
-El paciente no puede estar registrado con anterioridad.
-Se debe introducir nombre.
-Se debe introducir apellidos.
-Se debe introducir teléfono.
-Se debe introducir dirección postal.
-Se debe introducir fecha de nacimiento.
-Se debe introducir tipo de paciente (Privado/Público).
-Se debe introducir historial médico (Enfermedad, Problema, etc..).
-Se debe introducir tratamiento (Dósis, Regularidad).
-Se debe introducir citas registradas.
-Todos los datos nombrados anteriormente deben ser verídicos.

---

**Historia de Usuario**

**ID:** 02         **Nombre:** Mostrar la lista de pacientes.

**Prioridad(de 1 a 10): 7        Puntos Estimado: 3    Iteración: 1**
**Responsable:** Hugo Romero.
**Descripción:** Como Administrador quiero una lista que muestre los datos de los distintos pacientes, previamente introducidos.
**Validación:**
-Debe aparecer el nombre y apellido de los pacientes a modo de vista previa.
-La ficha del paciente debe poder ampliarse al seleccionarse.
-Se mostrará información más detallada al seleccionarse.
-Al seleccionarse un paciente también aparecerán distintas opciones en referencia al mismo.

---

**Historia de Usuario**

**ID:** 03         **Nombre:** Buscar usuario por nombre y apellidos.

**Prioridad(de 1 a 10): 7        Puntos Estimado: 3    Iteración: 1**
**Responsable:** Hugo Romero.
**Descripción:** Como Administrador quiero una lista que muestre los datos de los distintos pacientes, previamente introducidos.
**Validación:**
-Se debe poder localizar cualquier usuario.
-Los resultados de la búsqueda pueden mostrar cero o más resultados.
-No es necesario utilizar el nombre completo.
-Se debe mostrar la posición en la lista del paciente.
-Se debe mostrar las operaciones posibles sobre el usuario.

---

**Historia de Usuario**

**ID:** 04        **Nombre:** Modificar datos personales del paciente

**Prioridad(de 1 a 10): 8        Puntos Estimado: 3    Iteración: 1**
**Responsable:** Miguel Ángel Romero.
**Descripción:** Se introducirán unos nuevos datos personales al paciente seleccionado
**Validación:**
-El paciente debe estar registrado con anterioridad.
-Se debe introducir nombre.
-Se debe introducir apellidos.
-Se debe introducir teléfono.
-Se debe introducir dirección postal.
-Se debe introducir fecha de nacimiento.
-Todos los datos nombrados anteriormente deben ser verídicos.

---

**Historia de Usuario**

**ID:** 05        **Nombre:** Modificar datos clínicos del paciente

**Prioridad(de 1 a 10): 9        Puntos Estimado: 3    Iteración: 1**
**Responsable:** Miguel Ángel Romero.
**Descripción:** Se introducirán unos nuevos datos clínicos del paciente seleccionado.
**Validación:**
-El paciente debe estar registrado con anterioridad.
-Se debe introducir tipo de paciente (Privado/Público).
-Se debe introducir historial médico (enfermedad, problema, etc..).
-Se debe introducir tratamiento (dósis, regularidad).
-Todos los datos nombrados anteriormente deben ser verídicos.



