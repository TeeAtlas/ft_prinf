/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:57:16 by taboterm          #+#    #+#             */
/*   Updated: 2022/04/29 18:05:52 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
// 	int temp; //must call a temp int for the value to be placed

// 	temp = ft_isprint('1'); //executing fuction, int does not have to be called
// 	printf("%d\n", temp);
// 	return(0);
// }