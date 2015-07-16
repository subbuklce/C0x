#include<iostream>
using namespace std;
class A{
public:
int a;
A(){ 
cout<<"\n Constructor ";
}
~A(){ 
cout<<"\n Destructor1 ";
}
void function1(){
	
cout<<"\n Before Deletion "<<sizeof(this)<<endl;
delete  this[9];
cout<<"\n After deletion ";


}

void function2(){

cout<<"\n function 2\n "<<a<<endl;
}


};

int main(){

/*
A a;
a.function1();
a.function2();
*/

A * a = new A();
a->a = 12;
a->function1();
a->function2();



//delete a;

}
