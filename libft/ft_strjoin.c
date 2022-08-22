/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:22:39 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 11:36:47 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*res;

	i = 0;
	j = 0;
	res = (char *)malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s1))
		res[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen(s2))
		res[j++] = s2[i++];
	res[j++] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char *s1;
// 	char *s2;

// 	s1 = "Wow! ";
// 	s2 = "You did it!";
// 	printf("Newstring is:\n");
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return(0);
// }