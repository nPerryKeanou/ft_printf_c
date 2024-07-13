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

    int min_int = INT_MIN;
    int max_int = INT_MAX;
    unsigned int min_uint = 0;
    unsigned int max_uint = UINT_MAX;
    int retour_printf = 0;
    int retour_ft_printf = 0;

    char *testChar = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaadddddddddd";
    int test_p = 42;
    int *ptest_p = &test_p;


    //d et i
    ft_putchar('\n');
    retour_printf = printf("printf ---> %d\n", -8);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %d\n", -8);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %d\n", 8);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %d\n", 8);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %d\n", -0);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %d\n", -0);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %d\n", 0);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %d\n", 0);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %d\n", min_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %d\n", min_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %d\n", max_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %d\n", max_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');

    ft_putchar('\n');
    retour_printf = printf("printf ---> %i\n", -8);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %i\n", -8);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %i\n", 8);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %i\n", 8);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %i\n", -0);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %i\n", -0);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %i\n", 0);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %i\n", 0);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %i\n", min_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %i\n", min_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %i\n", max_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %i\n", max_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    // retour_printf = printf("printf ---> %i\n", 10.2);
    // ft_putnbr(retour_printf);
    // ft_putchar('\n');
    // retour_ft_printf = ft_printf("ft_printf ---> %i\n", 10.2);
    // ft_putnbr(retour_ft_printf - 3);
    // ft_putchar('\n');
    // ft_putchar('\n');
    
    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('\n');

    //c
    retour_printf = printf("printf ---> %c\n", 'a');
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %c\n", 'a');
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %c\n", '1');
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %c\n", '1');
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %c\n", '-');
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %c\n", '-');
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %c\n", '\n');
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %c\n", '\n');
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');

    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('\n');
    
    //s
    retour_printf = printf("printf ---> %s\n", "");
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %s\n", "");
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %s\n", "ok mec");
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %s\n", "ok mec");
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %s\n", testChar);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %s\n", testChar);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');

    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('\n');

    //u
    retour_printf = printf("printf ---> %u\n", max_uint);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %u\n", max_uint);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %u\n", min_uint);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %u\n", min_uint);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %u\n", -0);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %u\n", -0);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');

    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('\n');

    //x
    retour_printf = printf("printf ---> %x\n", min_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %x\n", min_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %x\n", max_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %x\n", max_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %x\n", max_uint);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %x\n", max_uint);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %x\n", 10);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %x\n", 10);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %x\n", 16);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %x\n", 16);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %x\n", 17);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %x\n", 17);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');

    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('\n');

    //X
    retour_printf = printf("printf ---> %X\n", min_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %X\n", min_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %X\n", max_int);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %X\n", max_int);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %X\n", max_uint);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %X\n", max_uint);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %X\n", 10);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %X\n", 10);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %X\n", 16);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %X\n", 16);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');
    retour_printf = printf("printf ---> %X\n", 17);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %X\n", 17);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');

    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('\n');

    //p
    retour_printf = printf("printf ---> %p\n", &test_p);
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %p\n", &test_p);
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');

    ft_putchar('\n');
    ft_putchar('\n');
    ft_putchar('\n');

    //%
    retour_printf = printf("printf ---> %% ok\n");
    ft_putnbr(retour_printf);
    ft_putchar('\n');
    retour_ft_printf = ft_printf("ft_printf ---> %% ok\n");
    ft_putnbr(retour_ft_printf - 3);
    ft_putchar('\n');
    ft_putchar('\n');


    return (0);
}