#include "LinkedList.h"
using namespace std;
using namespace mylist;

void List::insert(int data){
	NODEPOINTER tmp= new NODE();
	tmp->data = data;
	tmp->next = nullptr;

	if(root == nullptr){
		root = tmp;
		index++;
	}
	else{
		NODEPOINTER head = root;
		while(head->next != nullptr){
			head= head->next;
		}
		head->next = tmp;
		index++;
	}
}

int List::count(int ivalue){
	int count =0 ;
	NODEPOINTER tmp = root;
	while(tmp != nullptr){
		if(tmp->data == ivalue)
			count++;
		tmp=tmp->next;

	}
	return count;
}

void List::print(){

	NODEPOINTER tmp= root;
	while(tmp!= nullptr){
		cout<<endl<<std::setw(5)<<tmp->data<<endl;
		tmp = tmp->next;
	}
}
int List::GetNthElement(unsigned short loc){
	assert(loc<= this->index);
	NODEPOINTER tmp = root;
	unsigned short location=1;
	while(location++<loc && tmp!=nullptr){
		tmp=tmp->next;
	}

	return (tmp!=nullptr)?(tmp->data):(-1);
}
void List::free(){
	assert(index>0);
	free(root);
}
void List::free(NODEPOINTER& tmp){
	while(tmp->next !=nullptr){
		free(tmp->next);
		//break;
	}
		delete tmp;
		tmp= nullptr;

}
int main(){
	List a;
	for(int i=0;i<8;i++)
		a.insert(i);


	cout<<endl<<a.count(5)<<endl;

	cout<<endl<<a.GetNthElement(5)<<endl;

//	a.free();

	a.print();
	return 0;
}

