	#include<stdio.h>
	#include<malloc.h> /* header file to allocates  the memory to the queue */

	struct Queue
	{
		int top;	/* top is for element of the queue */
		int *array;	/* array is where elements are stored */
		int capacity;	/* capacity define the size of the array */
		int front;	/*front define the front element of the array queue */
};
		struct Queue *createQueue(capacity){    /*this statement create a queue with capacity */
		struct Queue *q=malloc(sizeof(struct Queue)); /* the statement where memory is provided and (*q) piointer variable intialized*/ 	
		q->top=-1; 				
		q->capacity=10;					/*assigning the size of an array*/ 
		q->array=malloc(q->capacity *(sizeof(int)));	
		q->front=0;		
	return q;
}
	void enqueue(struct Queue *q,int data)		/*enqueue is used for inserting the elements */ 			
{
		int temp=q->top;			/* value of q->top assign to temp */ 			
		temp=temp+1;				/*temp is incrementing by 1 */

		int tempcapacity=q->capacity;		/*capacity is assign to tempcapacity */	

			if(temp<=tempcapacity){		/*condtion for check the size of capacity */
				q->top=temp;		/*again value is assign to top by temp */
				q->array[temp]=data;	/* now put the data into the array[temp] */	
	}else{
			int i=0;
		int *temparr =malloc(q->capacity*2*sizeof(int));	/* increment the size of the array to its double which is known as growable using (*temparr) */
			for(i=0;i<tempcapacity;i++){			/*condtion */
				temparr[i]=q->array[i];			/* q->array[i] put into the temparra[i]*/
		}
	 			temparr[temp]=data;			/*put the data in temparr[temp] */
				q->array=temparr;			/*and the arrayof temparr value  is given back to theq->array it means q->array is now grwoable */
				q->top=temp;				/*assign the temp into the top of an array */
    }
}
		int dequeue (struct Queue *q)			/* dequeue opreation is used for the deletion of an elements present in the queue */
		{
			int temp=q->front;				/*assigning the value of array of front to temp */
			int tempvalue=q->array[temp];			
			q->front=temp+1;				/*incremnent the value of temp and put in q->front */	
	return tempvalue;						/* return the tempvalue */
}

int main()					/*main method for implimenting the queue opeartions calling the main function*/
{	
struct Queue *q=createQueue(10);			

	int t;
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
	enqueue(q,40);
	t=dequeue(q);
	printf("%d\n",t);
	enqueue(q,24);
	enqueue(q,41);
	t=dequeue(q);
	printf("%d\n",t);
	enqueue(q,42);
	t=dequeue(q);	
	printf("%d\n",t);
	enqueue(q,48);
	enqueue(q,100);
	t=dequeue(q);
	printf("%d\n",t);
	enqueue(q,60);	
	t=dequeue(q);
	printf("%d\n",t);
	enqueue(q,101);
	t=dequeue(q);
	printf("%d\n",t);
	
}
 
	
