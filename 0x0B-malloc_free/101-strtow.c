#include <stdlib.h>
#include "main.h"
/**
 * count_words - counts the number of words in a string
 * @str: input string
 *
 * Return: number of words in str
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, n, words;
	char **matrix, *temp;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	matrix = malloc((words + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0, j = 0; j < words; i++)
	{
		if (str[i] == ' ')
			continue;
		for (n = i; str[n] != ' ' && str[n] != '\0'; n++)
			;
		temp = malloc((n - i + 1) * sizeof(char));
		if (temp == NULL)
		{
			for (k = 0; k < j; k++)
				free(matrix[k]);
			free(matrix);
			return (NULL);
		}
		for (k = 0; i < n; k++, i++)
			temp[k] = str[i];
		temp[k] = '\0';
		matrix[j] = temp;
		j++;
	}
	matrix[j] = NULL;
	return (matrix);
}
