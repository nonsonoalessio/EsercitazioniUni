/*
Formattazione del file:

PRIMA RIGA: numRighe(dimW), numColonne(dimH), dominante
RIGA nESIMA: valoreNonDominante, posH, posW

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100

FILE *apriLettura();
FILE *apriScrittura();

int main(){
    int altezza, larghezza, dominante, valNonDominante, posH, posW, i, j;
    int mat[MAXSIZE][MAXSIZE];
    char ch;
    FILE *reading;
    FILE *writing;
    printf("Genero file casuale...\n");
    system("python3 genFile.py");
    reading = apriLettura();
    fscanf(reading, "%d", &altezza);
    fscanf(reading, "%d", &larghezza);
    fscanf(reading, "%d", &dominante);
    for (i = 0; i < altezza; i++){
        for (j = 0; j < larghezza; j++)
        {
            mat[i][j] = dominante;
        }
        
    }
    writing = apriScrittura();
    while ((ch = getc(reading)) != EOF){
        fscanf(reading, "%d %d %d",&posW, &posH, &valNonDominante);
        mat[posW][posH] = valNonDominante;
    }

    for (i = 0; i < altezza; i++){
        for(j = 0; j < larghezza; j++){
            fprintf(writing, "%d ", mat[i][j]);
        }
        fprintf(writing, "\n");
    }
    
    fclose(writing);
    fclose(reading);    
    return 0;
}

FILE *apriLettura(){
    char path[] = "lettura.txt"; 
    FILE *fpoint;
    fpoint = fopen(path, "r");
    return fpoint;
}

FILE *apriScrittura(){
    char path[] = "scrittura.txt";
    FILE *fpoint;
    fpoint = fopen(path, "w");
    return fpoint;
}