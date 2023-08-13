#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: NULL terminated string
 * Return: 1 on success. -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
int file, numWr, length = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
for (; text_content[length];)
length++;
}
file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
numWr = write(file, text_content, length);
if (file == -1 || numWr == -1)
return (-1);
close(file);
return (1);
}
