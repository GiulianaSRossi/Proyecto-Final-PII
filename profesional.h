#include <iostream>
using namespace std;

class Profesional{
	
private:
	
	string titulo;
	string actividad;
	float tiempo;
	
public:
	Profesional(string, string, float);
	
	string get_titulo();
	string get_actividad();
	float get_tiempo();
	
	void set_titulo(string);
	void set_actividad(string);
	void set_tiempo(float);
	
	void mostrarDatos();
};

Profesional::Profesional(string t, strig a, float tiem) {

	titulo = t;
	actividad = a;
	tiempo = tiem;


}
string Profesional::get_titulo() {
	return titulo;
}
string Profesional::get_actividad() {
	return actividad;
}
float Profesional::get_tiempo() {
	return tiempo;
}

void Profesional::set_titulo(string t) {
	titulo = t;
}
void Profesional::set_actividad(string a) {
	actividad = a;
}
void Profesional::set_tiempo(float tiem) {
	tiempo = tiem;
}

class ProfesionalC:public Profesional{        //HEREDAR CLASE ProfesionalC
public: 
	
};
