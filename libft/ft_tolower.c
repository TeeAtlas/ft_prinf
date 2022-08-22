/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:37:13 by taboterm          #+#    #+#             */
/*   Updated: 2022/05/18 14:45:12 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{	
	if (c >= 65 && c <= 90)
	c += 32;
	{
		return (c);
	}
}

// int	main(void)
// {
// 	char ch;
// 	ch = 'K';
// 	printf("lowercase of %c is %c\n", ch, ft_tolower(ch));
// 	printf("lowercase of %d is %d\n", ch, ft_tolower(ch));
// 	return	0;
// }