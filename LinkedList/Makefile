Add=-std=c++11 -O3

LinkedList: LinkedList.o 
	g++ -g LinkedList.o -o LinkedList 

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -g -c  LinkedList.cpp -std=c++11 -O3 

clean:
	rm -rf *.o LinkedList *~
