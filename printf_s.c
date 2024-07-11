#include <stdio.h>
#include <stdarg.h>

//Ici simplement, j'affiche tout les char en boucle et je renvoies le nb de char avec la variable i.
// i qui est à la fois l'index du string et le nombre de loop.
int printf_nb_string(char* str){
    int i;

    i = 0;
    while(str[i] != '\0'){
        write(str[i]);
        i++;
    }
    return(i);
}