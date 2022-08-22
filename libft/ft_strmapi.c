/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:01:52 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/14 17:29:10 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Applies the function f to each character of the string passed
as argument by giving its index as first argument to create a
 “fresh” new string (with malloc(3)) resulting from the successive
applications of f.
Param. #1 The string to map.
Param. #2 The function to apply to each character of s and its index.
Return value The “fresh” string created from the successive applications off.
Libc functions malloc(3)*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = (char *) malloc ((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	my_func(unsigned int i, char str)
{
	printf ("My inner function: index = %d and %c\n", i, str);
	return (str - 32);
}

// int main()
// {
// 	char str[10] = "kooky."; // how do I keep the period?
//  	printf("The result is %s\n", str);
//  	char *result = ft_strmapi(str, my_func);
//  	printf("The result is %s\n", result);
// 	return 0;
// }
