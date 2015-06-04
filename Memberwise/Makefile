Add=-std=c++11 -O3

Class: Class.o 
	g++ -g Class.o -o Class 

Class.o: Class.cpp Class.h
	g++ -g -c  Class.cpp -std=c++11 -O3 -DDEBUG

clean:
	rm -rf *.o Class *~
