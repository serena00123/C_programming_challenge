#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0;
 */
int main(void)
{
/*variable declaration */
double sum = 0.0, avg;
int i;
double arr[5] = {69.46, 70.00, 68.99, 69.71, 69.99};

/*Accessing and summing the element of array by looping through*/
for (i = 0; i < 5; i++)
{
sum += arr[i];
}
avg = sum / 5.0;
printf("The average of the array = %.2f\n", avg);

return (0);
}

