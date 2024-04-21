/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:58:14 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 11:45:16 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("ft_isalnum: %d, isalnum: %d\n", ft_isalnum('b'), isalnum('b'));
	printf("ft_isalnum: %d, isalnum: %d\n", ft_isalnum(' '), isalnum(' '));
	printf("ft_isalnum: %d, isalnum: %d\n", ft_isalnum('7'), isalnum('7'));
	return (0);
} */
