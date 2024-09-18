//Create a structure representing a tree node with data, a left child pointer, and a right child pointer.
//Write functions to create a binary search tree, traverse it (in-order, pre-order, post-order), and find the maximum and minimum values.
//Function Pointers
//Callback functions:
#include<stdio.h>
#include<stdlib.h>

typedef struct{
int root;
tree *ptr_left=NULL;
tree *ptr_right=NULL;
}tree;

struct* init(int data){
tree *ptr=(tree *)(malloc(sizeof(tree));	
ptr->root=data;
ptr->ptr_left=NULL;
ptr->ptr_right=NULL;
return ptr;
}

struct* new_node(tree *ptr,int data1,int data2){
if((data1>(ptr->root)>data2)|(data2>(ptr->root)>data1)){

tree *root=init(ptr->root);
tree *node_left=init(data1);
tree *node_right=init(data2);
root->ptr_left=&node_left;
root->ptr_right=&node_right;
return root;
}

else if((ptr->root)>data1>data2){
tree *root=init(data1);
tree *node_left=init(ptr->root);
tree *node_right=init(data2);
root->ptr_left=&node_left;
root->ptr_right=&node_right;
return root;
}

else if(

void search_inorder(tree *ptr) 





