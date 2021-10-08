#include "palindrome.h"
#include <stdio.h>
/**
 *is_palindrome -checks if a positive integer is a palindrome.
 *@n: he number to be checked
 *Return:  if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
int inv = 0;
int tmp = n;
int mod;
while (n != 0)
{
mod = n % 10;
inv = inv * 10 + mod;
n /= 10;
}
if (tmp == inv)
return (1);
return (0);
}
