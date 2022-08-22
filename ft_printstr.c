/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:01:17 by taboterm          #+#    #+#             */
/*   Updated: 2022/08/22 12:00:45 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int		i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

// int main()
// {
// // 	ft_printstr("test 5: %s ", "-");
// // 	ft_printstr("test 6: %s %s ", "", "-");
// // 	ft_printstr("test 7: %s %s ", " - ", "");
// // 	ft_printstr("test 8: %s %s %s %s %s", " - ", "", "4", "", s2);
// 	ft_printf("test 9: %s %s %s %s %s ", " - ", "", "4", "", "2 ");
// 	// ft_printstr("test 10: NULL %s NULL ", NULL);
// 	return (0);
// }