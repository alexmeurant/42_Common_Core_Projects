/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:59:03 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 11:53:25 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("ft_isprint: %d, isprint: %d\n", ft_isprint('n'), isprint('n'));
	printf("ft_isprint: %d, isprint: %d\n", ft_isprint('\n'), isprint('\n'));
	return (0);
} */
