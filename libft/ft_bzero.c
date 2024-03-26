/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:59:50 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 12:14:11 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *) s++ = 0;
		i++;
	}
}

/* int	main(void)
{
	char man[20];
	strcpy(man, "Hello world!");
	bzero(man, 6);
	char s[20];
	strcpy(s, "Hello world!");
	ft_bzero(s, 6);
	printf("ft_bzero: %s, bzero: %s\n", s, man);
} */
