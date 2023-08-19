//bubble sort
#include<stdio.h>
int main()
{
    int i,n=10,temp,a[10],j,e,c;
    printf("Enter the size of array:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
	printf("Enter the elements:");
	scanf("%d",&a[i]);
			
	}
	
	for(e=0;e<n-1;e++){
	for(c=0;c<n-1;c++){
		if(a[c]>a[c+1])
		 
		 temp=a[c];
		 a[c]=a[c+1];
		 a[c+1]=temp;
		
	}	
		
	}
	
	for (j=0;j<n;j++)
	printf("%d",&a[j]);
}
