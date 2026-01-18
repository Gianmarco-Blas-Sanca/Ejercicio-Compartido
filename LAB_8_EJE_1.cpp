#include <iostream>
#include <clocale>
using namespace std;

struct Empleado {
    char Nombre[30];
    int AnoIni, MesIni, DiaIni;
    int AnoFin, MesFin, DiaFin;
    int PagoMensual;
    float liquidacion;
};

// Función para ingresar los datos de un empleado
void ingresarEmpleado(Empleado &emp) {
    cout << "Ingrese el nombre del empleado: ";
    cin.ignore();
    cin.getline(emp.Nombre, 30);

    cout << "Ingrese la fecha de entrada (Año Mes Día): ";
    cin >> emp.AnoIni >> emp.MesIni >> emp.DiaIni;

    cout << "Ingrese la fecha de salida (Año Mes Día): ";
    cin >> emp.AnoFin >> emp.MesFin >> emp.DiaFin;

    cout << "Ingrese el pago mensual: ";
    cin >> emp.PagoMensual;
}

// Función para calcular la liquidación
void calcularLiquidacion(Empleado &emp) {
    int DifAno = emp.AnoFin - emp.AnoIni;
    int DifMes = emp.MesFin - emp.MesIni;
    int DifDia = emp.DiaFin - emp.DiaIni;

    float DiasTotales = DifAno * 365 + DifMes * 30 + DifDia;
    float AnosServicio = DiasTotales / 365.0f;

    emp.liquidacion = AnosServicio * emp.PagoMensual;
}

// Función para mostrar la liquidación
void mostrarLiquidacion(const Empleado &emp) {
    cout << "La liquidación de " << emp.Nombre 
         << " será de " << emp.liquidacion << " soles." << endl;
}

int main() {
    setlocale(LC_ALL, "spanish");

    int NumEmpleados;
    cout << "Ingrese la cantidad de empleados que registrará: ";
    cin >> NumEmpleados;
    cout << '\n';

    Empleado empleados[100];

    for (int i = 0; i < NumEmpleados; i++) {
        cout << "=== Empleado N°" << i + 1 << " ===" << endl;
        ingresarEmpleado(empleados[i]);
        calcularLiquidacion(empleados[i]);
        mostrarLiquidacion(empleados[i]);
        cout << '\n';
    }

    cin.ignore();
    cin.get();
    return 0;
}
