/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:02:09 by ameurant          #+#    #+#             */
/*   Updated: 2024/05/02 08:54:17 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if ((unsigned char) c == *(unsigned char *) s)
			return ((unsigned char *) s);
		s++;
		n--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[50];
	strcpy(str, "Hello world!");

	char	*pos_memchr = memchr(str, 'o', 5);
	char	*pos_ft_memchr = ft_memchr(str, 'o', 5);
	printf("memchr: %s, ft_memchr: %s\n", pos_memchr, pos_ft_memchr);

	pos_memchr = memchr(str, 'o', 3);
	pos_ft_memchr = ft_memchr(str, 'o', 3);
	printf("memchr: %s, ft_memchr: %s\n", pos_memchr, pos_ft_memchr);
	return (0);
}*/
