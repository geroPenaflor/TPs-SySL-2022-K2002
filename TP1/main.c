// José Gerónimo González Peñaflor

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){
    char caracter;
    caracter = getchar ();
    while (caracter != '\n'){
        if (islower (caracter)){
            printf ("%c" , toupper (caracter));
        } 
        else if (isupper (caracter)){
            printf ("%c" , tolower (caracter));
        } 
        else if (isdigit (caracter)){
        }
        else{
            printf ("%c" , caracter);
        }
        caracter = getchar ();
    }

    return EXIT_SUCCESS;
}