#include <stdio.h>
/**
 *main - entry point
 *Return: always 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of float int: %d byte(s)\n", sizeof(float));
return (0);
}
