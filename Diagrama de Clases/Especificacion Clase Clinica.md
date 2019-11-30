**Clase:** Clinica

Esta clase contendrá las funciones principales.

**Datos:**

- listapacientes_ Tipo: List <Paciente> Descripción: Lista con los pacientes de la clínica.
- listahistorial_: Tipo: List <Historial> Descripción: Lista con los historiales de los pacientes de la clinica.
- listatratamientos_ Tipo: List <Tratamiento> Descripción: Lista con los tratamientos de los pacientes de la clinica.

**Métodos:**

- addPaciente Descripción: Funcion que añade un nuevo paciente a la lista listapacientes_ y crea los archivos necesarios para cada nuevo usuario.
- guardaPacientes Descripción: Funcion que recorre la lista listapacientes_ y guarda todos sus elementos(pacientes) en un archivo.
- cargaPacientes Descripción: Función que lee del fichero los pacientes y los añade a la lista listapacientes_.
- getPaciente Descripción: Función que devuelve un paciente buscado por su nombre y apellidos.
- getPaciente2 Descripción: Funcion que muestra por pantalla la información del paciente buscado.
- modificarPaciente Descripción: Función que permite modificar los datos de un paciente.
- addHistorial Descripción: Función que añade un nuevo historial a la lista listahistorial_.
- getHistorial Descripción: Función que devuelve el historial de un paciente.
- addCita Descripción: Función que añade una nueva cita a la lista listacitas_.
- guardaCitas Descripción: Función que recorre la lista de citas y guarda todas las citas en el fichero de citas correspondiente de cada paciente.
- cargaCitas Descripción: Función que recorre la lista de los pacientes, y para cada uno abre su fichero correspondiente de citas, las lee y los añade a la lista de citas.
- citasPaciente Descripción: Función que muestra las citas de un determinado paciente. 
- citasDia Descripción: Función que muestra las citas del día actual.
- modificarCitas Descripción: Función que permite modificar los datos de una cita.
- eliminarCitas Descripción: Función que permite eliminar una determinada cita.
- addTratamiento Descripción: Función que añade un nuevo tratamiento a la lista listatratamientos_.
- guardaTratamientos Descripción: Función que recorre la lista de tratamientos y guarda todos los tratamiento en el fichero de tratamientos correspondiente de cada paciente.
- cargaTratamientos Descripción: Función que recorre la lista de los pacientes, y para cada uno abre su fichero correspondiente de tratamientos, los lee y los añade a la lista de tratamientos.
- tratamientosPaciente: Función que muestra los tratamientos de un determinado paciente.
- elimininarTratamientos: Función que permite eliminar un determinado tratamiento.
