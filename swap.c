/* Different ways to swap values in two variables */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a=5, b=6;

	// swap by +-
	a = a+b;
	b = a-b;
	a = a-b;
	printf("%d %d\n",a, b );

	// same thing
	a=a+b, b=a-b, a=a-b;
	printf("%d %d\n",a, b );

	// swap in one line
	a=(a+b)-(b=a);
	printf("%d %d\n",a, b );

	// swap by /*
	a=a*b;
	b=a/b;
	a=a/b;
	printf("%d %d\n",a, b );

	// swap by ^
	a ^= b ^= a ^= b;
	printf("%d %d\n",a, b );
}