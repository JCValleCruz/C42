#include <stdlib.h>

char	*ft_strdup (char *src)
{
	int i = 0;
	char *result;

	while (src[i] != '\0')
		i++;
	result = malloc (i + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
