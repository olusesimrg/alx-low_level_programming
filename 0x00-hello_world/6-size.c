#include <stdio.h>
/**
 * main -is the entry point for the program.
 *
 * Return:0 if no error, non 0 value if errors.
 */
int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
