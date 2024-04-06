#include<iostream>
using namespace std;


	//Funciones
	void suma(int num1, int num2){
		int resultado=0;
		resultado=num1+num2;
		cout<<resultado<<endl;
	}
	
	//Metodos
	int suma(int num1, int num2, int num3){
		int resultado=0;
		resultado=num1+num2;
		return resultado;
	}

main(){
	suma(10, 20);

	system("pause");
}
