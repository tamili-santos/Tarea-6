#include<iostream>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};


main(){
	Estudiante estudiante;
	
	int fila=0, columna=0;
	cout<<"Cuantos estudiates desea agregar: "<<endl;
	cin>>fila;
	cout<<"Cuantas notas por estudiante desea agregar: "<<endl;
	cin>>columna;
	
	estudiante.codigo=new int[fila];
	estudiante.nombre=new string[fila];
	estudiante.notas=new int *[fila];
	for(int i=0; i<fila; i++){
		estudiante.notas[i]=new int[columna];
	}
	cout<<"__________Ingreso de notas:__________"<<endl;
	for(int i=0 ;i<fila;i++){
		cout<<"Codigo : ["<<i<<"]: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre : ["<<i<<"]: ";
		getline(cin, estudiante.nombre[i]);
	
	
		for(int ii=0;ii<columna;ii++){
			cout<<"Ingrese nota: ["<<ii<<"] : ";
			cin>>*(*(estudiante.notas+i)+ii);
		}
		cout<<"___________________"<<endl;
	}	
	cout<<"___________Mostrar datos___________"<<endl;
		for(int i=0 ;i<fila;i++){
		cout<<"Codigo : ["<<i<<"]: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre : ["<<i<<"]: "<<estudiante.nombre[i]<<endl;
		for(int ii=0;ii<columna;ii++){
			cout<<"Ingrese nota: ["<<ii<<"] : "<<*(*(estudiante.notas+i)+ii)<<endl;
		}
		cout<<"___________________"<<endl;
		}
		
	for(int i=0; i<fila; i++){
	delete[] estudiante.notas[i];
	}
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.notas;
	
	system("pause");
}


