#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int words = 0, i, len = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	return (words);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL or function fails - NULL.
 *         Otherwise - a pointer to the array of words.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0, wc = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = count_words(str);
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] && count < wc; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;
			words[count] = malloc(sizeof(char) * (len + 1));
			if (words[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (j = i, k = 0; k < len; j++, k++)
				words[count][k] = str[j];
			words[count][k] = '\0';
			count++;
			i = j;
		}
	}
	words[count] = NULL;
	return (words);
}
