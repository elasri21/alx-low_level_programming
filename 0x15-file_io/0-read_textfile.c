#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer to the file
 * @letters: number of letters toread print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = NULL;
ssize_t btRd, btWt, file;
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
btRd = read(file, buffer, letters);
btWt = write(STDOUT_FILENO, buffer, btRd);
free(buffer);
close(file);
return (btWt);
}
