
**Clase:** Pacientes

Esta clase contendrá las funciones destinadas a los pacientes, como añadir un nuevo paciente, buscar un paciente por su nombre o apellidos  o modificar algun dato de los pacientes.

**Datos:**

- nombre_           Tipo: String  Descripción: Nombre del Paciente.
- apellidos_        Tipo: String  Descripción: Apellidos del Paciente.
- dni_              Tipo: String  Descripción: Numero de DNI del Paciente.
- numerotelefono_         Tipo: Integer Descripción: Numero de Telefono del Paciente.
- direccionpostal_    Tipo: String  Descripción: Codigo Postal del Paciente.
- fechanacimiento_ Tipo: Date    Descripción: Fecha de Nacimiento del Paciente.
- tipopaciente_    Tipo: String  Descripción: Indica si el Paciente proviene de la sanidad pública o privada (Privado || Público)
- direccion           Tipo: String Descripcion: Direccion del paciente
- edad_      Tipo: Integer Descripcion: Edad del paciente.

**Métodos:**

+ setDNI Descripción: Función que asigna un nuevo valor a la variable dni_.
+ getDNI Descripción: Función que devuelve el DNI de un paciente.
+ setNombre Descripción: Función que asigna un nuevo valor a la variable nombre_.
+ getNombre Descripción: Función que devuelve el nombre de un paciente.
+ setApellidos Descripción: Función que asigna un nuevo valor a la variable apellidos_.
+ getApellidos Descripción: Función que devuelve los apellidos de un paciente.
+ setNumerotelefono Descripción: Función que asigna un nuevo valor a la variable numerotelefono_.
+ getNumerotelefono Descripción: Función que devuelve el numero de telefono de un paciente.
+ setFechanacimiento Descripción: Función que asigna un nuevo valor a la variable fechanacimiento_.
+ getFechanacimiento Descripción: Función que devuelve la fecha de nacimiento de un paciente.
+ setEdad Descripción: Función que calcula la edad dependiendo de la fecha de nacimiento y la asigna a la variable edad_.
+ getEdad Descripción: Función que devuelve la edad de un paciente.
+ setDireccion Descripción: Función que asigna un nuevo valor a la variable direccion_.
+ getDireccion Descripción: Función que devuelve la direccion de un paciente.
+ setDireccionpostal Descripción: Función que asigna un nuevo valor a la variable direccionpostal_.
+ getDireccionpostal Descripción: Función que devuelve la direccion postal de un paciente.
+ setTipopaciente Descripción: Función que asigna un nuevo valor a la variable tipopaciente_.
+ getTipopaciente Descripción: Función que devuelve el tipo de paciente.
