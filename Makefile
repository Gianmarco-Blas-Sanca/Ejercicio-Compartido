# Compilador y estándar
CXX = g++
CXXFLAGS = -std=c++11 -Wall -g 


# Nombre del ejecutable (puedes cambiarlo)
TARGET = calculadora

# Archivos fuente
SOURCES = main.cpp 4operaciones.cpp

# Regla principal: compilar el ejecutable
$(TARGET).exe: $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET).exe $(SOURCES)

# Limpiar ejecutable
clean:
	del $(TARGET).exe 2>nul

# Reiniciar: limpiar y recompilar
rebuild: clean $(TARGET).exe

# Regla por defecto
.PHONY: clean rebuild