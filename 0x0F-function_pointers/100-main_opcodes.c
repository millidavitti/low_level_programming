#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: argument length
 *@argv: array of argumnents
 *Return: int
 */
int main(int argc, char *argv[]) {
if (argc != 2) {
printf("Error\n");
exit(1);
}

int num_bytes = atoi(argv[1]);
if (num_bytes < 0) {
printf("Error\n");
exit(2);
}

char *start = (char *) main;
char *end = start + num_bytes;

while (start < end) {
printf("%02hhx ", *start & 0xff);
start++;
}

printf("\n");
return 0;
}
