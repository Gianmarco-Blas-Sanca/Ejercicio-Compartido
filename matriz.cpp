#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>


using namespace std;

const int MAX = 100;


int main(){
	
	setlocale(LC_ALL, "spanish");
	
	unsigned int n;
	
	int A[MAX][MAX];
	
	srand(time(0));	
	
	cout<<"Ingrese la dimensión de la matriz: ";
	
	cin>>n;
	
	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
        	A[i][j] = rand() % 100;
    	}
	}
	
	cout<<"\nLa matriz es:\n";
	
	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
        	cout << A[i][j] << " ";
    	}
    	cout << endl;
	}
	
	 int contadorPrimos = 0;

    cout << "\nNúmeros primos encontrados:\n";

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int x = A[i][j];
            bool esPrimo = true;

            if (x <= 1) {
                esPrimo = false;
            } else {
                for (int k = 2; k < x; k++) {
                    if (x % k == 0) {
                        esPrimo = false;
                        break;
                    }
                }
            }

            if (esPrimo==true) {
                contadorPrimos=contadorPrimos+1;
                cout << "El Primo : " << x << " se encontró en la posición [" << i << ", " << j << "] de la matriz\n";
            }
        }
    }

    cout << "\nLa cantidad total de primos es : "<< contadorPrimos << endl;
	
	
	
	system("pause");
	
	
	
	return 0;
}
