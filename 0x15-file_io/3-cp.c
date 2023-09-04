#include "main.h"
/**
 * create_buf - allocate memoty to the buf
 * @f: buffer name
 * Return: pointer to string
 */
char *create_buf(char *f)
{
char *buf;
buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", f);
exit(99);
}
return (buf);
}

/**
 * c_file - close file
 * @f_d: descriptor
 * Return: nothing
 */
void c_file(int f_d)
{
int cl;
cl = close(f_d);
if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d);
exit(100);
}
}
/**
 * main - main function
 * @ac: number of arguments
 * @av: array of arguments.
 * Return: integer
 */
int main(int ac, char *av[])
{
int fr, to, rd, wr;
char *buf;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = create_buf(av[2]);
fr = open(av[1], O_RDONLY);
rd = read(fr, buf, 1024);
to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (fr == -1 || rd == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", av[1]);
free(buf);
exit(98);
}
wr = write(to, buf, rd);
if (to == -1 || wr == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", av[2]);
free(buf);
exit(99);
}
rd = read(fr, buf, 1024);
to = open(av[2], O_WRONLY | O_APPEND);
} while (rd > 0);
free(buf);
c_file(fr);
c_file(to);
return (0);
}
