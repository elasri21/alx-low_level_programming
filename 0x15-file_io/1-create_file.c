#include "main.h"
/**
 * create_file - create file
 * @f_name: file name
 * @text: content
 * Return: integer
 */
int create_file(const char *f_name, char *text)
{
int fd, wr, l = 0;
if (f_name == NULL)
return (-1);
if (text != NULL)
{
for (l = 0; text[l];)
l++;
}
fd = open(f_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(fd, text, l);
if (fd == -1 || wr == -1)
return (-1);
close(fd);
return (1);
}
