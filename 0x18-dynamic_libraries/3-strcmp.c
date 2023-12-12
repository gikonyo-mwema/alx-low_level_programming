#include "main.h"

/**
* _strcmp - function that compares two strings
*
* Description: function that compares two strings
*
* @s1: String to compare
* @s2: String to compare
*
* Return: 0, if the s1 and s2 are equal;
* a negative value if s1 is less than s2;
* a positive value if s1 is greater than s2.
*/

int _strcmp(char *s1, char *s2)
{
int ind2, ind1, len2, len1, s2_end, s1_end;

s2_end = s1_end = len2 = len1 = ind2 = ind1 = 0;

while (1)
{
if (s2_end == 1 && s1_end == 1)
break;

if (*(s1 + ind2) == '\0')
{
s2_end = 1;
}
else
{
len2++;
ind2++;
}
if (*(s2 + ind1) == '\0')
{
s1_end = 1;
}
else
{
len1++;
ind1++;
}
}
for (ind1 = 0; ind1 < len1; ind1++)
{
if (s1[ind1] != s2[ind1])
{
return (s1[ind1] - s2[ind1]);
}
}
return (0);
}
