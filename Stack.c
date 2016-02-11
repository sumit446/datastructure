#include<stdio.h>
#include<malloc.h>	/*the malloc header fille which is used for the allcoation of the memory  using keyword malloc*/
struct Arraystack{	/* create an structure of Arraystack 	*/
	int top;	/* the top is used for the top element in the stack */
	int capacity;	/* the isze of the array */
	int *array;	/* array where all the elements are stoed in the contigious from  */
};
	struct Arraystack *createstack(int capacity){			/* create an arrray stack using structure name  */
	struct Arraystack *s=malloc(sizeof(struct Arraystack));		/* create an pointer variable which is allacating memeory to all the variables used in the stack */
	if(!s){								/* condtion not statified */
		return NULL;						/* return NULL */
	}
		s->capacity=capacity;					/*assgining the capapcity with the pointer variable s */
		s->top=-1;						/* first top is intialize to -1  because array index start from 0 */ 
			s->array=malloc(s->capacity *sizeof(int));	/* array size using the malloc  */
			if(!s->array)					/* if pointer variable not belong to the array */
		return NULL;						/* then , return null */
		return s;						/*and  finally retrun s */
}

	int isemptystack( struct Arraystack *s){			/*function to check the stack is empty */
			return (s->top==-1);				/* when stack contain no value then stack is emepty then return top =-1 */
}

	int isfullstack(struct Arraystack *s)				/*fuction to check the stack is full or have elements */
	{	
	return (s->top==s->capacity-1);					/*the stack elements is filled by one less then the capacity size becaouse top=-1 */	
}

	void push(struct Arraystack *s,int data)			/*push function is uesd to insert th elements in the stack */
{			
		if(isfullstack(s)){					/* by callint the methos check the stack is full */
		printf("stack overflow");				/* then do nothing  */
		}
		else{							/*if stack is not complete */
		int topTemp=s->top;					/*then insert the value of top into toptemp */
			topTemp=topTemp+1;				/*temptop  is now incremented  */	
		s->top=topTemp;						/* then again return the value of toptemp tp top */
		s->array[topTemp]=data;					/* insert the data into the array[toptemp] */
	
	}
}
int pop(struct Arraystack *s){						/*pop function is used to delete the elements from the stack */
	if(isemptystack(s)){						/*by calling the emptystack method to check the stack is empty then pop operation is not possible */
		printf("stack is empty");				/*nothing happen print stack is empty and return  */
		return 0;
	}
		else{							/*else if stack contains the eleemensts  */
		int tempTop=s->top;					/*top is now pointing to the temptop  */	

		int tempRet=s->array[tempTop];				/* then delete the top element which is present in the array[temptop] */			
			tempTop=tempTop-1;				/*and now temptop is decresing one time becaouse top elements is deleted */ 
			s->top=tempTop;
	return tempRet;							/*and return the deleted element */
	
	} 
}
	


	
int main()	/* this main is used to impliment the operarions in the stack  */
{ 
int temp;
int x;
struct Arraystack *s= createstack(10);
push(s,10);
push(s,10);
push(s,10);
push(s,10);
push(s,10);
push(s,10);
push(s,10);
temp=pop(s);
printf("%d",temp);
free(s);
}








