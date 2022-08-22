/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:53:27 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 11:10:35 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area. It's a zero byte string. 
	   the string does not print as it is destroyed*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*(ptr++) = 0;
}

// int main (void) 
// {
//     char str[] = "abcdcdee";
//     int c = 6;
//     ft_bzero(str, c);
//     printf("String after mine|%d| bytes changed 
//     to 0 is - |%s|\n", c, str); bzero(str, c);
//     printf("String after original|%d| bytes 
// 		changed to 0 is - |%s|\n", c, str);return(0);
// }
