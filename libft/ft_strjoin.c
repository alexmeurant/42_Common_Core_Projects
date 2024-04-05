/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:57 by ameurant          #+#    #+#             */
/*   Updated: 2024/04/05 18:43:39 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcpy((result + s1_len), s2, s2_len + 1);
	return (result);
}

/*int	main(void)
{
	char *s1 = "Hello";
	char *s2 = " world!";
	char *result = ft_strjoin(s1, s2);
	printf("ft_strjoin: %s\n", result);
	free(result);

	char *s1 = "";
	char *s2 = "abc";
	char *result = ft_strjoin(s1, s2);
	printf("ft_strjoin: %s\n", result);
	free(result);
	return (0);
}*/
