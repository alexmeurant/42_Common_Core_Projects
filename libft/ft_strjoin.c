/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:57 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/18 11:07:56 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned int	i;
	unsigned int	s1_len;

	if (!s1 || !s2)
		return (NULL);
	result = ft_strdup(s1);
	s1_len = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		result[s1_len + i] = ((char *)s2)[i];
		i++;
	}
	result[s1_len + i] = '\0';
	return (result);
}

/* int	main(void)
{
	char *s1 = "Hello";
	char *s2 = " world!";
	char *join = ft_strjoin(s1, s2);
	printf("ft_strjoin: %s\n", join);
	free(join);
	return (0);
} */
