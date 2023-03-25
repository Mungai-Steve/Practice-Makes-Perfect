#include <stdio.h>

/**
 * main - my program starts here
 *
 * descriptio: ask for user age and height and print out
 *
 * Retur: program ends here
 */

int main(void)

{
	int age, height;
	/** 
	 * here, i request the user to enter their age
	 */

	printf("Please enter your age:");

	/** 
	 * here, i stor their their age
         */
	scanf("%d", &age);

	/**
	 * here, i request the user to enter their height
         */
	printf("Please enter your height in feets:");

	/**
	 * here, i store  their height
         */
	scanf("%d", &height);

	printf("Hello, you are %d years old and %d feets long", age, height);
       /**
	* here, i print a new line
        */
	putchar('\n');

	return (0);
}
