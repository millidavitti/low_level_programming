#include <string.h>

/**
 *_strstr - locates a substring.
 *@haystack: char*
 *@needle: char*
 *Return: ptr*
 */

char *_strstr(char *haystack, char *needle)
{
char *ptr = strstr(haystack, needle);
return (ptr);
}
