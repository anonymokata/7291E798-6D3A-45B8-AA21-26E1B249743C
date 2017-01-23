CFLAGS=-Wall

all: main

main: main.o IpNumberCheck.o RomanToDecimal.o DecimalToRoman.o AddOrSub.o
	gcc -o main main.o IpNumberCheck.o RomanToDecimal.o DecimalToRoman.o AddOrSub.o

main.o: main.c IpNumberCheck.c RomanToDecimal.c DecimalToRoman.c AddOrSub.c
	gcc $(CFLAGS) -c main.c IpNumberCheck.c RomanToDecimal.c DecimalToRoman.c AddOrSub.c

