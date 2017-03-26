main : main.o function.o
	g++ -o main main.o function.o

main.o : main.cpp function.h
	g++ -c main.cpp

function.o : function.cpp function.h 
	g++ -c function.cpp

clean:
	rm *.o
