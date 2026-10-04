#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*get_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;
	int		end;

	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	end = 0;
	while (s[end])
	{
		while (s[end] == c)
			end++;
		if (!s[end])
			break ;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		result[i] = get_word(s, start, end);
		if (!result[i])
			return (NULL);
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world how", ' ');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/