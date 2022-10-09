#include <stdio.h>

/**
 * addNumbers - funtion that adds two numbers.
 * @n1: first numbers.
 * @n2: second numbers.
 * Return: (0);
 */
int addNumbers(int n1, int n2)
{
int sum;
sum = n1 + n2;
return (sum);
}

/**
 * main - Entry point
 * Description: to print sum
 * Return: (0);
 */
int main(void)
{
int a = 4, b = 100;
int result;
result = addNumbers(a, b);
{
printf("Sum = %d\n", result);
}

return (0);
}


