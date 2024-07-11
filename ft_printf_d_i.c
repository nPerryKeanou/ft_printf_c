#include <stdio.h>
#include <stdarg.h>

//On va ici utiliser la fonction ft_putnbr pour afficher un décimal et aussi retourner le nb de chiffre du décimal qui sera la variable i.
/*
     un int sur 32 bits :

La valeur maximale positive est 2 147 483 647.
La valeur minimale négative est -2 147 483 648.
*/

int printf_nb_integer(int nb){
    int i;

    i = 0;
    if (nb < 0)             //condition si le nb est négatif.
	{
		write(1, '-', 1);   //affiche le signe négatif.
		nb = -nb;           //transforme le nb négatif en positif.
        i += 1;             //incrémente la variable à retourner.
	}
	if (nb >= 10)           //condition si le nb est plus grand ou égale à 10. Maintenant que la conversion est faite et que nb est plus grand que 10. On peut commencer la récursion.
	{
        i += 1;             
		ft_putnbr(nb / 10); //appel recursive de la partie entière de nb. ex : (123 / 10) == 12
		ft_putnbr(nb % 10); //appel recursive de la dernière partie de nb. ex : (123 % 10) == 3
	}
	else{
        i += 1;
        ft_putchar(nb + '0'); //affiche le chifre correspondant à nb. '1' '2' '3'.
    }
    return(i);
}

/*
    Explication : 

    1. Cas initial :
        Nous appelons 'ft_putnbr(-123)'. Comment nb est négatif, nous transformons nb en posifif et nous afficherons sont signes. C'est plus simple pour le code.

    2. Récursion :
        À ce stade, nb vaut 123.
        La condition (nb >= 10) est vrai donc nous rentrons dans le bloc.

    3. Première appel récursif ('ft_putnbr(nb / 10)') :
        Nous appelons ft_putnbr(123 / 10), ce qui donne ft_putnbr(12).
        La fonction se rappel avec ' nb = 12'.

    4. Second appel Récursif ('ft_putnbr(nb % 10)') :
        Nous appelons ft_putnbr(123 % 10), ce qui donne ft_putnbr(3).
        La fonction se rappel avec 'nb = 3'.
    
    5. Cas de base ('nb < 10') :
        Maintenant que nb vaut 3, il est plus petit que 10. Donc nous entrons dans le bloc else.
        'ft_putchar(nb + '0') est appelé, ce qui affiche le chiffre 3.
    
    6. Retour dans les appels récursifs.
        

*/
