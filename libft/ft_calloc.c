/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:45:11 by taboterm          #+#    #+#             */
/*   Updated: 2022/05/24 09:15:45 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* allocates the requested memory and returns a pointer to it. 
The difference in malloc and calloc is that malloc does not 
set the memory to zero where as calloc sets allocated memory 
to zero.*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	int		c;
// 	printf("String after bytes %s\n", ft_calloc(5, c));
// 	printf("String after theirs %s\n", calloc(5, c));
// }
