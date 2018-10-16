CC = g++
CFLAGS = -I../include -std=c++11 -O0 -ggdb -Wall
LIBS = ../lib/libhgj.a -lpthread

PROGS = merge_sort 

all:$(PROGS)

merge_sort:  merge_sort.o
	${CC} ${CFLAGS} -o $@ $< ${LIBS}

%.o : %.cc
	${CC} ${CFLAGS} -c $<

clean:
	rm -f ${PROGS} *.o


