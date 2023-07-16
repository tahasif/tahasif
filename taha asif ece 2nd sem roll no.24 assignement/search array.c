//search array
#include<stdio.h>
int main(){
	int a[100],size,i,n , pos=0;
	printf("enter the size:\n");

	scanf("%d",&size);
	printf("enter the elements:\n");
	for(i=0;i<10;i++)
	{


     scanf("%d",&a[i]);
     printf("enter element to search \n");
     scanf("%d",&n);


	for(i=0;i<10;i++){
	if(a[i]==n){
	printf("%d found at position %d",n,i+1);
					return 0;
				}
			}

			}
			printf("%d not found ",n);
			return 0;

	}
