CC     = gcc
CFLAGS = -Wall
DEPS   = include/primes.h
OBJ    = main.o primes.o
OUT    = bin/primes

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT): $(OBJ)
	$(CC) $(CFLAGS) -o $(OUT) $^

clean:
	rm *.o
