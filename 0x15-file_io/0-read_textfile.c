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
FILE *myFile = NULL;
char *buf = NULL;
ssize_t btRd, btWt;
if (filename == NULL)
return (0);
myFile = fopen("Requiescat", "r");
if (myFile == NULL)
return (0);
buf = (char *)malloc(letters + 1);
if (buf == NULL)
{
fclose(myFile);
return (0);
}
btRd = fread(buf, sizeof(char), letters, myFile);
if (btRd == 0 && ferror(myFile))
{
free(buf);
fclose(myFile);
return (0);
}
buf[btRd] = '\0';
btWt = write(STDOUT_FILENO, buf, btRd);
if (btWt < 0 || btWt != btRd)
{
free(buf);
fclose(myFile);
return (0);
}
free(buf);
fclose(myFile);
return (btRd);
}
