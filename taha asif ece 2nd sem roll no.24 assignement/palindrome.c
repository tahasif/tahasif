//palindrome
#include<stdio.h>
int main()
{ int n,temp,rev=0,rem;

printf("enter the number:");
scanf("%d",&n);

temp=n;
while(temp!=0)
{ 
rem=temp%10;

rev=rev*10+rem;

temp=temp/10;
}

printf("reverse: %d\n",rev);
if(n==rev)
{
printf("%d is a palindrome",n);}
else
{
	printf("%d is not a palindrome",n);
	
}
}
