// #include <libftprintf.h>

// int printf_pourcent(char c, int i, const char *format){
//     int j;

//     j = 0;
//     if(format[i + 2] == 'c'){
//         ft_putchar(format[i + 2]);
//         j += 1;
//     }else if(format[i + 2] == 's'){
//         j += printf_nb_string(va_arg(arg_list, char*));
//     }else if(format[i + 2] == 'p'){
//         j += printf_nb_pointeur(va_arg(arg_list, void*));
//     }else if(format[i + 2] == 'd' || format[i + 2] == 'i'){
//         j += printf_nb_integer(va_arg(arg_list, int));
//     }else if(format[i + 2] == 'u'){
//         j += /*printf_nb_unsigedInteger*/printf_nb_intege(va_arg(arg_list, unsigned int));
//     }else if(format[i + 2] == 'x'){
//         //ce seront les même fonction mais avec un retour différent en min ou maj.
//         j += ft_putnbr_base(va_arg(arg_list, unsigned int));
//     }else if(format[i + 2] == 'X'){
//         //ce seront les m^me fonction mais avec un retour différent en min ou maj.
//         j += ft_putnbr_base(va_arg(arg_list, unsigned int));
//     }

//     return(j);
// }