#include <stdlib.h>
#include "lib.h"
/**
 * _strlen - lenght of a string.
 * @s: pointer.
 * Return: i .
 */
int _strlen(char *s)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{}
return  (i);
}
/**
 * main - a program that multiplies two numbers.
 *@argc: argc
 *@argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int lenA, lenB, i, j, tmp;
int *a, *b, *mul;
char s[] = "Error", *s1, *s2;
if (argc != 3)
{
while (i < 5)
{_putchar(s[i]);
i++; }
_putchar('\n');
exit(98); }
if (argv[1] == 0 || argv[2] == 0)
{_putchar('0');
return (0); }
lenA = _strlen(argv[1]);
lenB = _strlen(argv[2]);
s1 = malloc(lenA);
s2 = malloc(lenB);
mul = malloc((lenA + lenB) *sizeof(int));
a = malloc(lenA *sizeof(int));
b = malloc(lenB *sizeof(int));
for (i = 0; i < lenA; i++)
s1[i] = argv[1][i];
for (i = 0; i < lenB; i++)
s2[i] = argv[2][i];
for (i = lenA - 1, j = 0; i >= 0; i--, j++)
a[j] = s1[i] - '0';
for (i = lenB - 1, j = 0; i >= 0; i--, j++)
b[j] = s2[i] - '0';
for (i = 0; i < lenB; i++)
{
for (j = 0; j < lenA; j++)
mul[i + j] += b[i] * a[j]; }
for (i = 0; i < (lenA + lenB); i++)
{tmp = mul[i] / 10;
mul[i] = mul[i] % 10;
mul[i + 1] = mul[i + 1] + tmp; }
for (i = lenA + lenB - 1; i >= 0; i--)
if (i != lenA + lenB - 1 || mul[i] != 0)
_putchar(mul[i] + '0');
_putchar('\n');
return (0); }
