//add digits of a 4 digit number
#include<stdio.h>
int main()
{int num, total=0,rem;

printf("enter a four digit number:");
scanf("%d",&num);

while(num!=0)
{
	rem=num%10;
	total=total+rem;
	num/=10;
	
}
printf("total;%d",total);

}
