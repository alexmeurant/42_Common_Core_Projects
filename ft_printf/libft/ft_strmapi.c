/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:04:46 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/19 15:54:38 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	unsigned int	s_len;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

/* int	main(void)
{
	char	ft_maj(unsigned int i, char c)
	{
		(void)i;
		if (c >= 'a' && c <= 'z')
			return (c - 32);
		return (c);
	}

	const char	*s = "hello world";
	char		*result = ft_strmapi(s, &ft_maj);

	printf("Result: %s\n", result);
	free(result);
	return (0);
} */
