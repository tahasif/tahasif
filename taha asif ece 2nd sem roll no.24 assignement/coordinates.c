//coordinates
#include<stdio.h>
int main(){
	float x,y;
	x=0,y=0;
	
	printf("enter the points(x,y)");
	scanf("%f %f", &x, &y);
	
	if( x==0 && y==0){
		printf("point is on origin");
	}else if (x<0 && y<0){
		printf("third quadrant");
	}else if(x>0 && y>0){
		printf("first quadrant");
	}else if (x>0 &&y<0){
		printf("fourth quadrant");
	}else if(x<0 && y>0){
		printf("second quadrant");
	}else if("x==0 && y!=0 "){
		printf("point lies on y-axis");
	}else if("x!=0 && y==0"){
		printf("point lies on x-axis");
	}
	else { printf("invalid point.");
	}
	
}
