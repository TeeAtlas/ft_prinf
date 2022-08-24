/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:51:41 by taboterm          #+#    #+#             */
/*   Updated: 2022/08/24 15:42:58 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (i + 1);
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_itoa_mod(int n, int i, long int num)
{
	char		*str;
	int			check;

	check = 0;
	num = (long int)n;
	i = ft_len(n) - 1;
	str = (char *)ft_calloc(sizeof(char), (i + 2));
	str[i + 2] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		check = 1;
		num *= -1;
	}
	while (i >= check)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	ft_printstr(str);
	free(str);
	return (ft_len(n));
}
