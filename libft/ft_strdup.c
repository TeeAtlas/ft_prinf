/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:26:36 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 12:33:02 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// The strdup() function allocates sufficient memory
// for a copy of the string s1, does the copy, and returns 
// a pointer to it.  The pointer may subsequently be used as an
// argument to the function free(3).
// Param #1 pointer to string1

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)malloc (sizeof(char) * (strlen(s1) + 1));
	if (!dst)
		return ((char *) 0);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\n';
	return (dst);
}

// int main(void)
// {
//     char str1[] = "I'm a copy";
//     char *p;

//     p = ft_strdup(str1);
//     printf("this string points to: %s\n",ft_strdup(str1));
//     printf("and this string also points to: %s\n", p);
//     p = strdup(str1);
//     printf("this string is %s\n",strdup(str1));
//     printf("and this string points to %s\n", p);
//     return (0);
// }