//product of series 1,2,3,4,..,n
#include<stdio.h>
int main(){
	
	int i,n,product;
	product=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++);{
		product=product*i;}
		
		printf("%d",product);
}
	
