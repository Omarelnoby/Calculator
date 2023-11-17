#include "calculator.h"
int main(){
	int x,y,result;
	printf("enter the value of the first number\n");
	scanf ("%d",&x);
	printf("enter the value of the second number\n");
	scanf ("%d",&y);	
	printf("the addition result ")
	
	
	
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