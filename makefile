OUT.exe: main.o leap.o sumn.o fib.o
	gcc -o OUT.exe main.o leap.o sumn.o fib.o
main.o: main.c
	gcc -c main.c
leap.o: leap.c
	gcc -c leap.c
sumn.o: sumn.c
	gcc -c sumn.c
fib.o: fib.c
	gcc -c fib.c
