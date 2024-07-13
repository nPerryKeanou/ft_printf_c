#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include "libftprintf.h"



static int ft_putnbr(int nb){
    int i;

    i = 0;
    if (nb < 0)             
	{
		ft_putchar('-');
		nb = -nb;
        i += 1;
	}
	if (nb >= 10)
	{
        i += 1; 
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else{
        i += 1;
        ft_putchar(nb + '0');
    }
    return(i);
}

int main(void) {


    int retour_printf = 0;
    int retour_ft_printf = 0;

    //d et i
    printf("printf ---> %d", INT_MIN);
    ft_putchar('\n');
    ft_printf("ft_printf ---> %d", INT_MIN);
    ft_putchar('\n');
    //c
    //s
    //u
    //x
    //X
    //p
    //%


    return (0);
}