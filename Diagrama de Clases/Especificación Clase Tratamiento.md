**Clase:** Tratamiento

Esta clase contendrá las funciones destinadas a los tratamientos, como añadir un nuevo tratamiento, eliminarlo o mostrar los tratamientos de un paciente.

**Datos:**

- p_ Tipo: Paciente Descripcion: Paciente al que se le ha asignado el tratamiento.
- medicamentos_   Tipo: String  Descripción: Nombre del medicamento.
- dosis_         Tipo: String  Descripción: Cantidad que debe tomar el paciente de medicamento.
- regularidad_   Tipo: String  Descripción: Cada cuanto tiempo debe tomar el paciente el medicamento.
- fechainicio_   Tipo: Date Descripción: Fecha de inicio del tratamiento. Formato dd/mm/yyyy
- fechafinal_    Tipo: Date  Descripción: Fecha final del tratamiento. Formato dd/mm/yyyy. Debe ser mayor o igual que la fecha de inicio. 


**Métodos:**

+ setMedicamentos Descripción: Función que asigna un nuevo valor a la variable medicamentos_.
+ getMedicamentos Descripción: Función que devuelve el medicamento de un tratamiento.
+ setDosis Descripción: Función que asigna un nuevo valor a la variable dosis_.
+ getDosis Descripción: Función que devuelve la dosis de un tratamiento.
+ setRegularidad Descripción: Función que asigna un nuevo valor a la variable regularidad_.
+ getRegularidad Descripción: Función que devuelve la regularidad de un tratamiento.
+ setFechainicio Descripción: Función que asigna un nuevo valor a la variable fechainicio_.
+ getFechainicio Descripción: Función que devuelve la fecha de inicio de un tratamiento.
+ setFechafinal Descripción: Función que asigna un nuevo valor a la variable fechafinal_.
+ getFechafinal Descripción: Función que devuelve la fecha final de un tratamiento.
+ setIdentificador Descripción: Función que asigna un nuevo valor a la variable identificador_.
+ getIdentificador Descripción: Función que devuelve el identificador de un tratamiento.
+ getPacientetratamiento Descripción: Función que devuelve el paciente al que ha sido asignado el tratamiento.

