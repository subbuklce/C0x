#ifndef _CLASS_H_
#define _CLASS_H_


#include<iostream>
class Test{
int *val=nullptr;
public:
//Constructor
Test(int iarg)
{
	 std::cout<<"\n Con Called  ";
	if(!val)
		 val = new int(iarg);
}
// Destructor
~Test(){
		 std::cout<<"\n destructor Called  for value \t"<<*val;
		delete val;


}
//Copy Constructor
Test(const Test &ileft){
	#ifdef DEBUG
		std::cout<<"\n Called Copy Con";
		this->val = new int;
		//Assigning some junk value
		*(this->val) = 15;
	#endif
} 
void print()const { 
	std::cout<<"\n The value is "<<*val<<std::endl;
}

};
#endif




