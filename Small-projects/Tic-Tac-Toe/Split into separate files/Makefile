main.o: main.c playfuncs.c playfuncs.h
	gcc -c main.c

playfuncs.o: playfuncs.h playfuncs.c
	gcc -c playfuncs.c

tictactoe: main.o playfuncs.o
	gcc main.o playfuncs.o -o tictactoe
