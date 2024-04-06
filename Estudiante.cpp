#include<iostream>
using namespace std;
struct Estudiante{
	int codigo;
	string nombre;
	int nota;
};


main(){
	Estudiante estudiante;
	cout<<"Ingrese codigo: ";
	cin>>estudiante.codigo;
	cin.ignore();
	cout<<"Ingrese nombre completo: ";
	getline(cin,estudiante.nombre);
	cout<<"Ingrese nota ";
	cin>>estudiante.nota;
	
	cout<<"Codigo: "<<estudiante.codigo<<endl;
	cout<<"Nombre Completo: "<<estudiante.nombre<<endl;
	cout<<"Nota : "<<estudiante.nota<<endl;
	
	system("pause");
}

	

