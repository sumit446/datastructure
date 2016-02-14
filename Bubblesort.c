	#include<stdio.h>
	main()					/* main method from where execution starts */
	{
	int n,c, swap,i;			/*int varaibles which are used in the sorting */			                                                                                                                                                                                                                                                                                                                                                                         
	printf("enter no of  elements \n");
	scanf("%d",&n);				/* scanf provides the number of elements u want to enter */
	int a[n];				/* which ic stored in array a[n] and  numberof elements you want to add=size of array (memory wastage less))*/
	printf("enter values \n");	
		for(c=0;c<n;c++)		/*loop for inserting the values ex->4,6,2, */
		scanf("%d",&a[c]);		/*values put in array of a[c] */
			for(c=0;c<(n-1);c++)		/*not loop run to number -1 becoause sorting is always less the one lement  */
			{
				for(i=0;i<(n-1);i++)
				{			/*comapring of values  if value of the element is greater the next element*/
				if(a[i]>a[i+1])
				{				/*swapping  */
				swap=a[i];		/* create a temp variable and put the value of a[i]in swap */
				a[i]=a[i+1];		/*and the value of a[i+1] is put into a[i] */	
				a[i+1]=swap;		/* and again the value of swap put into a[i+1] */
			}
		}
	}
		printf("the sorted elements are \n");		
			for(c=0;c<n;c++)		/* for priting the elements  */
			printf("%d\n",a[c]);		/* and sorted elements will be printed */

}



