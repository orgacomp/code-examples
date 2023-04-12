CC:=gcc
CFLAGS:= -Wall -Wextra -pedantic -g -O0

.PHONY: clean all

all: sumador

main.o: main.c funcs.h
	$(CC) $(CFLAGS) -c $< -o $@

funcs_c.o: funcs_c.c funcs.h
	$(CC) $(CFLAGS) -c $< -o $@

funcs_asm.o: funcs_asm.s funcs.h
	$(CC) $(CFLAGS) -c $< -o $@

sumador: main.o funcs_c.o funcs_asm.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf *.o
	rm -rf sumador

