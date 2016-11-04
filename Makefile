test:test.c
	gcc -c test.c
	gcc -o test test.o
clean:
	rm -rf test.o test
