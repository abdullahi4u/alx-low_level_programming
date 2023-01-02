#include "main.h"
/**
 * strcat - Concatenates the string pointed to my @src, including the terminat
 *           null byte, to the end of the string pointed by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest len++;

for (index = 0; src[index]; index++)
dest[dest_len] = src[index];

return (dest);
}
