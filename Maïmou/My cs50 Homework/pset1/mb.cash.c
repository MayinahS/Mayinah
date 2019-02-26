#include<stdio.h>
#include<cs50.h>

int main(void)
{ 	int n;
	int s=500;
	int b=250;
	int m=200;
	int d=100;
	int c=50;
	int f=25;
	int g=10;
	int a=5;

	do
	{
		n=get_int("la monaie:");
	}
	while(n<=0);

	int counter=0;

	while(n>=s)
	{
		n=n-s;
		counter++;
	}

	while(n>=b)
	{
		n=n-b;
		counter++;
	}

	while(n>=m)
	{
		n=n-m;
		counter++;
	}

	while(n>=d)
	{
		n=n-d;
		counter++;
	}

	while(n>=c)
	{
		n=n-c;
		counter++;
	}

	while(n>=f)
	{
		n=n-f;
		counter++;

	}

	while(n>=g)
	{
		n=n-g;
		counter++;
	}

	while(n>=a)
	{
		n=n-a;
		counter++;
	}

	printf("la monaie %i", counter);

	{
		return 0;
	}


}