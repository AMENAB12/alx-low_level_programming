#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates
 * @s1: string
 * @s2: string
 * @m: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int m)
{
char *strconc;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (m < len2)
strconc = malloc(sizeof(char) * (len1 + m + 1));
else
strconc = malloc(sizeof(char) * (len1 + len2 + 1));
if (!strconc)
return (NULL);
while (i < len1)
{
strconc[i] = s1[i];
i++;
}
while (i < (len1 + m))
{
strconc[i] = s2[j];
i++;
j++;
}
strconc[i] = '\0';
return (strconc);
}
