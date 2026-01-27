#include <iostream>
#include "algorithms/sorting.h"
#include "containers/array.h"
#include "general/types.h"

using namespace std;

// Definimos reader y writer como alias de cin y cout
auto& reader = cin;
auto& writer = cout;

int main() {
    // Ejecutar todas las demos
    DemoSorting();      // Bubble Sort
    DemoTemplates();    // Plantillas
    // DemoArray();     //  Descomenta solo si implementaste DemoArray()

    writer << "\n=== Fin del programa ===\n";
    return 0;
}