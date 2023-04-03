#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: char pointer
 *
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int length1, length2;

for (length1 = 0; s[length1] != '\0'; length1++)
{
for (length2 = 0; accept[length2] != '\0'; length2++)
{
if (s[length1] == accept[length2])
{
break;
}
}
if (!(accept[length2]))
{
break;
}
}
return (length1);
}
