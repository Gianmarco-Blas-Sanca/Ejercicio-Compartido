#include <iostream>
#include <string>
#include "sorting.h"
#include "../containers/array.h"
using namespace std;

// Bubble Sort Clásico
void BurbujaClasico(ContainerElemType* arr, ContainerRange n, CompFunc pComp) {
    if (n <= 1)
        return;
    for (auto i = 0; i < n - 1; ++i) {
        for (auto j = i + 1; j < n; ++j) {
            if (pComp(arr[i], arr[j])) {
                intercambiar(arr[i], arr[j]);
            }
        }
    }
}

// Demostración completa de Bubble Sort
void DemoBurbuja() {
    cout << "=== Demostracion Bubble Sort ===" << endl << endl;
    
    // Ejemplo 1: Enteros
    cout << "1. Ordenamiento de enteros:" << endl;
    int arrEnteros[] = {5, 2, 8, 15, 1, 9, 4, 7, 3, 6,32,48, 79, 55};
    auto nEnteros = sizeof(arrEnteros) / sizeof(arrEnteros[0]);
    
    cout << "   Original: ";
    PrintArray(arrEnteros, nEnteros);
    cout << endl;
    
    BurbujaClasico(arrEnteros, nEnteros, &MayorCE);
    cout << "   Ascendente: ";
    PrintArray(arrEnteros, nEnteros);
    cout << endl;
    
    BurbujaClasico(arrEnteros, nEnteros, &MenorCE);
    cout << "   Descendente: ";
    PrintArray(arrEnteros, nEnteros);
    cout << endl << endl;
    
    // Ejemplo 2: Cadenas
    cout << "2. Ordenamiento de cadenas:" << endl;
    string arrCadenas[] = {"Hola", "que", "tal", "como", "estas", "yo", "bien", "hasta", "luego", "amigo"};
    auto nCadenas = sizeof(arrCadenas) / sizeof(arrCadenas[0]);
    
    cout << "   Original: ";
    PrintArray(arrCadenas, nCadenas);
    cout << endl;
    
    BurbujaRecursivo(arrCadenas, nCadenas, &Mayor<string>);
    cout << "   Ascendente (alfabetico): ";
    PrintArray(arrCadenas, nCadenas);
    cout << endl;
    
    BurbujaRecursivo(arrCadenas, nCadenas, &Menor<string>);
    cout << "   Descendente (alfabetico): ";
    PrintArray(arrCadenas, nCadenas);
    cout << endl << endl;
    
    // Ejemplo 3: Caracteres
    cout << "3. Ordenamiento de caracteres:" << endl;
    char arrChars[] = {'d', 'a', 'c', 'b', 'e','z', 'k' };
    auto nChars = sizeof(arrChars) / sizeof(arrChars[0]);
    
    cout << "   Original: ";
    PrintArray(arrChars, nChars);
    cout << endl;
    
    // Convertimos temporalmente a ContainerElemType* (solo funciona si son compatibles)
    // Nota: esto es frágil; mejor usar BurbujaRecursivo para char
    BurbujaRecursivo(arrChars, nChars, &Menor<char>);
    cout << "   Ascendente: ";
    PrintArray(arrChars, nChars);
    cout << endl << endl;

    BurbujaRecursivo(arrChars, nChars, &Mayor<char>);
    cout << "   Descendente: ";
    PrintArray(arrChars, nChars);
    cout << endl << endl;
    
    cout << "----------------------------------------" << endl << endl;


}

void DemoSorting() {
    DemoBurbuja();
    // Espacio reservado para futuros algoritmos:
    // DemoQuickSort();
    // DemoMergeSort();
    // DemoHeapSort();
    // DemoInsertionSort();
}

// Demostración de templates (sin cambios)
template <typename T>
void Print(T &p1, T &p2) {
    cout << "p1: " << p1 << " p2: " << p2 << endl;
}

template <>
void Print(char &p1, char &p2) {
    cout << "char1: " << p1 << " char2: " << p2 << endl;
}

void DemoTemplates() {
    int    a = 5, b = 8;
    double x = 20, y = 30;
    string str1 = "CS", str2 = "UNI";
    char   c1 = 'X', c2 = 'Y';

    Print(a, b);
    Print(x, y);
    Print(str1, str2);
    Print(c1, c2);
}