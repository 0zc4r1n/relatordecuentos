SRC = main.c
OBJ = $(SRC:.c=.o)
OUT = relator
INCLUDES = -I.

.SUFFIXES: .c

default: $(OUT)

.c.o:
	gcc -c $< -o $@

$(OUT): $(OBJ)
	gcc -o $(OUT) $(OBJ)

clean:
	rm -rf *.o $(OUT)
