CC=gcc
CFLAGS=-ansi -Wall

BIN=main

OBJ = ${BIN}.o \

all: ${BIN}
	./${BIN}

clean:
	${RM} ${BIN} ${OBJ}

