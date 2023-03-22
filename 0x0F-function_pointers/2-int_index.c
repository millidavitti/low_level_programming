
/**
 *int_index - that searches for an integer.
 *@array: array of integers
 *@size: length of the array
 *@cmp: comparison fucntion
 *Return: the index of the found int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array && size && cmp)
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
