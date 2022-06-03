#include <iostream>
using namespace std;

class Administrador{
	
private:
	string puesto;
	
public:
	Administrador(string);
	
	string get_puesto();
	
	void set_puesto(string);
	
	void mostrarDatos();
};

string Administrador::get_puesto() {
	return puesto;
}
void Administrador::set_puesto(string puest) {
	puesto = puest;
}
