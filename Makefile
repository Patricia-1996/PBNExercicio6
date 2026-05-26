CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = simulador_chmod

# compila tudo
all: $(TARGET)

$(TARGET): main.o bitwise.o
	$(CC) $(CFLAGS) main.o bitwise.o -o $(TARGET)

main.o: main.c bitwise.h
	$(CC) $(CFLAGS) -c main.c

bitwise.o: bitwise.c bitwise.h
	$(CC) $(CFLAGS) -c bitwise.c

# executa o programa direto pelo make
run: $(TARGET)
	./$(TARGET)

# limpa os arquivos temporarios
clean:
	rm -f *.o $(TARGET)