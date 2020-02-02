#Makefile for game of life

#Game of life
gameoflife: check.o create.o main.o print.o
	gcc -o gameoflife check.o create.o main.o print.o -lncurses

#main
main.o: main.c gof.h
	gcc -c main.c

#Array checker
check.o: check.c gof.h
	gcc -c check.c

#Creates starting situation
create.o: create.c gof.h
	gcc -c create.c

#Prints board
print.o: print.c gof.h
	gcc -c print.c

clean:
	rm -f *.o
