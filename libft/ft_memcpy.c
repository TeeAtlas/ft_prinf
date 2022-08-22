/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:11:05 by taboterm          #+#    #+#             */
/*   Updated: 2022/05/25 13:20:57 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The memcpy() function shall copy n bytes from the object pointed to by s2 
into the object pointed to by s1. If copying takes place between objects that 
overlap, the behavior is undefined. The memcpy() function shall return s1; 
no return value is reversed to indicate an error. No error are defined.*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char src[50] = "hello world";
// 	char dst[50] = "goodbye world";
// 	printf("%s\n", ft_memcpy(dst + 4, src + 4, 4));
// 	return (0);
// }
