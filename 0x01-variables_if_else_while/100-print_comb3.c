#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2;

for (num1 = '0'; num1 < '9'; num1++)
{
for (num2 = '0'; num2 <= '9'; num2++)
{
if (num1 == '0' && num2 < '1')
continue;
if (num1 == '1' && num2 < '2')
continue;
if (num1 == '2' && num2 < '3')
continue;
if (num1 == '3' && num2 < '4')
continue;
if (num1 == '4' && num2 < '5')
continue;
if (num1 == '5' && num2 < '6')
continue;
if (num1 == '6' && num2 < '7')
continue;
if (num1 == '7' && num2 < '8')
continue;
if (num1 == '8' && num2 < '9')
continue;
putchar(num1);
putchar(num2);
if (num2 == '8' && num2 == '9')
break;
putchar(',');
putchar(' ');
