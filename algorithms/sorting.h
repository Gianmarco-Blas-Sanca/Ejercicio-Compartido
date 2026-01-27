#ifndef __SORTING_H__
#define __SORTING_H__
#include "../util.h"
#include "../compareFunc.h"

// Bubble Sort Clásico
void BurbujaClasico(ContainerElemType* arr, ContainerRange n, CompFunc pComp);

// Bubble Sort Recursivo (template)
template <typename T>
void BurbujaRecursivo(T arr[], ContainerRange n, 
                      bool (*pComp)(const T &, const T &) ) {
    if (n <= 1)
        return;
    for (auto j = 1; j < n; ++j)
        if ( pComp(arr[j], arr[0]) )
            intercambiar(arr[0], arr[j]);
    BurbujaRecursivo(arr+1, n-1, pComp);
}

// Función de impresión universal para arreglos
template <typename T>
void PrintArray(const T* arr, ContainerRange n, std::ostream& os = std::cout) {
    os << "[";
    for (ContainerRange i = 0; i < n; ++i) {
        if (i > 0) os << ", ";
        os << arr[i];
    }
    os << "]";
}

void DemoBurbuja();
void DemoSorting();
void DemoTemplates();

#endif // __SORTING_H__