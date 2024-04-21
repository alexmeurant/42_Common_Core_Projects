/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:00:43 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/21 10:09:21 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i) < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}

/* int	main(void)
{
	char	man_dst[20] = "Hello ";
	const char	*man_src = "world!";
	size_t	man_result = strlcat(man_dst, man_src, 3);
	printf("String after strlcat: %s\n", man_dst);
	printf("Length: %ld\n", man_result);

	char	dst[20] = "Hello ";
	const char	*src = "world!";
	size_t	result = ft_strlcat(dst, src, 3);
	printf("String after ft_strlcat: %s\n", dst);
	printf("Length: %ld\n", result);

	return 0;
} */
