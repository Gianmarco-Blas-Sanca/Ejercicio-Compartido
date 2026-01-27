# Compilador y flags
CXX = g++
CXXFLAGS = -std=c++14 -Wall -g
LDFLAGS =

# Nombre del ejecutable
TARGET = main

# Archivos fuente (.cpp)
SRCS = main.cpp \
       algorithms/sorting.cpp \
       containers/array.cpp

# Archivos objeto (.o)
OBJS = $(SRCS:.cpp=.o)

# Regla principal
all: $(TARGET)

# Enlazar el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

# Compilar cada .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar objetos y ejecutable
clean:
	rm -f $(OBJS) $(TARGET)

# Evitar conflictos con nombres de archivos
.PHONY: all clean