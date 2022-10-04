#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	struct Paciente {
		string apellidoNombre;
		int edad;
		string obraSocial;
	};
	struct UltimaVisita {
		int mes;
		int anio;
	};
	struct ConsultorioOdontologico {
		Paciente paciente;
		UltimaVisita ultVista;
		char piezasDentales[32];
	};
	int cantPacientes;
	int nro;
	cout<<"¿Cuantos pacientes va a ingresar?"<<endl;
	cin>>cantPacientes;
	while(cantPacientes>100 || cantPacientes<0) {
		cout<<"Numero ingresado mayor de 100 o menor de 0, intente de vuleta"<<endl;
		cin>>cantPacientes;
	}
	ConsultorioOdontologico pacientes[100];
	getline(cin, pacientes[1].paciente.apellidoNombre);
	for (nro=1;nro<=cantPacientes;nro++) {
		cout<<"Ingrese apellido y nombre del paciente"<<endl;
		getline(cin, pacientes[nro].paciente.apellidoNombre);
	}
	
	return 0;
}
