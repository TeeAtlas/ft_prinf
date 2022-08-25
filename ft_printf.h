/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:24:52 by taboterm          #+#    #+#             */
/*   Updated: 2022/08/25 14:47:14 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(const char *fmt, ...);
int			ft_printchar(int c);
int			ft_len(long int n);
int			ft_uitoa(unsigned long int n);
int			ft_putnum_mod(long n, char *base, int base_len);
int			ft_printptr(unsigned long long ptr);
int			ft_pt_len(unsigned long int addi);
int			ft_printstr(char *str);

#endif