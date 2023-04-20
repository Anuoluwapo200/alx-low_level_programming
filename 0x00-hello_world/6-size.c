#include <stdio.h>

/**
 * main - Print the size of vrious typesa based on 
 * the computer it is complied and run on ..
 * Return: Always 0.
 */

int main(void)

{
	printf("size of char: %zu byte(s)\n", sizeof(char));

	printf("size of an int: %zu byte(s)\n", sizeof(int));
        printf("size of a long int:%zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	print("size of a float %zu bute(s)\n", sizeof (float));
	return (0);
}
