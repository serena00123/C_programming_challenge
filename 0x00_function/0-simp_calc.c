#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 *
 * Return: Always (0).
 */

int main(void)
{
double num1;
double num2;
char op;

{
printf("Enter a number:\n");
scanf("%lf", &num1);
}
{
printf("Enter an operator:\n");
scanf(" %c", &op);
}
{
printf("Enter a number:\n");
scanf("%lf", &num2);
}


if (op == '+')
{
printf("%lf\n", num1 + num2);
}
else if (op == '-')
{
printf("%lf\n", num1 - num2);
}
else if (op == '*')
{
printf("%lf\n", num1 * num2);
}
else if (op == '/')
{
printf("%lf\n", num1 / num2);
}
else
{
printf("invalid operator\n");
}
return (0);
}
