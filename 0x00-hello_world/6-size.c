#include <stdio.h>
/**
 *main -is the entry point for the program.
 *
 *Return:0 if no error, non 0 value if errors.
 */
int main(void)
{i
	printf("size of a char:%id byte(s)\n", sizeof(char));
	printf("Size of an int:%id byte(s)\n", sizeof(int));
	printf("Size of a long int: %id byte(s)\n", sizeof(long int));
	printf("size of a long long int: %id byte(s)\n", sizeof(long long int));
	printf("size of a float: %id byte(s)\n", sizeof(float));
	return (0);
}
