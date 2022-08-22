/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:45:31 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 15:22:30 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Description Applies the function f to each character of the string passed
as argument, and passing its index as first argument. Each
character is passed by address to f to be modified if necessary.
Param. #1 The string to iterate.
Param. #2 The function to apply to each character of s and its index.
Return value None.
Libc functions None.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// void	my_func(unsigned int i, char *str)
// {
// 	printf("My inner function: index = %d and the string is %s\n", i, str);
// }

// int main(void)
// {
// 	char str[10] = "Hello.";
//  	printf("The result is %s\n", str);
//  	ft_striteri(str, my_func);
//  	printf("The result is %s\n", str);
//  	return 0;
// }
