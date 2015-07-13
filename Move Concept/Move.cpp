#include "Move.h"
void print(first &obj){
	cout<<"\n values are :";
	for( auto i=0;i<obj.size;i++)
		cout<<endl<<"\t \t"<<obj.p[i]<<endl;
}

first& first::operator= (const first& obj){
if (p != nullptr) 
	delete p;
p = new int[obj.size];
for(auto i=0;i<obj.size;i++)
	p[i] = obj.p[i];
size= obj.size;
cout<<"\n Called Assignment op\n";
}
first&& first::operator= ( first&& obj)
{
this->p= (obj.p);
size =(obj.size);

obj.p=nullptr;
obj.size =0;
cout<<"\n Move Assignment op\n";
}
int main(){

//first a(5),b(5);
first c(0);
first sam(0);
sam =  c.add();
print(sam);

return 0;
}

