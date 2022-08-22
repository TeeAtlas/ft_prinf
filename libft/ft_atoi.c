/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:28:53 by taboterm          #+#    #+#             */
/*   Updated: 2022/05/24 10:49:17 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -2,147,483,648 to 2,147,483,647	
#include "libft.h"
// /*The atoi() A to I function converts the initial portion of 
// the string pointed to by str to int representation. Can hold positive
// and negative variables*/

// static int	check_limits(long long int res, int sign, char ch)
// {
// 	long int	cpy_res;

// 	cpy_res = res;
// 	if (sign == -1)
// 	{
// 		res = (res + ((ch - 48) + (10 * res)));
// 		if (res > LLONG_MAX)
// 			return (0);
// 	}
// 	if (sign == 1)
// 	{
// 		res = (res + ((ch - 48) + (10 * res)));
// 		if (res < cpy_res)
// 			return (-1);
// 	}
// 	return (1);
// }

// int	ft_atoi(const char *str)
// {
// 	int				i;
// 	long long int		res;
// 	int				sign;

// 	i = 0;
// 	res = 0;
// 	sign = 1;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '-')
// 		sign = -1;
// 	if (str[i] == '-' || str[i] == '+')
// 		i++;
// 	while (str[i])
// 	{
// 		if (str[i] >= 48 && str[i] <= 57)
// 		{
// 			if (check_limits(res, sign, str[i]) == 0)
// 				return (0);
// 			if (check_limits(res, sign, str[i]) == -1)
// 				return (-1);
// 			res = (str[i] - 48) + (10 * res);
// 		}	
// 		else
// 			return (res * sign);
// 		i++;
// 	}
// 	res = res * sign;
// 	return ((int)res);
// }

int	ft_atoi(const char *str)
{
	signed long long int	res;
	int						sign;
	int						i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

// int	main(void)
// {
// 	printf("The maximum value of LONG = %ld\n", LONG_MAX);
//	char	string[] = "-2147483647";
//  printf("return is:%d\n", ft_atoi(string));
// 	printf("original is:%d\n", atoi(string));
//  return (0);
// }