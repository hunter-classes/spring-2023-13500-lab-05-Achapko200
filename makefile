main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h
	g++ -std=c++11 -c funcs.cpp

main.o: main.cpp funcs.h
	g++ -std=c++11 -c main.cpp

tests.o: test.cpp doctest.h funcs.h
	g++ -c -std=c++11 test.cpp

test: main
	./main
	
clean:
	rm -f main.o funcs.o test.o