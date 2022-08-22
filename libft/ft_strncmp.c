/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:22:40 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/09 15:05:34 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strcmp, strncmp -- compare strings*/

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//  int main (void) 
//	{
//  	char str1[15] = "1";
//  	char str2[15] = "1";
//  	int result = ft_strcmp(str1, str2);
//   	printf("%d\n", result);
//  	if(result < 0) {
//         	printf("str1 is less than str2\n");
//  	} else if(result > 0) {
//  		printf("str2 is less than str1\n");
//  	} else {
//  		printf("str1 is equal to str2\n");
//   	}
//   	return(0);
// }