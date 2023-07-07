#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: starting adress of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
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
