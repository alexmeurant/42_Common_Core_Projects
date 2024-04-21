/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:01:41 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/21 10:38:03 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((char)c == s[len])
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*s = "Hello world!";
	char	*char_man_pos = strrchr(s, 'o');
	char	*char_pos = ft_strrchr(s, 'o');
	printf("strrchr : %s, ft_strrchr : %s\n", char_man_pos, char_pos);
	return (0);
} */
