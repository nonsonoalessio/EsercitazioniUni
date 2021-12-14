/*
Leggi; scrivi su "prova.txt"
Leggi finché non si inserisce "$"; verifica chiusura del file
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//   ============
// || DA RIVEDERE ||
//   ============




FILE *ApriFile(char *);

int main(){
    FILE *fp;
    char path[] = "prova.txt";
    char *pahtPoint = &path;
    fp = ApriFile(char *pathPoint);
    return 0;
}

FILE *ApriFile(char *path){
    FILE *fp;
    return fp;
}
