#include<stdio.h>
#include<malloc.h>		/*  this header file is used for allocating the memory to the Dlinkedlist */	
#include<stdlib.h>		/* tht standard libaray is used for which conatains the special libarary functions like typedef and malloc */

 typedef struct dNode	/* create a struct Dnode */  
	{
		int data;		/*data is used for inserting the data in the Dlinkedlist */
	struct dNode *nextnode;		/* create a struct dNode which pointing to the nextnode */	
	struct dNode *previousnode;	/* create a struct dNode which is used for track the address of the previousnode */
}dNode;
	void insert (struct dNode* *head,int data) /* thE is insert function is used for the inserting the elements int the dlinkedList */
	{	
	struct dNode *newnode=(dNode*)malloc(sizeof(struct dNode));/* creating a newnode using the melloc */	
	newnode->data=data;			/* and put the data into the newnode  */
	if(*head==NULL)				/* if head contains no value .. head is null */	
		{
			*head=newnode;		/*then the data in the newnode is now pointing to the *head */
	}else{
		struct dNode* tempnode=*head;	/* create a dNode tempnode which is pointing to the *head */
		struct dNode* prevnode;		/* create a dNode prevnode to keep the track of the prevNode */

		while(tempnode!=NULL)		/* while tempnode conatins the elements or values or it is not NULL */
		{
			prevnode=tempnode;	/* the tempnode address is now in prevnode */ 
			
			tempnode=tempnode->nextnode;/*  and tempnode is pointing to the nexnode of tempnode */	
		}
			prevnode->nextnode=newnode; /* and prevnode poiting to the nextnode is = to the newno;de */
			newnode->previousnode=prevnode;	/*and the newnode  pointing to the previousnode to keep the track of the prevnode o; f the newnode */
	}
}
 
/* removelink method is use to remove the elements from the list which u want to  */
void removelink(struct dNode* * head,int remove)		
	{	dNode* previousnode;	/* creating a previousnode to keep the track of the prevnode */
		dNode* prevNode;	/* prevnode which is used in the function for track of the node */
		dNode* tempnode=(*head);/*creating tempnode which is pionting to the head of the dNode */
		if((*head)->data==remove){	/*if condtions check the while the the data which is head is to be removed */
			(*head)=(*head)->nextnode;/*if yes then head* move to the nextnode and piont to the nextnode*/	
		}
		else{
			while(tempnode){		/*check the tempnode */	
				if(tempnode->data==remove){ /*if the data in the tempnode is the same as the data which u want to remove  */
					prevNode->nextnode=tempnode->nextnode;	/* then prevnode of nexnode is equal to tempnode of nextnode */
					break;				/*break the condition */
				}else{
					prevNode=tempnode;		/* pointer pointing to tempnode node now given to prevnde */
					tempnode=tempnode->nextnode;	/*tempnode is incrementing to the nextnode of tempnode */
					//prevNode->nextnode=previousnode;	
				}
			}
		}
	
}
	int size(struct dNode* head)		/* this function use for the size of the  elements in the list */
{
		struct dNode* tempnode=head;	/* create a tempnode which is pointing to the head of the dnode using struct dNode */
		int count=0;			/* count varaible counts the number of elements  */
		while(tempnode!=NULL){		/*condtion tempnode have value or node */
		count++;			/*if tempnode contain elements the count will be incremeneted */
		tempnode=tempnode->nextnode;	/*tempnode is incrementing to the next node of the tempnode */
	}
	return	count;				/*final count will be returned */
}

	void display(struct dNode* head)	/* display method is used for display the elements in the list */
	{
		struct dNode* tempnode=head;	/* create a tempnode which is pointing to the head of the dnode using struct dNode */
		while(tempnode!=NULL)		/*condtion tempnode have value or node */
		{
		printf("%d-->",tempnode->data); /* and print the data which is present in the tempnode */
							
		tempnode=tempnode->nextnode;	/*tempnode is incrementing to the next node of the tempnode */
	}
}
int main()		/* main method is used for implimenting the operation on the dlinkedlist using the struct dnode */
{
	struct dNode *head=NULL;
insert(&head,10);
insert(&head,20);
insert(&head,30);
insert(&head,40);
insert(&head,5);
insert(&head,55);
display(head);
printf("\n");
printf("size is-->%d",size(head));
removelink(&head,20);
removelink(&head,30);
printf("\n");
printf("size is-->%d",size(head));
printf("\n");
display(head);
}
