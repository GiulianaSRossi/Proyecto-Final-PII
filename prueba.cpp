#include <iostream>
using namespace std;

class Trabajador{
	
protected:
	//especifica el acceso a los miembros de clase de la lista 
	//hasta el siguiente especificador
	string nombre;
	string apellido;
	int dni;
	int numeroEmpleado;
	float salario;
	string profesion;
	
public:
	Trabajador (string, string, int, int, float, string);
	
	string get_nombre();
	string get_apellido();
	int get_dni();
	string get_email();
	string get_titulo();
	string get_actividad();
	float get_tiempo();
	int get_numeroEmpleado();
	float get_salario();
	string get_profesion();
	string get_puesto();
	
	void set_nombre(string);
	void set_apellido(string);
	void set_dni(int);
	void set_mail(string);
	void set_titulo(string);
	void set_actividad(string);
	void set_tiempo(float);
	void set_numeroEmpleado(int);
	void set_salario(float);
	void set_profesion(string);
	void set_puesto(string);
	
	void mostrarDatos();
};

Trabajador::Trabajador(string nom, string ap, int d, int numE, float s, string p) {
	nombre = nom;
	apellido = ap;
	dni = d;
	numeroEmpleado = numE;
	salario = s;
	profesion = p;
}

string Trabajador::get_nombre() {
	return nombre;
}
string Trabajador::get_apellido() {
	return apellido;
}
int Trabajador::get_dni() {
	return dni;
}
int Trabajador::get_numeroEmpleado() {
	return numeroEmpleado;
}
float Trabajador::get_salario() {
	return salario;
}
string Trabajador::get_profesion() {
	return profesion;
}
string Trabajador::get_email() {
	return email;
}
string Trabajador::get_titulo() {
	return titulo;
}
string Trabajador::get_actividad() {
	return actividad;
}
float Trabajador::get_tiempo() {
	return tiempo;
}
string Trabajador::get_puesto() {
	return puesto;
}


void Trabajador::set_nombre(string nom) {
	nombre=nom;
}
void Trabajador::set_apellido(string ap) {
	apellido=ap;
}
void Trabajador::set_dni(int DNI) {
	dni=DNI;
}
void Trabajador::set_mail(string mail) {
	email=mail;
}
void Trabajador::set_numeroEmpleado(int nmrEm) {
	numeroEmpleado=nmrEm;
}
void Trabajador::set_salario(float slr) {
	salario=slr;
}
void Trabajador::set_profesion(string prof) {
	profesion=prof;
}
void Trabajador::set_titulo(string tit) {
	titulo=tit;
}
void Trabajador::set_actividad(string act) {
	actividad=act;
}
void Trabajador::set_tiempo(float tiemp) {
	tiempo=tiemp;
}
void Trabajador::set_puesto(string puest) {
	puesto=puest;
}

void menu();
void limpiarPantalla ();

int main()
{
	system("Color 4C");
	
	system("Color 4C");
	
	system("Color 4F");
	
	int ctdClientes = 0;
	
	persona listaCliente[100];
	
	int opcionMenu = -1;
	
	while (opcionMenu != 0)
	{		
		menu();
		
		opcionMenu = ingresarNumero();
		
		switch (opcionMenu) 
		{
		case 1: 
			
			calificarParaPrestamo (listaCliente, ctdClientes);
			
			break;
			
		case 2:
			
			eliminarCliente (listaCliente, ctdClientes); 
			
			break;
			
		case 3: 
			
			buscarClienteNumero(listaCliente, ctdClientes); 
			
			break;
			
		case 4: cout <<"---IMPRIMIR CLIENTES---" << endl;
		
		listarClientes (listaCliente, ctdClientes);
		
		break;
		
		case 0: cout << "---------------SALIR---------------" << endl;
		
		break;
		
		default: 
			
			cout << "Opcion no valida, reingrese por favor." << endl;
			
			opcionMenu = -1;
			
			break;
		};
	}
}
void limpiarPantalla ()
{
	if (system("CLS")) system("clear");
}

