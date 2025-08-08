object.o : main.c sum.c product.c square.c difference.c div.c unity.c
	gcc main.c sum.c product.c square.c difference.c div.c unity.c -c

all : main.o sum.o product.o square.o difference.o div.o unity.o
	gcc main.o sum.o product.o square.o difference.o div.o unity.o -o all.out

run : all
	./all.out

clean :
	rm -rf *.o*.out