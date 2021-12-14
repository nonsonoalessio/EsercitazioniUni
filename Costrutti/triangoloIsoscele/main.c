#include <stdio.h>
#include <stdlib.h>

int main(){
    int spazio, riga, i, j;
    printf("Immettere altezza del triangolo: ");
    scanf("%d", &spazio);
    riga = spazio;
    spazio--;
    for(i = 0; i < spazio; i++){
        printf(" ");
    }
    printf("*");
    spazio--;
    printf("\n");
    for(j = riga; j >= 0; j++){
        for (i = 0; i < spazio; i++){
        printf(" ");
        }
    printf
    }

    return 0;
}