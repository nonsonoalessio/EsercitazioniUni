/*
Dato un file con 10 interi, uno per riga:
Scrivere un file che:
    * acquisisca l'array e lo stampi a video;
    * stampi max e min, restituiti dalle funzioni:
        * int max(int a[], int dim);
        * int min(int a[], int dim).   
*/

#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

int max(int a[], int i);
int min(int a[], int i);

// =========================
// DA SOTTOPORRE A REVISIONE
// =========================

int main(){
    FILE *fp;
    int a[SIZE], i, max, min;
    char path[] = 'input.bat';
    fp = fopen(path, "r");
    for(i = 0; i < SIZE; i++){
        fscanf(fp, "%d", &a[i]);
        max = max(int a[], int i);
    }
    int a[SIZE], i;
    return 0;
}

int max(int a[], int i){
    int max;
    if(i==0){
        max = a[];
        return max;
    }
    if(a[] > max){
        max = a[];
        return max;
    }
}