void menu ()
{
	limpiarPantalla();
	
	cout << "BIENVENIDO" << endl;
	
	cout << "***********************************" << endl;
	
	cout << "1- AGREGAR EMPLEADO. "; << endl;
	
	cout << "2- ELIMINAR CLIENTE DEL SISTEMA. " << endl; 
	
	cout << "3- BUSQUEDA POR NUMERO DE CUENTA. " << endl;
	
	cout << "4- IMPRIMIR CLIENTES. " << endl;
	
	cout << "0- SALIR. " << endl;
	
	cout << "***********************************" << endl;
}

void calificarParaPrestamo (persona listaCliente[], int &ctdClientes)  
{
	limpiarPantalla();
	
	cout << "---CALIFICAR CLIENTE PARA PRESTAMO---" << endl << endl;
	
	int DNI;
	
	int indiceCliente = -1;
	
	cout << "INGRESE EL DNI:  " << endl; 
	
	DNI = ingresarNumero();
	
	if (existeClientePorDNI(listaCliente, ctdClientes, DNI)) 
	{
		cout << "El DNI nro " << DNI << " ya existe." << endl;
		
		indiceCliente = buscarClientePorDNI(listaCliente, ctdClientes, DNI); 
		
		getch();			
		
	}
	else 
	{
		
		cout << "POR FAVOR INGRESE EL NOMBRE COMPLETO DEL CLIENTE: " << endl; 
		
		//en getline cargan el dato, despues de escribir en la linea '233', lo guarda en el array, despues se le pasa el array a la mayuscula para que lo convierta y lo guarde en el mismo lugar
		
		std::getline(std::cin >> std::ws, listaCliente [ctdClientes].nombre);
		
		//expresamos de otra forma el 'cin' pero estamos usando la funcion 'ws' :: que significa una libreria para manejar espacios en blanco
		
		listaCliente [ctdClientes].nombre = mayuscula(listaCliente [ctdClientes].nombre); 
		
		//lo que yo guarde en nombre, se lo paso y que lo convierta a mayuscula y lo vuelva a guardar en nombre
		
	 //FALTA PEDIR MAIL
		
		for (int i = 0; i < 5; i ++)
		{
			cout << "MONTO RECIBO DE SUELDO " << i +1 << ":" << endl;
			
			cin >> listaCliente [ctdClientes].montoSueldo[i];
		}
		
		listaCliente[ctdClientes].numeroCliente = obtenerNumeroCliente(listaCliente, ctdClientes);
		
		indiceCliente = ctdClientes;
		
		ctdClientes ++; 
	}
	
	
	getch ();
}

void listarClientes (persona listaCliente[], int &ctdClientes)
{
	sort(listaCliente, listaCliente+ctdClientes, comparar); 
	
	//recibe la funcion como argumento, ya que la funcion 'sort' va a ordenar. Esta sabe el orden por que se especifica en la funcion comparar 
	
	//funcion compara es un argumento de la funcion 'sort'
	
	ofstream archivo("clientes.txt");
	
	archivo << "LISTADO DE CLIENTES" << "\n";
	
	archivo << "Cantidad de clientes: " << ctdClientes << "\n";
	
	archivo << "=============================================\n";
	
	
	if (ctdClientes > 0)
	{
		for (int i = 0; i < ctdClientes; i ++)
		{
			archivo << "DNI: "<< listaCliente [i].DNI << "\n";
			
			archivo << "NOMBRE: " << listaCliente [i].nombre << "\n";
			
			archivo << "NUMERO DE CUENTA: " <<  listaCliente [i].numeroCliente << "\n";
			
			for (int k = 0; k < 5; k++)
			{
				archivo << "MONTO SUELDO " << k+1 << ":" << listaCliente [i].montoSueldo[k]  << "\n";
			}
			archivo << "------------------------------------------\n";
		}
		
	}
	archivo << "=============================================\n";
	
	archivo << "Fin del listado.";
	
	archivo.close();
}

