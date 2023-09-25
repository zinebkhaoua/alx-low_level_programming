#include "main.h"
/**
 **_memset - fills memory with a constant byte
 *@s: pointer variable
 *@b: variable input
 *@n: variable sizeof
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int itr;
for (itr = 0; n > 0; itr++, n--)
{
s[itr] = b;
}
return (s);
}

