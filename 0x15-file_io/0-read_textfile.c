#include "main.h"
#include <stdio.h>
/**
 * read_textfile- print text from file
 * @f_name: file text
 * @alp: length of the output
 * Return: unsigned integer
 */
ssize_t read_textfile(const char *f_name, size_t alp)
{
char *buff;
ssize_t fd;
ssize_t wr;
ssize_t tt;
fd = open(f_name, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * alp);
tt = read(fd, buff, alp);
wr = write(STDOUT_FILENO, buff, tt);
free(buff);
close(fd);
return (wr);
}
