//  https://www.math.upenn.edu/~kazdan/202F09/sqrt.pdf
//  https://math.mit.edu/~stevenj/18.335/newton-sqrt.pdf

#include<stdio.h>
float main ()
{
	//TO FIND SQROOT
	
	float num,guess,g2=0;
	printf("TO FIND SQUARE ROOT OF A NUMBER\n");
	printf("ENTER A NUMBER\n");
	scanf("%f",&num);
	guess=num/2;
	while(!((guess-g2 > -0.00000001) && (guess-g2 < 0.00000001)))
	{
		g2 = guess;
		guess = (guess + (num/guess))/2;
		printf ("%0.8f\n",guess);
	}
	printf("%0.8f=square root\n",guess);

	return 0;
}
