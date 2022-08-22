/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:44:32 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/13 11:33:58 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* write a function that takes a string, splits it into words
and returns them as a NULL-terminated array of strings. A "word" is definded as
as part of a string delimited either by spaces/tabs/new lines, or by 
the start/end of the string. */

int	num_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}	
		}
		else
		{
			i++;
		}
	}
	return (words);
}

// int	word_len(char *str, int	i)
// {
// 	int	c;
//
// 	c = 0;
//	while (str[i] && str [i]!= ' ' && str[i] != '\t' && str[i] != '\n')
//	{
// 	i++;
// 	c++;
//	}
// 	return (c);
// }

char	*ft_word(const char *s1, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		word[i] = s1[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**tab;

	tab = (char **)malloc((num_words(s, c) + 1) * sizeof(char *));
	if (!tab || !s)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			tab[j] = ft_word(s, index, i);
			j++;
			index = -1;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

// int	main(void)
// {
// 	// printf("%d\n", num_words("    Tania    was  here !"));
// 	// printf("\n");
// 	// printf("%d\n", num_words("    Tania    was  here ! I am god    ."));

// 	// printf("%d\n", word_len("Tania was here !", 10));
// 	// printf("\n");
// 	// printf("%d\n", word_len("Tania was here !", 7));

// 	// printf("%s\n", ft_word("Tania was here !", 4, 8));
// 	// printf("\n");
// 	// printf("%s\n", ft_word("Tania was here !", 5, 9)); 
// }

// int		main(void)
// {
// 	char	**tab;
// 	unsigned int	i;
// 	int	c;
// 	// char *str;
//
// 	c = 0;
// 	tab = ft_split("Tania     says   hi, and fuck you !   ", 040);
// 	// delimeter is an empty space. can i have more than one delimeter?
// 	i = 0;
// 	while (i < 7)
// 	{
// 		// while (str[i] && str [i]!= ' ' && str[i] != '\t' && str[i] != '\n')
// 		// {
// 		// i++;
// 		// c++;
// 		// }
// 		printf("tab[%d] = %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return(0);
// }
