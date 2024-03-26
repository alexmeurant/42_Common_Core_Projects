/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:00:30 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/15 13:00:07 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	if (src_len + 1 < size)
		ft_memcpy(dst, src, src_len + 1);
	else
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (src_len);
}

/* int	main(void)
{
	char	man_src[] = "Hello World!";
	char	man_dst[20];
	size_t	man_src_len = strlcpy(man_dst, man_src, 20);
	printf("The string copied by strlcpy: %s\n", man_dst);
	printf("The length of the copied string by strlcpy: %ld\n", man_src_len);

	char	src[] = "Hello World!";
	char	dst[20];
	size_t	src_len = ft_strlcpy(dst, src, 20);
	printf("The string copied by ft_strlcpy: %s\n", dst);
	printf("The length of the copied string by ft_strlcpy: %ld\n", src_len);

	return 0;
} */
