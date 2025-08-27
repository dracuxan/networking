TARGET := main

$(TARGET): $(TARGET).o
	gcc $(TARGET).o -o $(TARGET)

$(TARGET).o: $(TARGET).c
	gcc -c $(TARGET).c -o $(TARGET).o

run:
	@./$(TARGET)

clean:
	rm -rf bin
	rm -rf $(TARGET) 
	rm -rf *.o
