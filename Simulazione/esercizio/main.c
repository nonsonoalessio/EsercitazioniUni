#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NCAR 300
FILE *ApriFile(char *);
void inverti(char []);

int main () {
    char  stringa[NCAR];
    FILE *fpin;
    
    fpin=ApriFile("r");
    
    while (fscanf(fpin, "%s", stringa)!=EOF){
        inverti(* stringa);
        printf("%s %d\n", stringa, (int)strlen(stringa));   
        }
    fclose(fpin);
   return EXIT_SUCCESS;
}



/* inverte la stringa data in input usando il medesimo array */
void inverti(char *str[]){
/* FUNZIONE DA IMPLEMENTARE */
    int i, j;
    char temp;
    j = strlen(str);
    printf("Ho acquisito strlen, che vale %d.\n", j);
    for (i = 0; i < j; i++){
        printf("Sono entrato nel for\n");
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }

}



/* 
La funzione consente l'apertura del file,  ha come parametro una stringa che rappresenta la modalità di apertura. 
Restituisce un puntatore al file.
*/

FILE *ApriFile(char* mode)
{
    /* FUNZIONE DA IMPLEMENTARE */
    FILE *fp;
    fp = fopen("parole.txt", mode);
    if (fp == NULL){
        exit(1);
    }
    return fp;

      
}