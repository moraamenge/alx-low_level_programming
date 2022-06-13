CC=gcc



main:main.c add.c sub.c
	${CC} -o $@ $^
mainobj:
	${CC} -c main.c -o main.o
object:
	${CC} -c *.c -fpic

dynamic:
	${CC} *.o  -shared -o libdynamic.so
dynamicpy:
	${CC} *.o  -shared -o 100-operations.so

link:
	${CC} -o main main.o -L. -l_calc

clean:
	rm *.o main	


