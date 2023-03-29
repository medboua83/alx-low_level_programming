#include "main.h"

/**
 *  _strcat -  concatenates two strings. 
 * @dest: pointer of char
 * @src: pointer of char
 * return : concatinated strings
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
               size_t i;

               for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';

               return dest;
}
