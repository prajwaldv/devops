#include <stdio.h>
 
void sumn()
{
	  int n, sum = 0, c, value;
	   
	    printf("How many numbers you want to add?\n");
	      scanf("%d", &n);
	       
	        printf("Enter %d integers\n", n);
		 
		  for (c = 1; c <= n; c++)
			    {
				        scanf("%d", &value);
					    sum = sum + value;
					      }
		   
		    printf("Sum of the integers = %d\n", sum);
		     
		  
}
