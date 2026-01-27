#include <iostream>
#include<locale>

#include "4operaciones.h"

using namespace std;


int main(){
	
	setlocale(LC_ALL,"spanish");
	Entero numero1;
	Entero numero2;
	
	cout<<"Ingrese el primer valor a analizar: ";
	cin>>numero1;
	
	
	do{

		cout<<"Ingrese el segundo valor a analizar: ";
		cin>>numero2;
		if(numero2==0){
			cout<<"Error, el número no debe ser cero. Intente nuevamente."<<endl;
		}
	}while(numero2==0);

	

	
	cout<<"La suma de los dos números es: "<<suma(numero1,numero2)<<endl;
	cout<<"La resta de los dos números es: "<<resta(numero1,numero2)<<endl;
	cout<<"El producto de los dos números es: "<<multiplicacion(numero1,numero2)<<endl;
	cout<<"La división de los dos números es: "<<division(numero1,numero2)<<endl;


		
	return 0;
}



