#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
	struct avlnode{

	struct avlnode *right;
	struct avlnode *left;
	int data;
	}avlnode;

		struct avlnode* insert(struct avlnode* root,int data)
	{
		if(root==NULL){	
			root=(struct avlnode*)malloc(sizeof(struct avlnode));
			root->data=data;
			root->left=NULL;
			root->right=NULL;
			return root;
	
}
		else if(data<root->data){
			root->left=insert(root->left,data);
			}
			else if(data>root->data){
				root->right=insert(root->right,data);
		}
			return root;
	}
		struct avlnode* delete (struct avlnode* root,int data)
	{
		if(root==NULL){
			printf("no data");
		}
			else if(data<root->data){
				root->left=delete(root->left,data);
			}
				else if(data>root->data){
					root->right=delete(root->right,data);
				}
				return root;
	}

		struct avlnode* rightright(struct avlnode *parent)
		{
			struct avlnode *node;
			node=parent->right;
			parent->right=node->left;
			node->left=parent;
			return node;
		}
		struct avlnode* leftleft(struct avlnode *parent)
		{
			struct avlnode *node;
			node=parent->right;
			parent->left=node->right;
			node->right=parent;
			return node;
		}
		struct avlnode*  rightleft(struct avlnode *parent)
		{
			struct avlnode* node;
			node=parent->right;	
			parent ->right=leftleft(node);
			return rightright(parent);
		}
		struct avlnode* leftright(struct avlnode* parent)	
	{
			struct avlnode *node;
			node=parent->left;
			parent->left=rightright(node);
			return leftleft(parent);
	}
int main()
{
  	struct avlnode *node1=(avlnode*)malloc(sizeof(struct avlnode));
		node1->data=7;
		insert(node1,8);
		insert(node1,4);
		insert(node1,9);
		insert(node1,3);
		insert(node1,2);
		insert(node1,10);
		int temp=node1->data;
		printf("%d \n",temp);
	}



