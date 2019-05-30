CC = g++
CFLAGS = -I../include -std=c++11 -O0 -ggdb -Wall
LIBS = ../lib/libhgj.a -lpthread

MY_LIBS = ../lib/libhgj.a
PROGS = merge_sort 

all:$(PROGS)

merge_sort:  merge_sort.o ../lib/libhgj.a 
	${CC} ${CFLAGS} -o $@ $< ${LIBS}

HEADERS = $(wildcard ../include/*.h)

%.o : %.cc ${HEADERS}
	${CC} ${CFLAGS} -c $<

clean:
	rm -f ${PROGS} *.o


