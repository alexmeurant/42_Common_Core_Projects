/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:00:18 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 17:55:54 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
		ft_memcpy((char *)dst, (char *)src, len);
	return (dst);
}

/* int main(void)
{
	char	man_src[] = "Hello World!";
	memmove(man_src + 6, man_src, 5);
	printf("The moved string by memmove: %s\n", man_src);

	char src[] = "Hello World!";
	memmove(src + 6, src, 5);
	printf("The moved string by ft_memmove: %s\n", src);

	return 0;
} */
