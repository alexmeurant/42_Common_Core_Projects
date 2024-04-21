/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:02:21 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/16 15:14:19 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *) s1;
	ptr_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (*ptr_s1 == *ptr_s2 && n > 1)
	{
		ptr_s1++;
		ptr_s2++;
		n--;
	}
	return (*ptr_s1 - *ptr_s2);
}

/* int	main(void)
{
	printf("memcmp: %d, ft_memcmp: %d\n", memcmp("ABC", "abc", 3),
	ft_memcmp("ABC", "abc", 3));
	printf("memcmp: %d, ft_memcmp: %d\n", memcmp("ABC", "ABC", 0),
	ft_memcmp("ABC", "ABC", 0));
	printf("memcmp: %d, ft_memcmp: %d\n", memcmp("ABC", "Abc", 1),
	ft_memcmp("ABC", "Abc", 1));
	return (0);
} */
