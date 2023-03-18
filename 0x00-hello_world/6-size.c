#include <stdio.h>

/**
 * main A program that prints the size of various types on the computer
 * return: always 0.
 */
int main(void)

{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a lobg int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int))
	printf("Size of a float int: %zu byte(s)\n", sizeof(float));
	return (0);
}	
