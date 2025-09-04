TARGET := sock_init.exe
SRC := sock_init.c
OBJ := $(SRC:.c=.o)

$(TARGET): $(OBJ)
	gcc $(OBJ) -o $(TARGET)

%.o: %.c
	@gcc -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf *.exe *.o
	rm -rf bin
