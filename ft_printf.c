/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:42:26 by taboterm          #+#    #+#             */
/*   Updated: 2022/08/22 13:51:20 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
#include	<limits.h>

int	ft_conversion(va_list args, const char flag)
{
	int	len;

	len = 0;
	if (flag == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (flag == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (flag == 'u')
		len += ft_uitoa(va_arg(args, unsigned int));
	else if (flag == 'i' || flag == 'd')
		len += ft_itoa_mod(va_arg(args, int), 0, 0);
	else if (flag == 'x')
		len += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", 16);
	else if (flag == 'X')
		len += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", 16);
	else if (flag == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (flag == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, fmt);
	i = 0;
	len = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			len += ft_conversion(args, fmt[i]);
		}
		else
			len += ft_printchar(fmt[i]);
			i++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
	// char str[] = "Hello, World";
	// ft_printf("%c", str);

	// ft_printf("%s", str);
	// int a = -45;
// 	ft_printf("%s, %i %s and %u bigger still, and this %p is it's address", 
// 					str, a, "is a big number", b, b);
// 	// int a = 2147483648;
	// ft_printf("%i", a);
// 	// ft_printf("%d", a);
// 	// ft_printf("%%", '%');
// 	// int n = 28;
// 	// ft_printf("%x", n);
// }

// int main()
// {
// 	ft_printstr("test 5: %s ", "-");
// 	ft_printstr("test 6: %s %s ", "", "-");
// 	ft_printstr("test 7: %s %s ", " - ", "");
// 	ft_printstr("test 8: %s %s %s %s %s", " - ", "", "4", "", s2);
// 	ft_printf("test 9: %s %s %s %s %s ", " - ", "", "4", "", "2 ");
// 	ft_printstr("test 10: NULL %s NULL ", NULL);
	// return (0);
// }

// int main()
// {
// 	ft_printf(" %p ", -1);
// 	ft_printf(" %p ", 50);
// 	// ft_printf(" %p ", 15);
// 	// ft_printf(" %p ", 16);
// 	// ft_printf(" %p ", 17);
// 	ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
// 	ft_printf(" %p %p ", INT_MIN, INT_MAX);
// 	// ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
// 	// ft_printf(" %p %p ", 0, 0);

// 	return (0);
// }

// int main()
// {
// 	TEST(1, print(" %u ", 0));
// 	TEST(25, print(" %u ", LONG_MIN));
// 	TEST(29, print(" %u %u %u %u %u %u %u", 
// 		INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));	
// 	return (0);
// }

// int main(int ac)
// {    
// 	ft_printf(" %i ", INT_MIN);
// 	return 0;
// }