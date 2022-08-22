/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:47:16 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 11:41:43 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strstr, strcasestr, strnstr -- locate a substring in a string
The strnstr() function locates the first occurrence of the null-terminated
string needle in the string haystack, where not more than len characters
are searched.  Characters that appear after a `\0' character are not
searched. Since the strnstr() function is a FreeBSD specific API, it
should only be used when portability is not a concern.*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

// int main () 
// {
//     const char haystack[20] = "TutorialsPoint";
//     const char needle[10] = "to";
//     char *result;

//     result = ft_strnstr(haystack, needle, 4);
//     printf("The substring is: %s\n", result);
//     return(0);
// }
