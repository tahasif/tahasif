
//qs 18 part i
#include<stdio.h>
int main(){
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
	for(j=1;j<=i;j++)
	{
		printf("%d",(k++)%2);
	}

	printf("\n");
	}
	
}
