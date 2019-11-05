**ID:** 09

**Descripción:** Se encarga de eliminar las citas.

**Actores Principales:** Administrador, Secretario, Doctor. 

**Actores Secundarios:** Paciente.

**Precondiciones:**

- Al menos un paciente en el registro.
- Que haya al menos una cita.

**Flujo Principal:**

1. El Administrador desea eliminar una cita.
2. El Administrador selecciona la opción de mostrar usuario por nombre y apellidos..
3. El sistema mostrará los datos del usuario incluyendo citas si las hay.
4. Se selecciona la cita.
5. Se elige la opción de eliminar cita.

**Postcondiciones:**

- No debe mostrarse la cita eliminada.

**Flujos alternativos:**

3.a. En el caso de que no haya ninguna cita, el sistema mostrara un mensaje en el que indicará que no hay ninguna cita.
