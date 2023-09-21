#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: first input string
 *@s2: second input string
 *Return: 0 if s1 and s2 are equal, a negative value if s1 is less than s2,
 *or a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
/*If we reach here, either one or both strings have reached '\0'.
 *Compare the lengths to determine the result.
 */
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0); /* Both strings are equal. */
}
else if (s1[i] == '\0')
{
return (-1); /* s1 is shorter than s2. */
}
else
{
return (1); /* s1 is longer than s2. */
}
}
