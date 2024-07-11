#include <stdio.h>
#include <stdarg.h>


/*
    La taille de 50 octets était arbitraire et prudente pour la plupart des conversions d'entiers ou de chaînes de caractères courantes en base 16. Cela inclut généralement la conversion d'entiers 32 bits (int, unsigned int) et de chaînes de caractères de longueur modérée.
    ft_putnbr_hexadecimal
*/
void    *printf_nb_pointeur(void *p){
    return(ft_convert_hexadecimal(unsigned int)(*p));
}