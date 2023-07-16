//cube of n natural numbers
#include<stdio.h>
int main(){
	int n,i,cube;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	cube=n*n*n;
	
	for(i=1;i<=n;i++){
		cube=cube*i;
	}
	printf("%d",cube);
	
	
}
