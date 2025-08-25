# Build object files from all sources
object.o : main.c def.c test.c unity.c
	gcc main.c def.c test.c unity.c -c

# Build final executables
all : main.o def.o test.o unity.o
	gcc main.o def.o test.o unity.o -o all.out

# Run the program (will run all.out)
run : all
	./all.out

# Clean build files
clean :
	rm -rf *.o *.out
