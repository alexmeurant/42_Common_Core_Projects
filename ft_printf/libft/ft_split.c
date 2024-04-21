/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:04:23 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/21 14:17:51 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	count_strings(char const *s, char c)
{
	unsigned int	i;
	unsigned int	string;

	i = 0;
	string = 0;
	while (s[i])
	{
		while (s[i] && ((char *)s)[i] == c)
			i++;
		if (s[i])
			string++;
		while (s[i] && ((char *)s)[i] != c)
			i++;
	}
	return (string);
}

char	*create_string(char *str, char c, char **split)
{
	char			*string;
	unsigned int	str_len;
	unsigned int	i;

	str_len = string_len(str, c);
	string = (char *)malloc((str_len + 1) * sizeof(char));
	if (!string)
	{
		while (*split)
			free(*split++);
		return (NULL);
	}
	i = 0;
	while (i < str_len)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	split_len;
	unsigned int	i;
	unsigned int	j;

	split_len = count_strings(s, c);
	split = (char **)malloc(sizeof(char *) * (split_len + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ((char *)s)[i] == c)
			i++;
		if (s[i])
		{
			split[j] = create_string((char *)s + i, c, split);
			j++;
		}
		while (s[i] && ((char *)s)[i] != c)
			i++;
	}
	split[j] = 0;
	return (split);
}

/* int	main(int ac, char **av)
{
	int i = 0;
	char **split;

	if (ac != 2)
		return (1);
	else
	{
		printf("nb of words: %d\n", count_strings(av[1], ' '));
		split = ft_split(av[1], ' ');
		while (split[i])
		{
			printf("word %d: %s\n", i + 1, split[i]);
			free(split[i]);
			i++;
		}
	}
	free(split);
	return (0);
} */
