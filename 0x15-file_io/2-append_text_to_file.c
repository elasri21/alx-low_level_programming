#include "main.h"
/**
 * append_text_to_file - text will be appednd
 * @f_name: pointer to the file
 * @text: text to append
 * Return: integer
 */
int append_text_to_file(const char *f_name, char *text)
{
int op, wr, l = 0;
if (f_name == NULL)
return (-1);
if (text != NULL)
{
for (l = 0; text[l];)
l++;
}
op = open(f_name, O_WRONLY | O_APPEND);
wr = write(op, text, l);
if (op == -1 || wr == -1)
return (-1);
close(op);
return (1);
}
