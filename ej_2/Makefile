CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I../ej_1/armas -I../ej_1/personajes

# Archivos fuente
EJ2_SRC = main.cpp personajeFactory.cpp
EJ1_ARMAS_SRC = ../ej_1/armas/armas_combate.cpp ../ej_1/armas/items_magicos.cpp
EJ1_PERSONAJES_SRC = ../ej_1/personajes/guerreros.cpp ../ej_1/personajes/magos.cpp

SRCS = $(EJ2_SRC) $(EJ1_ARMAS_SRC) $(EJ1_PERSONAJES_SRC)

# Ejecutable
TARGET = main

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
