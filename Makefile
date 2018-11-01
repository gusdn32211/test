all: run

run: main.o helpers.o
		clang++ -std=c++11 main.o helpers.o -o main

main.o: main.cpp
		clang++ -std=c++11 -c main.cpp

helpers.o: helpers.cpp
			clang++ -std=c++11 -c helpers.cpp
