#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program assign a random number to variable n
 * Return: 0 on Success
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char last[] = "last digit of" ;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d is %d and is ", last, n, n % 10);
if (n > 5)
{
printf("greater than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
