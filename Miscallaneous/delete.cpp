#include<iostream>
using namespace std;
class A{
public:
A(){ 
cout<<"\n Constructor ";
}
~A(){ 
cout<<"\n Destructor1 ";
}
void function1(){
int *p = new int(23);

cout<<"\n Before Deletion "<<sizeof(this[32]);
delete [] this;
cout<<"\n After deletion ";


}

void function2(){

cout<<"\n function 2 ";
}


};

int main(){

/*
A a;
a.function1();
a.function2();
/*/

A * a = new A();
a->function1();
a->function2();








//delete a;

}
