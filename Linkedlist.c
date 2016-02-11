	#include<stdio.h>
	#include<malloc.h>	/* this header file is used for allocating the memory to the linkedlist  */
	#include<stdlib.h>	/*this standard libaray where diffrent files are stored like typedef */
	typedef struct Node{	/*creating a structure of node */
		int data;	/* data to put the data into empty locations */
		struct Node* nextnode;	/* pointer to the nextnode */
	}Node;		
/* This function  is used to insert the element in the front of the Linkedlist */
	void addfront(struct Node ** head,int data)	/* addfont method is used for adding the element in the front of the node */
	{

		struct  Node *newnode=(Node*)malloc(sizeof(struct Node));/*creating a newnode by using malloc */	
		 newnode->data=data;					/* putting the data into the newnode */
		 			
		             if(!(*head)){				/*condtion if not head pointer */	
				newnode ->nextnode=NULL;		/* and the nextnode of the newnode is poiting to the NULL */
				(*head)=newnode;			/*head have the value of the newnode */
		
	}								/* if condtion is not satisfied then come to next else statement */
			else{
	   			newnode->nextnode =(*head);		/*newnode nextnode is now pointing to the *head */
				(*head)=newnode;			/*newnode is pointing to head */
		}	
	}
/* This function is used to insert the element at the last of the Linkedlist */	
	void addlast(struct Node* *head,int data ){	
		struct Node *newnode=(Node*)malloc(sizeof(struct Node));/* creating A newnode using malloc */
	
 	/*same as insert in the front postion is also same as the inserting the elements in the last postion */
		newnode->data=data;   		/* inserting the data into the newnode */
		if(*head==NULL){		/*if head contains NULL no value */
			*head=newnode;		/* then put the value of newnode into the *head */ 

		}else{
		struct Node* tempnode=*head; 	/*create a node tempnode which is pointing to the head of the linkedlist */
		struct Node* prevNode;		/*create a prEvnode for the track of previous node * of the linkedlist*/
	
		while(tempnode!=NULL){			/*while condtion to check the tempnode is not equal to NULL means have values */
							/* then*/		
			prevNode=tempnode;		/* the value of the tempnode is assign to the prevnode */
			tempnode=tempnode->nextnode;	/*and tempnode is pointing to the nextnode of the tempnode */
		}
		prevNode->nextnode=newnode;		/* prevnode of nextnode pointing to the newnode */
	}
	}

/* This function is used to remove the element from the Linkedlist */
	void removelink(struct Node** head,int remove)
	{
		Node* prevNode;				/*node pointer create node prevNode */
		Node* tempnode=(*head);			/*create tempnode which is pointing to the Head */
		if((*head)->data==remove){		/*condtion if that data which is in the head is has to be remove */
			(*head)=(*head)->nextnode;	/* then move the head pointer to the next position */
		}
		else{
			while(tempnode){			/*check tempnode */
				if(tempnode->data==remove){		/*if data availeble on the tempnode is that data which we want to remove  */
					prevNode->nextnode=tempnode->nextnode;		/* the the previous node nexnode is equal to tempnode nextnode */
					break;						/*break the opreation */
				}else{
					prevNode=tempnode;				/*now the positon of the tempnode is assigning to the prevnode */
					tempnode=tempnode->nextnode;			/*and tempnode is incrementing to the next node */
				}
			}
		}
		}
/* the function is used for the show the size of the array */
	int size(struct Node* head)
	{
		struct Node* tempnode=head;	/* create a tempnode which is pointing to head */
		int count=0;			/*intialize the counter to zero  */
		while(tempnode!=NULL)		/* while tempnode conatins the elements or while tempnode is not empty */
		{
			count++;		/* the counter increment for size */
		tempnode=tempnode->nextnode;	/* and tempnode is incrementing to the nextnode of the linkedlist */
		}
		return count;			/* and return the count value */
	}
/* The display function display all the elements in the list */
	void display(struct Node* head){     

		struct Node* tempnode=head;  			/*create tempnode which is pointing to head */
		while(tempnode!=NULL){				/* while tempnode conatins the elements or while tempnode is not empty */
			printf("%d-->",tempnode->data);		/* print the data which is present in the tempnode by using %d for integer */  
			tempnode=tempnode->nextnode;		/* and tempnode is icrementing or pointing to the nextnode */
		}
	}
	/* main method for implimetntation of all the opeartions  */
	int main()
	{
		int count;
	struct Node *head=NULL;
	addlast(&head,10);
	addlast(&head,20);
	addlast(&head,30);
	addlast(&head,40);
	addlast(&head,50);
	addlast(&head,60);
	addfront(&head,1);
	display(head);
	removelink(&head,1);
	removelink(&head,20);
	removelink(&head,40);
	printf("\n");
	size(head);
	printf("%d",size(head));
	printf("\n");
	display(head);
	}
