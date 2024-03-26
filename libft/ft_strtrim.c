/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:04:11 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/21 13:38:09 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == ((char *)set)[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*empty_string(void)
{
	char	*empty;

	empty = malloc(sizeof(char));
	if (!empty)
		return (NULL);
	ft_strlcpy(empty, "", 1);
	return (empty);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	s1_len;
	char			*trim;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	if (i == s1_len)
		return (empty_string());
	while (check_set(s1[s1_len - 1], set))
		s1_len--;
	trim = (char *)malloc((s1_len + 1 - i) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + i, s1_len + 1 - i);
	return (trim);
}

/* int	main(void)
{
	char *s1 = ft_strtrim("aoaoaaaHello world!ooaaaooa", "oa");
	printf("ft_strtrim: %s\n", s1);
	free(s1);
	return (0);
} */
