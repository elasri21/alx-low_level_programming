#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words.
 * @str: string
 * Return: array of strings
 */
char **strtow(char *str)
{
int i, j, num_words = 0;
int word_length = 0, in_word = 0, word_index = 0;
char **words, *word;
if (str == NULL || *str == '\0')
return (NULL);
if (str[0]== ' ' && str[1] == '\0')
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (!in_word)
{
num_words++;
in_word = 1;
}
word_length++;
}
else
in_word = 0;
}
words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
word = (char *)malloc((word_length + 1) * sizeof(char));
if (word == NULL)
{
free(words);
return (NULL);
}
in_word = 0;
word_length = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (!in_word)
{
word_index++;
in_word = 1;
}
word[word_length++] = str[i];
}
else
{
if (in_word)
{
word[word_length] = '\0';
words[word_index - 1] = word;
word_length = 0;
word = (char *)malloc((word_length + 1) * sizeof(char));
if (word == NULL)
{
for (j = 0; j < word_index - 1; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
in_word = 0;
}
}
}
if (in_word)
{
word[word_length] = '\0';
words[word_index - 1] = word;
}
else
free(word);
words[num_words] = NULL;
return (words);
}
