#include<stdio.h>
int main()
{
	int a[20],n,i,sml;
	int *ptr;
	printf(" How many Numner you want to enter: ");
	scanf("%d",&n);
	
	printf("\n Enter the number : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		ptr++;
	}
	
	ptr=&a[0];
	printf("\n Number you enter :\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",(*ptr));
		ptr++;
	}
	
	
	ptr=&a[0];
	sml=a[0];
	for(i=0;i<n;i++)
	{
		if(sml>(*ptr))
		sml=*ptr;
		ptr++;
	}
	printf("\n Smallaest element is : %d",sml);
	return 0;
}
