/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:47:00 by taboterm          #+#    #+#             */
/*   Updated: 2022/05/23 15:22:34 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strchr() function is used to find when the 
character first occurred in the string, if 
doesn't exist - return null pointer
need to convert to char * because it returns a const 
char pointer s points to beginning of character, c char 
in ascii*/

char	*ft_strchr(const char *s, int c)
/* s points to beginning of character string, 
c converted to char*/
{
	int			i;
	const char	*str;
	char		ch;

	i = 0;
	str = s;
	ch = (char) c;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == ch)
		return ((char *)str + i);
	return ((char *) 0);
}

// int	main(void)
// {
// 	char	str[] = "1234567c89";
// 	printf("Test \n");
// 	printf("before function: %s\n", str);
// 	printf("after function: %s\n", ft_strchr(str, '4'));
// 	printf("Library function: %s\n", strchr(str, '4'));
// 	return	0;
// }
