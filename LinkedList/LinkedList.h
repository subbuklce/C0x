#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include<iomanip>
#include<assert.h>

namespace mylist{
template<class T>
struct node{
	T data;
	node* next;
};
typedef node<int>* NODEPOINTER;
typedef node<int> NODE;
class List{

public:
	void insert(int );
	int count(int );
	void print();
	int GetNthElement(unsigned short );
	void free();
private:
	NODEPOINTER root=nullptr;
	unsigned short index=0;

	void free(NODEPOINTER &);
};
}


#endif
