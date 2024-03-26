/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:00:05 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 17:39:44 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* int main(void)
{
	char	man_src[] = "Hello world!";
	char	man_dst[20];
	memcpy(man_dst, man_src, strlen(man_src) + 1);
	printf("The copied string by memcpy: %s\n", man_dst);

	char src[] = "Hello world!";
	char dst[20];
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("The copied string by ft_memcpy: %s\n", dst);
	return 0;
} */
