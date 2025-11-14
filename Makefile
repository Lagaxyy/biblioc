CC=gcc
CFLAGS=-ansi -Wall -lsqlite3

BIN=src/main

OBJ = src/users/users.o

all: ${BIN} ${OBJ}
	./${BIN}

test: src/test.o ${OBJ}
	${CC} ${CFLAGS} -o src/test src/test.o ${OBJ}
	./src/test

clean:
	${RM} ${BIN} ${OBJ} src/test.o src/test

