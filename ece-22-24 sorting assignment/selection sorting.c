//selection sorting
#include<stdio.h>
int main()
{
int a[100],i,j,n,temp;

printf("Enter the value of n:");
scanf("%d",&n);

printf("Enter the elements:");
for (i=0;i<n;i++)

{
	scanf("%d",&a[i]);
	
}	
for (i=0;i<n;i++)

{
	for(j=i+1;j<n;j++)
	{
	if(a[i]>a[j])
	
	{  temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	}	
	
	printf("\n the sorted array");
	for(i=0;i<n;i++)
	
	{ 
	printf("%D \t",a[i]);
	
	}
	
	}
}
	
}
