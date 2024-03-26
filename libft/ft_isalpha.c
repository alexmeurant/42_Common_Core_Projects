/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:58:28 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 11:46:56 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("ft_isalpha: %d, isalpha: %d\n", ft_isalpha('b'), isalpha('b'));
	printf("ft_isalpha: %d, isalpha: %d\n", ft_isalpha(' '), isalpha(' '));
	printf("ft_isalpha: %d, isalpha: %d\n", ft_isalpha('J'), isalpha('J'));
	printf("ft_isalpha: %d, isalpha: %d\n", ft_isalpha(','), isalpha(','));
	return (0);
} */
