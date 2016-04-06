all: 	main.c main.o
	g++ -o main main.c main.o

main.c:		main.c	
	g++ -c main.c

clear:
	rm -rf *.o
