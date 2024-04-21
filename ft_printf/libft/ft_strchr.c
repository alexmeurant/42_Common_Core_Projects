/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:01:31 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/21 10:13:25 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char)c == s[i])
		return ((char *)s + i);
	return (NULL);
}

/* int	main(void)
{
	char	*s = "Hello world!";
	char	*char_man_pos = strchr(s, 'w');
	char	*char_pos = ft_strchr(s, 'w');
	printf("strchr : %s, ft_strchr : %s\n", char_man_pos, char_pos);
	return (0);
} */
