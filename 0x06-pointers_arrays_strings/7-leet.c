
/**
 *leet - encodes a string into 1337.
 *@c: string
 *Return: char pointer
 */

char *leet(char *c)
{
int x, y;
char *cipher = "aAeEoOtTlL", *decipher = "4433007711";
for (x = 0; c[x]; x++)
{
for (y = 0; cipher[y]; y++)
if (c[x] == cipher[y])
c[x] = decipher[y];
}
return (c);
}
