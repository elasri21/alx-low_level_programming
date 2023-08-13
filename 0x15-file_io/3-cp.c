#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * createBuf - craete a buffer
 * @buff: buffer name
 * Return: pointer to buffer
 */
char *createBuf(char *buff)
{
char *b = malloc(sizeof(char) * 1024);
if (b == NULL)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", buff);
exit(99);
}
return (b);
}
/**
 * cf - close a file
 * @f: file name
 * Return: Nothing
 */
void cf(int f)
{
int c_file = close(f);
if (c_file == -1)
{
dprintf(STDERR_FILENO, "Error: can't close f %d\n", f);
exit(100);
}
}
/**
 * main - copy file content to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, reading, writing;
char *b;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
b = createBuf(argv[2]);
file_from = open(argv[1], O_RDONLY);
reading = read(file_from, b, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (file_from == -1 || reading == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[2]);
free(b);
exit(98);
}
writing = write(file_to, b, reading);
if (file_to == -1 || writing == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
free(b);
exit(99);
}
reading = read(file_from, b, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
} while (reading > 0);
free(b);
cf(file_from);
cf(file_to);
return (0);
}
