	#include<stdio.h>
	main()			/*main from where execution starts */
	{
 	int i,j,temp,n;		/* variables which are used in the program all are type of int  */
	printf("enter the no of elements \n");	
	scanf("%d",&n);				/*this statement where you want to insert the number of elements like limit */
	int a[n];				/*and a[n] means the number of elements is equal to same as the size of array */
	printf("enter the values \n");		
		for(i=0;i<n;i++)		/*enter the values  by using loop till not satisfied */
			scanf("%d",&a[i]);	/*insert the elements in array */
			for(i=0;i<=n-2;i++){	/*note loop run to number -1 becoause sorting is always less the one lement  */
							
				for(j=i+1;j<=n-1;j++){
							/*comparing of elements  */
				if(a[i]>a[j])		/* value of a[i]  is greater then value of a[j] the a[j] is a[i+1] means next element of i*/
				{			/*swapping*/
				temp=a[i];		/* then , take a temp variable put the value of a[i] into temp */
				a[i]=a[j];		/* and , the value of a[j] put into a[i]
				a[j]=temp;		/* the value is temp now give to a[j] and now temp is empty */
			}
		}
	}
	printf("the sorting elements are \n");	
		for(i=0;i<n;i++)			/*for printing the elements which are in sorted form */
	printf("%d \n",a[i]);				
}
