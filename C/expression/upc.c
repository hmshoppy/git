#include <stdio.h>

int main()
{
	int d;
	int a[5];
	int b[5];

	int first_sum;
	int second_sum;
	int total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &b[0], &b[1], &b[2], &b[3], &b[4]);

	first_sum = d + a[1] + a[3] + b[0] + b[2] + b[4];
	second_sum = a[0] + a[2] + a[4] + b[1] + b[3];
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - (total - 1) % 10);
	return 0;
}
