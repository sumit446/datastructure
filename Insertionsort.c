	#include<stdio.h>
	main()					/* main method from where execution start */
	{
	int i,j,s,temp;				/*integer variables which are used in the program */	
	
	printf("enter total elements\n");
	scanf("%d",&s);				/*this gives the number of elements u want to insert */
	int a[s];				/* and put in array of a[s] */

	printf("enter values\n");		/*for entering the values  */	
		for(i=0;i<s;i++)		/* loop till the  number which you are inserted for ex ->5numbers.. then its run 5 times */
		scanf("%d",&a[i]);		/*insert the values at a[i] */	
			for(i=1;i<s;i++){	/* the value of a[i] is put into the temp */
			temp=a[i];		
			j=i-1;				
			while(temp<a[j]&&(j>=0)){	/* now loop the value of temp is greater then the value in a[j] and j is greater then 0*/
				a[j+1]=a[j];		/*then put the value of a[j] in a[j+1] position */
				j=j-1;			/* j is decremented by 1 */
			}
				a[j+1]=temp;		/* the value of temp in a[j+1) */
			}
	printf("after sorting\n");			
	for(i=0;i<s;i++)		/*for printing the elements which are in sorted form */ 
	printf("%d\n",a[i]);
}
