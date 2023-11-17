#include<stdio.h>
#include "calculator.h"
int main(){
	int x,y;
	printf("enter the value of the first number\n");
	scanf ("%d",&x);
	printf("enter the value of the second number\n");
	scanf ("%d",&y);	
	printf("the addition result is:%d \n the subtraction result is:%d \n the multiblication result is:%d \n the division result is:%d\n ",add(x,y),sub(x,y),mult(x,y),div(x,y),modulo(x,y));
	
	
	
	return 0;
}
int add(int a, int b)
{
	return a+b;
}

int sub(int x,int y){
	return x-y;
}

int div(int x,int y){
	if (y == 0)
	{
		printf("ERROR, DIVISION by ZERO :(\n");
	}
	else
	{
		return x/y;
	}

}
int mult(int x, int y)
{
	int z = x*y;
	return z;
	
}
int modulo (int x, int y){
	
	if (y==0){
		return 0;
	}		
	else{
		return x%y;		
	}
	
}