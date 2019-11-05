**ID:** 06

**Descripción:** Se registrara una cita asociada a un paciente y a una determinada fecha en el sistema 

**Actores Principales:** Administrador. 

**Actores Secundarios:** Paciente.

**Precondiciones:**
- Al menos un paciente en el registro.
- Disponibilidad de fecha y hora.

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
