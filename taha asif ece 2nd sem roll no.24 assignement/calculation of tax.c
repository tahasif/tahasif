//calculation of tax
#include<stdio.h>

int main(){
	int i ;
	double t;
	printf("enter your income:");
	scanf("%d",&i);
	if(i<1,50,000){
		printf("No tax");

	}
	else if(i>1,50,000&&i<=3,00,000)
	{
		t =i*0.10;
		printf("%lf ",t);

	}
	else if(i>3,00,000&&i<=5,00,000)
	{
		t =i*0.20;
		printf("%lf",t);

	}else
	{
		t =i*0.30;
		printf("%lf",t);



	}
	return 0;
}
