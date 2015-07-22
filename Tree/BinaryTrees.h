#ifndef BINARYTREES_H
#define BINARYTREES_H
#include<iostream>


 struct BinaryTreeNode{
	int data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
} ;
typedef BinaryTreeNode* Nodeptr;
typedef BinaryTreeNode Node;

class BinaryTree{

public:
	void build(Nodeptr&,int);
	void print(Nodeptr&);
	void Postprint(Nodeptr&);
	void minValue();
	inline unsigned int  size();
	inline void depth();

	Nodeptr root=nullptr;
private:

	unsigned int count = 0;
	unsigned int depthsize = 0;


};

#endif
