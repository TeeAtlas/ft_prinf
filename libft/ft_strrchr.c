/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:04 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/09 15:08:31 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strchr, strrchr -- locate character in string
The strrchr() function is identical to strchr(),
except it locates the last occurrence of char.*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		k;

	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			k = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (k == -1)
		return (0);
	return ((char *)&s[k]);
}

//  int main (void) 
// {
// 	const char str[] = "the . quick brown . fox";
//     const char ch = '.';
//     char *result;

//     result = ft_strrchr(str, ch);
//     printf("String after a character is %s\n", result);
//     return(0);
// }
