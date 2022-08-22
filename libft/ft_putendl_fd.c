/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:02:09 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 15:12:16 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string s to the file desciptor fd followed by a '\n'.
Param. #1 The string to output.
Param. #2 The file descriptor.
Return value - none.
Libc functions write(2).
This functions writes a string s to the file descriptor fd followed by a
'\n' to make a new line*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	write (fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char str[] = "lorem ipsum dolor sit amet";
// 	ft_putendl_fd(str, 2);
// 	return(0);
// }