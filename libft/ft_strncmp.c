/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:01:55 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/21 10:32:20 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n - 1)
	{
		if ((s1[i] != s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("abc", "ABC", 1), ft_strncmp("abc", "ABC", 1));
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("Hello", "Hello", 0), ft_strncmp("Hello", "Hello", 0));
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("Nala", "Nalo", 3), ft_strncmp("Nala", "Nalo", 3));
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("Nala", "Nalo", 4), ft_strncmp("Nala", "Nalo", 4));
	return (0);
} */
