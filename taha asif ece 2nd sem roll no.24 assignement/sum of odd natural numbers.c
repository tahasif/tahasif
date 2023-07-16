//display the sum of odd natural numbers and their sum
#include<stdio.h>
int main(){
int n,i ,sum=0;

printf("enter the number :\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
	
if(n%2!=0)
{
		sum=sum+i;
		printf("%d ",sum);
	
			}
			printf("sum from 1 to %d =%d ",sum,n);
	
	
}
