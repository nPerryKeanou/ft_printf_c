#include <stdio.h>
#include <stdarg.h>

/*
    va_start    :   Initialise une variable ' va_list ' à utiliser avec ' va_arg ' et ' va_end '. 
                    Elle doit être appelée avant d'accéder aux arguments variables.

                    ex : void va_start(va_list ap, last);
                        - 'ap' est la variable 'va_list'.
                        - 'last' est le nom du dernier paramètre fixe avant le début des arguments variable.
    
    va_list     :   Stocke les arguments d'une fonction variadique.

                    ex : va_list ap;


    va_arg      :   Récupère l'argument suivant dans la liste des paramètre de la fonction.

                    ex : type va_arg(va_list ap, type);
                        - 'ap' est la variable 'va_list'.
                        - 'type' est le type du prochain argument à récupérer.


    va_copy     :   Copie l'état d'une variable 'va_list' dans une autre. Cela est utile si vous devez parcourir la list des arguments plus d'une fois.

                    ex : void va_copy(va_list dest, va_list src);
                        - 'dest' la variable 'va_list' de destination.
                        - 'src' la variable 'va_list' source.


    va_end      :   Termine l'utilisation d'une variable 'va_list'. Elle doit être appelé après avoir fini d'utiliser les arguments variables.

                    ex : void va_end(va_list ap);
                        - 'ap' est la variable 'va_list' à nettoyer.



    • %c Affiche un seul caractère.
    • %s Affiche une chaîne de caractères (telle que définie par la convention C). • %p L’argument de pointeur void * doit être affiché en hexadécimal.
    • %d Affiche un nombre décimal (base 10).
    • %i Affiche un entier en base 10.
    • %u Affiche un nombre décimal non signé (base 10).
    • %x Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules. • %X Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules. • %% Affiche un signe pourcentage.


Donc printf va parcourir chaque char du string ' char*' un par un. 
    Il lui faut un compteur nomé i qui vaudra 0 au départ.
    
On boucle sur char* tant que char[i] != '%'.
Des que l'on tombe sur un '%', on doit vérifier si le char suivant est un char normal ou si c'est un spécificteur de format (cspdiuxX%).
Si c'est un char normal, on l'affiche et on continue la boucle. Ceci sera fait avec une suite de if/else.
Si un if est déclenché, donc si un char == s.foramt, on appel la fonction lié à ce s.format.

Si c'est un s.format, il ne faudra pas incrémenter i avec le char '%' et son s.format. Il faudra juste modifier l'autre variable qui va stocker le nb de char afiché.
Une fois cette fnonction faite, on passe le reste des if et on recommance la boucle. 

*/

int     ft_printf(const char *format, ...){
    int i;
    int compteur;

    i = 0;
    compteur = 0;
    va_list = arg_list;
    va_start = (arg_list, format);

    while(format[i] != '\0'){
        if(format[i] == '%'){
            if(format[i + 1] == 'c'){
                write(format[i + 1]);
                compteur += 1;
                i += 2;
            }else if(format[i + 1] == 's'){
                compteur += printf_nb_string(va_arg(arg_list, char*));
                i += 2;
            }else if(format[i + 1] == 'p'){
                compteur += printf_nb_pointeur(va_arg(arg_list, void*));
                i += 2;
            }else if(format[i + 1] == 'd' || format[i + 1] == 'i'){
                compteur += printf_nb_integer(va_arg(varg_list, int));
                i += 2;
            }else if(format[i + 1] == 'u'){
                compteur += printf_nb_unsigedInteger(va_arg(arg_list, unsigned int));
                i += 2;
            }else if(format[i + 1] == 'x'){
                //ce seront les même fonction mais avec un retour différent en min ou maj.
                compteur += printf_nb_hexadecimal(va_arg(arg_list, unsigned int));
                i += 2;
            }else if(format[i + 1] == 'X'){
                //ce seront les m^me fonction mais avec un retour différent en min ou maj.
                compteur += printf_nb_hexadecimal(va_arg(arg_list, unsigned int));
                i += 2;
            }else if(format[i + 1] == '%'){
                compteur += printf_nb_pourcent(va_arg(arg_list, char));
                i += 2;
            }
        }else{
            i++;
            compteur += 1;
        }
    }
    va_end = arg_list;
    return(compteur);
}