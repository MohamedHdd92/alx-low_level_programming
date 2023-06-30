#include "main.h"
/**
 *rot13 - function that encodes a string using rot13
 *@s: pointer to string params
 *
 *Returen: *s
 */
char *rot13(char *)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s == ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
