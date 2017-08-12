#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*p;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p!=NULL)
	{
		printf("Enter the elements:\n");
		for(i=0;i<n+5;i++);
			scanf("%d",p+i);
	} 
	else
	{
		printf("Memory was not allocated !");
		return;
	}
	printf("Dynamic array is :\n");
	for(i=0;i<n+5;i++)
		printf("%d",*(p+i));
	free(p);
}