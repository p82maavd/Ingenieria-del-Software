
**ID:** 09

**Descripción:**  Permitirá cambiar la fecha de una determinada cita.

**Actores Principales:** Administrador, Secretario, Doctor. 

**Actores Secundarios:** Paciente.

**Precondiciones:**

- Que haya al menos una cita.

**Flujo Principal:**

1. El Administrador desea mover las citas del día.
2. El Administrador selecciona la opción de visualizar las citas del día.
3. El sistema mostrará una vista previa de las citas del día.
4. El Administrador selecciona la opción de mover cita.
5. El Administrador selecciona una nueva fecha y hora disponible para la misma cita.

**Postcondiciones:**

- La cita seleccionada ha sida cambiada de lugar.

**Flujos alternativos:**

3.a. En el caso de que no haya ninguna cita, el sistema mostrara un mensaje en el que indicará que no hay ninguna cita.
5.a En caso de no mover la cita, el sistema regresará a la pantalla de búsqueda.
