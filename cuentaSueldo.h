#include <iostream>
using namespace std;

class CuentaS{
	
private:
	
	int numeroCuenta;
	float saldo;
	
public:
	CuentaS(int, float);
	
	int get_numeroCuenta();
	float get_saldo();
	
	void set_numeroCuenta(int);
	void set_saldo(float);
	
	void mostrarDatos();
};

CuentaS::CuentaS(int nc, float s) {
	
	numeroCuenta = nc;
	saldo = s;	
	
}
int CuentaS::get_numeroCuenta() {
	return numeroCuenta;
}
float CuentaS::get_saldo() {
	return saldo;
}

void CuentaS::set_numeroCuenta(int nc) {
	numeroCuenta = nc;
}
void CuentaS::set_saldo(float s) {
	saldo = s;
}

