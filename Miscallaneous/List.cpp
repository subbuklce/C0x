#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node *root = nullptr;

void deletek(node * head, int data){

node* tmp = head;
while(tmp->next->next != nullptr){
if(tmp->next->data == data){
tmp->next= tmp->next->next;
break;
}
tmp= tmp->next;
}
}

void print(node *head){
cout<<"\n 3 "<<head<<endl;
while(head!= nullptr){
 cout<<head->data<<endl;
 head= head->next;
}
}

void insert(node *head,int data)
{
cout<<"\n 2 "<<head;
node* tmpp ;
tmpp = head;
	while(head ->next!= nullptr) 
		head=head->next;

node* tmp = new node();
tmp->data = data;
tmp->next = nullptr;
head->next = tmp;
//print(tmpp);
//exit(0);
}



int main(){

node *root1 = new node();
root1 ->data = 12;
root1 -> next = nullptr;
root = root1;
cout<<"\n 1 "<<root;
insert(root,23);
insert(root,3);
insert(root,530);
deletek(root,3);
print(root);
}
