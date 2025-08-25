main: main.o
	gcc main.o -o main

main.o: main.c
	gcc -c main.c -o main.o

clean:
	rm -rf bin
	rm -rf main
	rm -rf *.o
