#include<iostream>
 namespace custom{
class test{
public:
test(){ std::cout<<"\n Constructor";}
//main program in different namespace.
int main(){ std::cout<<"\n Class main module "; }
};

}
//Real Main program
int main(){
custom::test a;
a.main();
return 0;
}
