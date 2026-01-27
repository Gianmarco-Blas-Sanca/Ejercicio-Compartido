#ifndef __COMPARE_H__
#define __COMPARE_H__

#include "general/types.h"

// Tipo de función para BurbujaClasico (usa ContainerElemType)
using CompFunc = bool(*)(const ContainerElemType&, const ContainerElemType&);

// Funciones genéricas (para templates como BurbujaRecursivo)
template <typename T>
bool Mayor(const T& a, const T& b) { return a > b; }

template <typename T>
bool Menor(const T& a, const T& b) { return a < b; }

// Funciones específicas para ContainerElemType (evitan problemas de conversión)
inline bool MayorCE(const ContainerElemType& a, const ContainerElemType& b) {
    return a > b;
}

inline bool MenorCE(const ContainerElemType& a, const ContainerElemType& b) {
    return a < b;
}

#endif // __COMPARE_H__