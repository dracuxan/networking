TARGET := sock_init
SRC := $(TARGET).c
OBJ := $(SRC:.c=.o)

$(TARGET): $(OBJ)
	mkdir -p bin
	gcc $(OBJ) -o ./bin/$(TARGET)

%.o: %.c
	@gcc -c $< -o $@

run: $(TARGET)
	@./bin/$(TARGET)

clean:
	rm -rf $(TARGET) *.o
	rm -rf bin
