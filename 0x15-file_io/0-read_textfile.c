#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fp;
ssize_t a;
ssize_t b;

fp = open(filename, O_RDONLY);
if (fp == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
b = read(fp, buffer, letters);
a = write(STDOUT_FILENO, buffer, b);
free(buffer);
close(fp);
return (a);
}
