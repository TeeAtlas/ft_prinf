/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:41:40 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 11:43:52 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string. s1 is
the string to be trimmed and set is the refference char 
to trim from string -- null if allocation fails*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	str = 0;
	if (s1 != 0 && set != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j -1] && ft_strchr(set, s1[j - 1]) && (j > i))
			j--;
		str = (char *) malloc ((sizeof(char)) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	if (!s1 || !set)
		return (NULL);
	return (str);
}

// int	main()
// {
// 	// char s[] = "  \n\n\t  This is not the way, dog.\n";
// 	// printf("\nbefore:\n%s\n", s);
// 	printf("\t%s\n", ft_strtrim("abiloveyour...bczzzzzz", "abcz"));
// 	printf("\t\t\t%s\n", ft_strtrim("xmotheryz", "xyz"));
// 	return 0;

// 	return(0);
// }
