/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:01:55 by ameurant          #+#    #+#             */
/*   Updated: 2024/04/03 17:38:30 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((s1[i] != s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("abc", "ABC", 1), ft_strncmp("abc", "ABC", 1));
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("Hello", "Hello", 0), ft_strncmp("Hello", "Hello", 0));
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("Nala", "Nalo", 3), ft_strncmp("Nala", "Nalo", 3));
	printf("strncmp : %d, ft_strncmp : %d\n",
		strncmp("Nala", "Nalo", 4), ft_strncmp("Nala", "Nalo", 4));
	printf("strncmp : %d, ft_strncmp : %d\n",
		   strncmp("test", "", 1), ft_strncmp("test", "", 1));
	printf("strncmp : %d, ft_strncmp : %d\n",
		   strncmp("", "test", 1), ft_strncmp("", "test", 1));
	printf("strncmp : %d, ft_strncmp : %d\n",
		   strncmp("teste", "testex", 6), ft_strncmp("teste", "testex", 6));
	return (0);
}*/
