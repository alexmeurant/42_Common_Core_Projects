/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:57:54 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 11:50:41 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("ft_isascii: %d, isascii: %d\n", ft_isascii('b'), isascii('b'));
	printf("ft_isascii: %d, isascii: %d\n", ft_isascii(0xB1), isascii(0xB1));
	return (0);
}
 */
