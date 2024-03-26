/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:46 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/18 10:39:37 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return ("");
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	return (ft_memcpy(substr, (char *)s + start, len));
}

/* int	main(void)
{
	char	*s = "Hello world!";
	char	*substr;
	substr = ft_substr(s, 6, 6);
	printf("substr: %s\n", substr);
	free(substr);
	return (0);
} */
