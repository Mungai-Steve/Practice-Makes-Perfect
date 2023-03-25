#include <stdio.h>

/**
 * main - program starts here
 *
 * return: program ends here
 */

int main(void)

{
	int length, n, y, x;
	printf("Enter the length of line:");
	scanf("%d", &length);
	printf("How many lines do you want to draw?:");
	scanf("%d", &y);	
	
	for (x = 0; x < y; x++)
	{	
	for (n = 0; n < length; n++)
	{
	putchar(95);
	
	}
	{
	putchar('\n');
	}
	
	}
	putchar('\n');
	
	return (0);
	
}
