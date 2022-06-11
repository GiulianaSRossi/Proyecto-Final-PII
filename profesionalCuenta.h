#include <iostream>
using namespace std;

class ProfecionalC{
	
private:
	
	int numeroTarjeta;
	float limiteC;
	
public:
	ProfecionalC(int, float);
	ProfecionalC();
	
	int get_numeroTarjeta();
	float get_limiteC();
	
	void set_numeroTarjeta(int);
	void set_limiteC(float);
	
	void mostrarDatos();
};

ProfecionalC::ProfecionalC(int nt, float lc) {
	
	numeroTarjeta = nt;
	limiteC = lc;	
	
}
ProfecionalC::ProfecionalC() {
	
}
int ProfecionalC::get_numeroTarjeta() {
	return numeroTarjeta;
}
float ProfecionalC::get_limiteC() {
	return limiteC;
}

void ProfecionalC::set_numeroTarjeta(int nt) {
	numeroTarjeta = nt;
}
void ProfecionalC::set_limiteC(float lc) {
	limiteC = lc;
}
