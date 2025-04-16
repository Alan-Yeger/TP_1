# Directorios
SRC_EJ1_ARMS = ../ej_1/armas
SRC_EJ1_CHARS = ../ej_1/personajes
SRC_EJ2 = ../ej_2
EJ2_SRCS = $(filter-out $(SRC_EJ2)/main.cpp, $(wildcard $(SRC_EJ2)/*.cpp))
SRC_EJ3 = .

# Archivos fuente
SRCS = $(wildcard $(SRC_EJ1_ARMS)/*.cpp) \
       $(wildcard $(SRC_EJ1_CHARS)/*.cpp) \
       $(EJ2_SRCS) \
       $(SRC_EJ3)/pelea.cpp

# Nombre del ejecutable
OUT = pelea

# Flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I$(SRC_EJ1_ARMS) -I$(SRC_EJ1_CHARS) -I$(SRC_EJ2)

# Regla principal
all: $(OUT)

$(OUT): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Limpiar archivos generados
clean:
	rm -f $(OUT)