TARGET := bin/sock_init
SRC := sock_init.c
OBJ := $(SRC:.c=.o)

$(TARGET): $(OBJ)
	mkdir -p bin
	gcc $(OBJ) -o $(TARGET)

%.o: %.c
	@gcc -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf *.o
	rm -rf bin
