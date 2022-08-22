/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:45:03 by taboterm          #+#    #+#             */
/*   Updated: 2022/05/20 11:14:22 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The memcmp() function returns an integer less than, equal to,
 or greater than zero if the first n bytes of s1 is found, 
 respectively, to be less than, to match, or be greater 
 than the first n bytes of s2*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char str1[] = "Spot the dog";
// 	char str2[] = "Spot the lazy dog";
// 	printf("%d\n", ft_memcmp(str1, str2, 20));
// 	return 0;
// }
