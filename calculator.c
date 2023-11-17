#include "calculator.h"

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