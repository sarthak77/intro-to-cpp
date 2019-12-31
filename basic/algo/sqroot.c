#include<stdio.h>
int main ()
{
	//TO FIND SQUARE ROOT OF A POSITIVE NUMBER TILL 6 DECIMAL PLACE
	
	double num;
	printf("FINDING SQUARE ROOT\n");
	printf("ENTER A NUMBER\n");
	scanf("%lf",&num);
	double d1;
	double d2;
	d1 = 0;
	d2 = 1;
	int count;
	count = 9;
	while(count!=0)
{
	while(d1*d1<num || d1*d1==num)
	{
	d1=d1+d2;
	}
	d1=d1-d2;
	d2=d2/10;
	count--;
}
	printf("SQUARE ROOT = %.8lf\n",d1);
	
	return 0;
}
