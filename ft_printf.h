/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:24:52 by taboterm          #+#    #+#             */
/*   Updated: 2022/08/22 13:40:03 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

int			ft_printf(const char *fmt, ...);
int			ft_printchar(int c);
int			ft_len(long int n);
int			ft_uitoa(unsigned long int n);
int			ft_itoa_mod(int n, int i, long int num);
int			ft_printstr(char *s);
int			ft_puthex(long n, char *base, int base_len);
int			ft_percent(void);
int			ft_print_ptr(unsigned long long ptr);
void		ft_pointer(unsigned long int num);
int			ft_pt_len(unsigned long int addi);
// void		ft_putchar_fd(char c, int fd);

#endif