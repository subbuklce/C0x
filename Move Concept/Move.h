#ifndef MOVE_H
#define MOVE_H
#include<iostream>
#include<utility>
using namespace std;
class first{
public:
int *p=nullptr;
int size;

first(int size):p(new int[size]),size(size)
{
 cout<<"\n Default Constructor\n";
	for(auto i =0;i < size;i++)
		this->p[i] = i;
}
first(const first& Obj)
{
 cout<<"\n copy Constructor\n";
 if(this == &Obj) {
	cout<<"\n Same object called for copy constructor\n";
	}
 else{
	cout<<"\n Different Object so copying the contents\n";

	this->p = new int[Obj.size];

	for( auto i=0;i< Obj.size;i++) 
		this->p[i]=Obj.p[i];

	this->size = Obj.size;

	}
}

first( first&& Obj) :
	p((Obj.p)),
	size((Obj.size))
{
	cout<<"\n Move Constructor\n";
	Obj.p=nullptr;
	Obj.size =0;

} 
first add(){
	first tem(5);
	return std::move(tem);

}
first& operator= (const first& obj);
first&& operator= ( first&& obj);
~first(){
cout<<"\n Destructor called \n";
 delete p;
}

};

#endif
