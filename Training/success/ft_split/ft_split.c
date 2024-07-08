#include <stdlib.h>

int	countwords (char *str)
{
	int i = 0;
	int flag = 0;
	int words = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
		i++;
	}
	return (words);
}


char	*slotwords (char *start, int len)
{
	int i = 0;
	char *word;
	word = malloc ((len + 1) * 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split (char *str)
{
	int num = 0;
	int words = countwords(str);
	char **result;
	result = malloc ((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		
		if (*str == '\0')
			break;
	
		char *start = str;
		int len = 0;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
		{
			str++;
			len++;
		}
		result[num] = slotwords(start, len);
		if (!result[num])
			return (NULL);
		num++;
	}
	result[num] = NULL;
	return (result);
}

/*#include <stdio.h>
int main (int argc, char **argv)
{
	int i = 0;
	char **split = ft_split(argv[1]);
	while (split[i])
	{
		printf("%s\n",split[i]);
		i++;
	}
	return 0;
}
*/

