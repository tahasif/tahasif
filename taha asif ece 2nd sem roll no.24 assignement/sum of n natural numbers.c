//sum of n terms of natural numbers
#include<stdio.h>
int main(){
	int i,n,sum;
	sum=0;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		 sum= sum+i;
		 }
		 printf("%d",sum);
		 
}
