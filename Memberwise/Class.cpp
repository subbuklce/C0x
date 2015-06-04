#include "Class.h"
void fun(Test iobj){
	iobj.print();
}


int main(){
	Test A(5);
	fun(A);
	return 0;
}
