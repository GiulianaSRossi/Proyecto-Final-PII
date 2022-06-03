#include <iostream>
using namespace std;

class Trabajador{
	
private:
	
	int numeroEmpleado;
	float salario;

	
public:
	Trabajador (int, float);

	int get_numeroEmpleado();
	float get_salario();

	void set_numeroEmpleado(int);
	void set_salario(float);

	
	void mostrarDatos();
};

Trabajador::Trabajador(int numE, float s) {

	numeroEmpleado = numE;
	salario = s;
}
int Trabajador::get_numeroEmpleado() {
	return numeroEmpleado;
}
float Trabajador::get_salario() {
	return salario;
}
	
void Trabajador::set_numeroEmpleado(int nmrEm) {
	numeroEmpleado=nmrEm;
}
void Trabajador::set_salario(float slr) {
	salario=slr;
}
