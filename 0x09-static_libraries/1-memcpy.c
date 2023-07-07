#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int itr;

        for (itr = 0; itr < n; itr++)
        {
                dest[itr] = src[itr];
        }
        return (dest);
}
