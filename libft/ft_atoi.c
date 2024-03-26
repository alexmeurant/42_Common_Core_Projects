/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:02:45 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/16 16:04:31 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	result;
	size_t	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		return (result * sign);
	}
	return (0);
}

/* int	main(void)
{
	printf("atoi: %d, ft_atoi: %d\n", atoi("42"), ft_atoi("42"));
	printf("atoi: %d, ft_atoi: %d\n", atoi("-42"), ft_atoi("-42"));
	printf("atoi: %d, ft_atoi: %d\n", atoi("   +42"), ft_atoi("   +42"));
	printf("atoi: %d, ft_atoi: %d\n", atoi("   +-+42"), ft_atoi("   +-+42"));
	printf("atoi: %d, ft_atoi: %d\n", atoi(" n  +-+42"), ft_atoi(" n  +-+42"));
	printf("atoi: %d, ft_atoi: %d\n", atoi("42abc21"), ft_atoi("42abc21"));
	return (0);
} */
