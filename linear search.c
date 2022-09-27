#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[100],i,key,flag=0;
	printf("Enter number of elements in array :\n");
    scanf("%d", &n);
    printf("Enter %d integer(s)\n", n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("enter the number to be searched :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
		flag=1;
		break;
	    }
	}
	if(flag==1)
	{
		printf("\nElement is found");
	}
	else
	{
		printf("not found");
	}
	
}
