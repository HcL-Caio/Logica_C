#include <stdio.h>
#include <ctype.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    char caractere;

    printf("Digite uma letra: ");
    scanf(" %c", &caractere);

    char lower_char = tolower(caractere);

    printf("--- Analisando o caractere '%c' ---\n", caractere);

    switch (lower_char) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

        printf("'%c' É uma vogal.\n", caractere);
        break;

    default:
        printf("'c' É uma consoante (ou não é uma letra)..\n", caractere);
        break;
        }
        printf("--- Fim de análise ---\n");
    }
