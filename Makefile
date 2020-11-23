exec = a.out
sources = $(wildcard src/*.c)
objects = $(sources:/c=.o)
flags = -g -Wall - lm -ldl -fPIC -rdynamic

$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -p $@

clean:
	-rm *.out
	-rm *.0
	-rm *.a
	-rm src/*.0

lint:
	clang-tidy src/*.c src/include/*.h