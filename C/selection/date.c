
/* Prints a date in legal form */

#include <stdio.h>
#include <string.h>

int main()
{
	int month, day, year;

	printf("Enter date (mm/dd/yy) : ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Dated this %d", day);
	switch (day) {
		case 1: case 21: case 31:
			printf("st");
			break;
		case 2: case 22:
			printf("nd");
			break;
		case 3: case 23:
			printf("rd");
			break;
		default:
			printf("th");
			break;
	}

	printf(" day of ");

	char *months[] = {
		"Jan",
			"Feb",
			"Mar",
			"Apr",
			"May",
			"Jun",
			"Jul",
			"Aug",
			"Seq",
			"Oct",
			"Nov",
			"Dec"

	};

	printf("%s", months[month - 1]);

	printf(", 20%.2d.\n", year);
	return 0;
}
