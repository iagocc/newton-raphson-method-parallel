# Exemplo simples de makefile
# compilador a ser utilizado
CC=g++
# flags para o compilador:
CFLAGS=-c -g -Wall
LDFLAGS=
# modifique com os nomes dos seus arquivos *.cpp e *.h. Este exemplo contem 
# apenas dois arquivos fontes e um arquivo de header
SOURCES=DerivatedHeightEquation.cpp DerivatedHeightEquation.h Equation.cpp Equation.h HeightEquation.cpp HeightEquation.h main.cpp ModifiedPhi.cpp ModifiedPhi.h NewtonRaphson.cpp NewtonRaphson.h Phi.cpp Phi.h
OBJECTS=$(SOURCES:.cpp=.o)
#modifique com o nome do seu executavel (tema1, tema2, tema3 ou tema4)
EXECUTABLE=Main

# nao e preciso modificar daqui pra baixo
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *o $(EXECUTABLE)