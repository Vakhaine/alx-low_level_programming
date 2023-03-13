#include <stdlib.h>
#include "main.h"

#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
	if (str == NULL || strlen(str) == 0)
	{
		return NULL;
	}

	int word_count = 0;for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
		{
			word_count++;
		}
	}

	char **words = malloc(sizeof(char*) * (word_count + 1));

	if (words == NULL)
	{
        return NULL;
	}

	int word_index = 0;
	int start_index = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
		{
			start_index = i;
		}
		if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
		{
			int word_length = i - start_index + 1;
			words[word_index] = malloc(sizeof(char) * (word_length + 1));
			if (words[word_index] == NULL)
	    {
		for (int j = 0; j < word_index; j++)
		{
		free(words[j]);
                }
		free(words);
		return NULL;
        }
	strncpy(words[word_index], &str[start_index], word_length);
	words[word_index][word_length] = '\0';
	word_index++;
	}
	}

	words[word_count] = NULL;

	return words;
}
