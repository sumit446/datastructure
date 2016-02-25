	#include<stdio.h>
	#include<malloc.h>
	#include<stdlib.h>

		typedef struct bnode{   	/* create a structure  of binarynode */
		struct bnode *right;		/* right pinter which points all the elemets in the tree at right */	
		struct bnode *left;		/*create a flet pointer which points the left elements of the tree */
		int data;			/* dtata for inserting the elements in the tree */
		}bnode;
			
		bnode *insert(struct bnode *node,int data)	/* insert method for inserting the elements in the tree */
		{						/* int which contacin the node and data */
			if(node==NULL){				/* if node have no elements */
			bnode *temp;			
			temp=(bnode*)malloc(sizeof(bnode));	/*then create a temp node using malloc */	
			temp->data=data;			/* and insert the data int of the temp of data*/	
			temp->left=NULL;			/*the left of the temp  is pointing to null */
			temp->right=NULL;			/* right of the temp is also pointing to null */
			node=temp;				/*DATA IN THE TEMP MOVE TO NODE */
		}

			if(data>(node->data)){			/*if the data is greater then the node of data */	
				printf("%d\n",node->data);	/*then print */			

				node->right=insert(node->right,data);	/*if data is greater then add tht element in the the right side of the root node */
					printf("Adding node\n");

				printf("%d\n",node->right->data);	/*then print the data whiich is present in tht right side */
			}
				else if(data<(node->data)){		/*if  the data is less then the node of the data */
	
				node->left=insert(node->left,data);	/* then insert the element on the  node of the root  */
			}
			return node;				/*returning node */
		}	

		bnode *delete(struct bnode *node,int data)	/*this method is used for deleting the elements from the tree */
		{
			if(node=NULL){				/*if node heaving no data no lements  */	
				printf("no data");		/*then do nothing  */
			}
				else if(data>(node->data)){		/*else, is data is greater then the node data */
					node->right=delete(node->right,data);	/*then the data which is present in the right side will be deleted*/
				}
					else if(data <(node->data)){		/* if the data which we want to delete is less then the node data */		
					node->left=delete(node->left,data);	/*then the data from the left side will be deleted */
				}
					return node;
			}

		void preorder(struct bnode *node)
		{	
			if(node==NULL){
			return ;
		}
		else{
			printf("%d",node->data);
			preorder(node->left);
			preorder(node->right);
		}	
	}
	
		void inorder(struct bnode *node)
		{
			if(node==NULL){
			return;
		}
		else{
			inorder(node->left);
			printf("%d",node->data);
			inorder(node->right);
		}
	}	
		void postorder(struct bnode *node)
		{
			if(node==NULL){
			return;
		}	
		else{
		postorder(node->left);
		postorder(node->right);
		printf("%d",node->data);
		}
	}		
	int main()
	{
		bnode *root=(bnode*)malloc(sizeof(bnode));
	root->data=7;
	insert(root,1);
	insert(root,0);
	insert(root,3);
	insert(root,2);
	insert(root,5);
	insert(root,4);
	insert(root,6);	
	insert(root,9);
	insert(root,8);
	insert(root,10);	
	int temp=root->data;
	printf("%d \n",temp);
	preorder(root);
	printf("\n \t");
	postorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	}

