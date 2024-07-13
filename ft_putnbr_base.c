#include <stdio.h>
#include <stdarg.h>
#include "libftprintf.h"

static int		check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	nbr_final[100];
	int	i;

	i = 0;
	len = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[len])
			len++;
		while (nbr)
		{
			nbr_final[i] = nbr % len;
			nbr = nbr / len;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
    return(len);
}