void buscarClienteNumero (persona listaCliente [], int ctdClientes)
{
	limpiarPantalla();
	
	cout << "---BUSQUEDA POR NUMERO DE CLIENTE---" << endl << endl;
	
	int nCliente, numeroClienteEncontrado = -1, i = 0;
	
	cout << "INGRESE EL NUMERO DE CUENTA: " << endl;
	
	nCliente = ingresarNumero();
	
	while (numeroClienteEncontrado == - 1 && i < ctdClientes) 
		
		//tiene dos condiciones por que se quiere dejar de recorrer el array cuando lo encuentro por eso usamos 'while'
		
		//si ya lo encontre quiero que termine, si no lo encuentro va a parar cuando la cantidad de clientes ya haya sido recorrida
		
	{ 
		if (listaCliente[i].numeroCliente == nCliente)  
		{
			numeroClienteEncontrado = i; 
			
			cout << "NOMBRE: " << listaCliente[i].nombre << endl; 
			
			cout << "DNI: " << listaCliente[i].DNI;
		}
		
		i ++; 
	}
	
	if (numeroClienteEncontrado == -1)
	{
		cout << "EL CLIENTE NO EXISTE";	
	}
	getch ();
}


void eliminarCliente(persona cliente[], int &ctdClientes) 
	
{
	limpiarPantalla();
	
	cout << "---ELIMINAR CLIENTE DEL SISTEMA---" << endl << endl;
	
	int i = 0, numero, numeroClienteEncontrado = -1; 
	
	//si yo no lo encuentro quieo que se quede en -1
	
	cout << "¿A QUE CLIENTE DESEA ELIMINAR DEL SISTEMA?" << endl;
	
	cout << "INGRESE EL NUMERO DE CUENTA: ";
	
	cin >> numero;
	
	while (numeroClienteEncontrado == - 1 && i < ctdClientes) 
		
		//tiene dos condiciones porque quiero dejar de recorrer el array cuando lo encuentro, por eso usamos 'while'
		
		//si ya lo encontre quiero que termine, si no lo encuentro va a parar cuando la cantidad de clientes ya haya sido recorrida
	{ 
		if (cliente[i].numeroCliente == numero)  
		{
			numeroClienteEncontrado = i; //estoy asiganado el valor aca 
			
			cliente[i].nombre = cliente[ctdClientes -1].nombre;
			
			cliente[i].DNI = cliente[ctdClientes -1].DNI;
			
			cliente[i].relacionDependencia = cliente[ctdClientes -1].relacionDependencia; 
			
			for (int k = 0; k < 5;k ++)
			{
				cliente[i].montoSueldo [k] = cliente[ctdClientes -1].montoSueldo [k];
			}
			cliente[i].ciudad = cliente[ctdClientes -1].ciudad; 
			
			cliente[i].nacimiento.dia = cliente[ctdClientes -1].nacimiento.dia;
			
			cliente[i].nacimiento.mes = cliente[ctdClientes -1].nacimiento.mes;
			
			cliente[i].nacimiento.anio = cliente[ctdClientes -1].nacimiento.anio;
			
			cliente[i].numeroCliente = cliente[ctdClientes -1].numeroCliente; 
			
			ctdClientes = ctdClientes - 1;
			
		}
		
		i ++; //lo ponemos por que no lo hace solo, al contrario del for. Estamos incrementando el 'i'
	}
	
	if (numeroClienteEncontrado == -1)
	{
		cout << "EL CLIENTE NO EXISTE";	
		
		getch ();
	} 
}

bool comparar(persona personaA, persona personaB) 
	
{ //compara dos personas por el numero de cliente, esto se llama un 'comparator'(se utiliza arriba en la funcion sort) 
	
	if (personaA.numeroCliente > personaB.numeroCliente) 
	{
		return true;
	}
	else {
		return false;
	}
}

