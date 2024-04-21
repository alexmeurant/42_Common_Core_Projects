/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:02:34 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/16 15:50:45 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && (i + ft_strlen(needle) - 1) < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*strnstr(const char *s, const char *find, size_t slen)
	{
		char c, sc;
		size_t len;

		if ((c = *find++) != '\0')
		{
			len = strlen(find);
			do
			{
				do
				{
					if (slen-- < 1 || (sc = *s++) == '\0')
						return (NULL);
				} while (sc != c);
				if (len > slen)
					return (NULL);
			} while (strncmp(s, find, len) != 0);
			s--;
		}
		return ((char *)s);
	}

	printf("strnstr: %s, ft_strnstr : %s\n", strnstr("Hello world!", "", 4),
	ft_strnstr("Hello world!", "", 4));
	printf("strnstr: %s, ft_strnstr : %s\n", strnstr("Hello world!", "wo", 8),
	ft_strnstr("Hello world!", "wo", 8));
	printf("strnstr: %s, ft_strnstr : %s\n", strnstr("Hello world!", "wo", 5),
	ft_strnstr("Hello world!", "wo", 5));
}
 */
