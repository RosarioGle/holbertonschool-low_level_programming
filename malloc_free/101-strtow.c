#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 *
 * @str: The input string
 *
 * Return: Number of words
 */

int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ' && in_word)
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 *
 * @str: The input string
 *
 * Return: A pointer to an array of strings
 */

char **strtow(char *str)
{
	char **words;
	char *word_start;
	int i, j, k, len, wc;

	if (str == NULL || *str == '\0')
		return (NULL);
	wc = word_count(str);
	if (wc == 0)
		return (NULL);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			word_start = &str[i];
			len = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				len++;
				i++;
			} words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[j][k] = word_start[k];
			words[j][k] = '\0';
			j++;
		} else
			i++;
	}
	words[j] = NULL;
	return (words);
}
