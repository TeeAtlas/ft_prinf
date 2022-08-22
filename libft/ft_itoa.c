/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:51:41 by taboterm          #+#    #+#             */
/*   Updated: 2022/08/19 20:47:18 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
Param 1 n interger
Return poiter to char str*/

int	ft_diglen(int n)
{
	long long int	i;

	i = 0;
	if (n == 0)
		return 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t			i;
	char			*str;
	long long int	num;

	num = n;
	i = ft_diglen(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (n < 0)
	{
		num *= -1;
		i++;
	}
	if (!(str))
		return (NULL);
	*(str + i) = 0;
	while (i--)
	{
		*(str + i) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}

int	main()
{
	int n = -9907897;
	ft_itoa(n);
}