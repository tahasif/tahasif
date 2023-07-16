//percentage and grade of a student
#include<stdio.h>
int main()
{
float p,c,m,b,e;

printf("enter the marks in physics:");
scanf("%f",&p);

printf("enter the marks in chemistry:");
scanf("%f",&c);

printf("enter the marks in mathematics:");
scanf("%f",&m);

printf("enter the marks in biology:");
scanf("%f",&b);

printf("enter the marks in english:");
scanf("%f",&e);

 float marks= p+c+m+b+e;
 float percentage=(marks/500)*100;
 
 printf("marks %f \n", marks);
 printf("percentage: %.2f%% \n",percentage);
 
 //grading
 if( percentage<=100 && percentage>=90){
 	printf("grade:A+");
}else if(percentage <90 && percentage>=80)
{printf("grade:A");
}else if(percentage <80 && percentage >=70)
{printf("grade:B");
}else if(percentage <70 && percentage >=60)
{printf("grade:c");
}else if(percentage <60 && percentage >=50)
{printf("grade:d");
}else printf("failed");


	
}
