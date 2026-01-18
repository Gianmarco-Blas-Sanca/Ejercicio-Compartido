#include <iostream>
#include <clocale>
using namespace std;
/*Crear un programa usando estructuras para calcular el tiempo de servicio de un trabajador
si se conoce la fecha de ingreso y la fecha de cese. Calcule la liquidación si por año de servicio
se le paga un sueldo mensual.*/
struct Empleados{
	char Nombre[30];
	int AnoIni;
	int MesIni;
	int DiaIni;
	int AnoFin;
	int MesFin;
	int DiaFin;
	int PagoMensual;
	float liquidacion;
}Empleado[100];
int main(){
	setlocale(LC_ALL,"spanish");
	int NumEmpleados;
	int DifAno,DifMes,DifDia;
	float DiasTotales,Extra;
	cout<<"Ingrese la cantidad de empleados que registrara: "<<endl;
	cin>>NumEmpleados;
	cout<<'\n';
	
	for(int i=0;i<NumEmpleados;i++){
		cin.ignore();
		cout<<"Ingrese el nombre del empleado N°"<<i+1<<" : "<<endl;
		cin.getline(Empleado[i].Nombre,30,'\n');
		
		cout<<"Ingrese la fecha de entrada de la forma Año-Mes-Dia :";
		cin>>Empleado[i].AnoIni>>Empleado[i].MesIni>>Empleado[i].DiaIni;
		cout<<'\n';
		cout<<"Ingrese la fecha de salida  de la forma Año-Mes-Dia :";
		cin>>Empleado[i].AnoFin>>Empleado[i].MesFin>>Empleado[i].DiaFin;
		cout<<'\n';
		cout<<"Ingrese el pago mensual que se le daba :  ";
		cin>>Empleado[i].PagoMensual;
		cout<<'\n';
		DifAno=Empleado[i].AnoFin-Empleado[i].AnoIni;
		DifMes=Empleado[i].MesFin-Empleado[i].MesIni;
		DifDia=Empleado[i].DiaFin-Empleado[i].DiaIni;
		DiasTotales=DifAno*365+DifMes*30+DifDia;
		Extra=DiasTotales/365;
		Empleado[i].liquidacion=(Extra)*Empleado[i].PagoMensual;
		cout<<"La liquidación  de el  "<<Empleado[i].Nombre<<" sera de "<<Empleado[i].liquidacion<<" soles "<<endl;
	}
	
	
	cin.ignore();
	cin.get();
	return 0;
}
