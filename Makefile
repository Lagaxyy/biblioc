CC=gcc
CFLAGS=-ansi -Wall -lsqlite3

BIN=src/main

OBJ = ${BIN}.o \
      src/helpers/helpers.o

all: ${OBJ}
	${CC} ${CFLAGS} -o ${BIN} ${OBJ}
	./${BIN}

debug: CFLAGS += -g -fsanitize=address
debug: ${OBJ}
	${CC} ${CFLAGS} -o ${BIN} ${OBJ}
	./${BIN}

clean:
	${RM} ${BIN} ${OBJ}

