TARGET := main
SRC := main.c
OBJ := $(SRC:.c=.o)

$(TARGET): $(OBJ)
	gcc $(OBJ) -o $(TARGET)

%.o: %.c
	gcc -c $< -o $@

run: $(TARGET)
	@./$(TARGET)

clean:
	rm -rf $(TARGET) *.o
	rm -rf bin
