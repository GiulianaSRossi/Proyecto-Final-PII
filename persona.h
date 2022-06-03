#include <iostream>
using namespace std;

class Persona{
	
private:
	
	string nombre;
	string apellido;
	int dni;
	string mail;
	
public:
	Persona (string, string, int, string);
	
	string get_nombre();
	string get_apellido();
	int get_dni();
	string get_mail();

	
	void set_nombre(string);
	void set_apellido(string);
	void set_dni(int);
	void set_mail(string);
	
	void mostrarDatos();
};

Persona ::Persona (string nom, string ap, int d, string m) {
	nombre = nom;
	apellido = ap;
	dni = d;
	mail = m;
}

string Persona ::get_nombre() {
	return nombre;
}
string Persona ::get_apellido() {
	return apellido;
}
int Persona ::get_dni() {
	return dni;
}
string Persona ::get_mail() {
	return mail;
}


void Persona::set_nombre(string nom) {
	nombre = nom;
}
void Persona::set_apellido(string ap) {
	apellido = ap;
}
void Persona::set_dni(int DNI) {
	dni = d ;
}
void Persona::set_mail(string mail) {
	mail = m;
}
