#include <stdio.h>

int main()
{
	int i = 2;
	int j = i * i++;

	printf("%d\n", j);

	int a = 5, b, c;
	c = (b = a + 2) - (a = 1);
	printf("%d %d\n", b, c);
	
	printf("%d %d\n", -9 / 7, -9 % 7); 
	printf("%d\n", (-9 / 7 ) * 7 + -9 % 7);

	printf("%d %d %d %d\n", 8 % 5, -8 % 5, 8 % -5, -8 % -5);
	printf("%d %d %d %d\n", 8 / 5, -8 / 5, 8 / -5, -8 / -5);
	return 0;
}
