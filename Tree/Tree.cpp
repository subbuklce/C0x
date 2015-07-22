#include "Tree.h"
using namespace std;
Node * root = nullptr;
Node* insert(Node* root, int data){

	if(root == nullptr){
		Node *tmp = new Node();
		tmp->data = data;
		tmp ->left = NULL;
		tmp ->right = NULL;
		root=tmp;
		return root;
	}
	else if(data <= root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right = insert(root->right,data);
	}

}

void print(Node* root){

	if(root!=nullptr){
		print(root->left);
		cout<<endl<<root->data;

		print(root->right);
	}
	else
		cout<<"\n entered11";
}
	int main(){

		
		int k =15;
		root = insert(root,k);
		k =10;
		 insert(root,k);
		k =150;
		 insert(root,k);
		print(root);
		return 0;
	}
