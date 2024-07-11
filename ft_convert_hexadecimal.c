#include <stdio.h>
#include <stdarg.h>

/*
    Modification de la Fonction putnbr_hex :

    La fonction putnbr_hex est maintenant déclarée comme une fonction qui retourne un entier (int), qui représente le nombre de chiffres hexadécimaux.
    Comptage des Chiffres :

    La fonction putnbr_hex utilise la récursivité pour diviser le nombre par 16 jusqu'à ce que le quotient soit inférieur à 16.
    À chaque étape récursive, elle incrémente un compteur count qui représente le nombre de chiffres hexadécimaux déjà affichés.
    Affichage et Retour :

    Lorsque la récursion atteint le cas de base (quand num < 16), elle affiche le dernier chiffre hexadécimal.
    Elle retourne ensuite count, qui est le nombre total de chiffres hexadécimaux affichés.

*/
int ft_convert_hexadecimal(unsigned int nb){
    int count;
    int remainder
    
    if (num < 16) {
    // Cas de base : lorsque num est inférieur à 16, un seul chiffre hexadécimal
        if (num < 10) {
            putchar('0' + num);
        } else {
            putchar('A' + num - 10);
        }
        return 1; // Retourne 1 chiffre
    } else {
        count = putnbr_hex(num / 16); // Appel récursif pour diviser par 16
        remainder = num % 16;
        if (remainder < 10) {
            putchar('0' + remainder);
        } else {
            putchar('A' + remainder - 10);
        }
        return(count + 1); // Retourne le nombre de chiffres + 1
    }
    return(0);
}
