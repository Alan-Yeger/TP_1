CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I../ej_1/armas -I../ej_1/personajes

# Archivos fuente
MAIN_SRC = main.cpp
EJ1_ARMAS_SRC = armas/armas_combate.cpp armas/items_magicos.cpp
EJ1_PERSONAJES_SRC = personajes/guerreros.cpp personajes/magos.cpp

SRCS = $(MAIN_SRC) $(EJ1_ARMAS_SRC) $(EJ1_PERSONAJES_SRC)

# Ejecutable
TARGET = main

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)