main.o: main.c checksum.h encrypt.h
	gcc -c main.c

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c 

checksum.o: checksum.c checksum.h
	gcc -c checksum.c 

main: main.o encrypt.o checksum.o
	gcc main.o encrypt.o checksum.o -o main
