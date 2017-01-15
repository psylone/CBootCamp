CC     	  = gcc
CFLAGS 	  = -Wall
DEPS   	  = include/vector.h include/word.h
OBJ    	  = go.o vector.o word.o
OUT    	  = bin/go
DEBUG_OUT = bin/go-debug

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT): $(OBJ)
	$(CC) $(CFLAGS) -o $(OUT) $^

$(DEBUG_OUT): $(OBJ)
	$(CC) $(CFLAGS) -g -o $(DEBUG_OUT) $^

debug: $(OUT)-debug

clean:
	rm $(OBJ) $(DEBUG_OUT)