bool aprobarPrestamo(persona clientePorIndice) //LO PODRIAMOS USAR PARA DECICIR QUE TARJETA SE LE OTORGA 
{
	/** Valida que el cliente este en relacion de dependencia
	*/
	bool relacionDependenciaOK = clientePorIndice.relacionDependencia == ('S');  
	
	//tengo que aseguarame q la 's' sea mayuscula aunque lo escriba en minuscula
	
	/** Valida que el cliente no se de la localidad de RIO CUARTO
	*/
	bool localidadClienteOK = clientePorIndice.ciudad.compare("RIO CUARTO") != 0; //va a dar cero si es igual y sino, no va a dar cero
	
	//como 'ciudad' es un 'string' y no es 'primitivo' como el 'char' por ejemplo
	
	//entonces usamos la funcion 'compare' para comparar dos 'strig' y si son iguales da cero, de lo contrrio son diferentes y da distinto a 0
	
	/** Valida que tenga al menos 3 recibos de sueldo mayores a 80000
	*/
	int recibos80 = 0;
	
	for (int i = 0; i < 5 ; i ++)
	{
		if (clientePorIndice.montoSueldo[i] > 80000 )
		{
			recibos80 ++;
		}
	}
	
	bool recibosOK = recibos80 > 2;
	
	/** Valida que el cliente sea mayor a 35 y menor a 55
	*/
	int edad = calcularEdad(clientePorIndice.nacimiento.anio, clientePorIndice.nacimiento.mes);
	
	bool edadOK = false;
	
	if(edad > 35 && edad < 55)
	{
		edadOK = true;
	} 
	
	return relacionDependenciaOK && localidadClienteOK && recibosOK && edadOK;
	
}

int ingresarNumero()
{
	int numero;
	
	while(true) //mientras que sea verdad el while lo va a hacer
	{
		if (cin >> numero) //el 'cin' retorna un valor y el valor del 'cin' va a ser positivo cuando se ingrese un valor aceptado, osea numerico
		{
			
			break; //si pasa eso rompo el ciclo y salgo aceptando la entrada
			
		} else //si no es aceptado el valor
		{
			cout << "Ingrese un valor numerico." << endl;
			
			cin.clear(); //viene a hacer esto, saca el 'failbit' que se puso por el ingreso de un dato invalido
			
			cin.ignore(numeric_limits < std::streamsize >::max(), '\n'); //limpia la basura que quedo en el stream array imaginario 
		}
	}
	
	return numero;
}


int obtenerNumeroCliente (persona listaCliente[], int ctdClientes)
{
	cout << " SE OTORGARA UN NUMERO DE CUENTA... " << endl;
	
	int numeroCliente = generarNumeroCliente();
	
	int i = 0;
	
	while(i < ctdClientes) //empiezo el ciclo, recorro la lista mientras no se me acaben los clientes
	{
		if(listaCliente[i].numeroCliente == numeroCliente) //si el numero generado ya esta asignado lo regenero
		{
			numeroCliente = generarNumeroCliente(); //regenero el numero
			
			i = -1; //reinicio el ciclo para validar que el nuevo numero no este repetido
		}
		
		i ++; //incrementa la variable de control, determina cuantas veces se hace el ciclo
		
	} // se repite hasta no encotrar un cliente con ese numero y ahi termina el ciclo
	
	cout << "EL NUMERO DE CUENTA ES: " << numeroCliente << endl;
	
	return numeroCliente;
	
}

int generarNumeroCliente ()
{
	srand(time(NULL)); 
	
	int desde = 10000000, hasta = 30000000; 
	
	int numeroCliente = rand() % (hasta-desde + 1) + desde;
	
	return numeroCliente;
	
}

string mayuscula(string cambioLetra)
{
	string letras;
	
	int longitud = cambioLetra.length(); //guarda en 'longitud' el tamanio en cantidad de letras del 'string'
	
	char cArray [100]; 
	
	strcpy (cArray, cambioLetra.c_str()); //copio el 'string' como 'char' dentro del array, esa es la funcion que me ofrece el 'string' para copiar los caracteres
	
	for(int i = 0; i < longitud; i ++) 
	{ 
		letras += toupper(cArray[i]); //convierte a mayuscula, c++ lo hace por cada 'char', si es a minuscula es 'tolower'
	}
	
	return letras;
}
	

