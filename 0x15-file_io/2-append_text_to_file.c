#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: file to append text to
 * @text_content: text to add to the file
 * Return: 1 on success. -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, numWr, size = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (; text_content[size];)
size++;
}
file = open(filename, O_WRONLY | O_APPEND);
numWr = write(file, text_content, size);
if (file == -1 || numWr == -1)
return (-1);
close(file);
return (1);
}
