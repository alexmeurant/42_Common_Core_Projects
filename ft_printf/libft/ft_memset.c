/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:59:34 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 11:28:38 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		*temp++ = (unsigned char) c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char man[50];
	strcpy(man, "Hello world!");
	memset(man, '+', 5);
	char b[50];
	strcpy(b, "Hello world!");
	ft_memset(b, '+', 5);
	printf("ft_memset: %s, memset : %s\n", b, man);
	return (0);
} */
