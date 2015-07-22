#include "BinaryTrees.h"
using namespace std;

void BinaryTree::build(Nodeptr &head, int data){
	if(head == nullptr){
		Nodeptr tmp = new Node();
		tmp ->data = data;
		tmp -> left = nullptr;
		tmp -> right = nullptr;
		head = tmp;
		if(count ==0){
			root = head;

		}
		++count;
	}
	else{
		if(head->data > data){
			this->build(head->left,data);

		}
		else{
			this->build(head->right,data);

		}
	}
}
void BinaryTree::print(Nodeptr& head){


	if(head != nullptr){
		print(head->left);
		cout<<endl<<head->data<<endl;
		print(head->right);
	}


}
void BinaryTree::minValue(){
	Nodeptr tmp = root;
	while(tmp->left != nullptr){
		tmp = tmp->left;
	}
	cout<<"\n The minimum value is "<<tmp->data<<endl;
}

void BinaryTree::Postprint(Nodeptr& head){


	if(head != nullptr){
		print(head->left);
		cout<<endl<<head->data<<endl;
		print(head->right);
	}


}
unsigned int BinaryTree::size(){
	return count;
}
void BinaryTree::depth(){

	++depthsize;
	cout<<endl<<"The tree depth is \t"<<depthsize<<endl;
}
int main(){
	BinaryTree object;
	{
		object.build(object.root,4);
		object.build(object.root,2);
		object.build(object.root,6);
		object.build(object.root,3);
		object.build(object.root,5);
		object.build(object.root,1);
		object.build(object.root,7);
	}

	object.print(object.root);
	//cout<<endl<<object.size()<<endl;
	//object.minValue();
	object.depth();

	return 0;
}
