/*il programma calcola la media pesata di N esami dati in input dall'utente.
FORMULA MEDIA PESATA: (voto1*cfu1+voto2cfu2.....)/cfu1+cfu2...)*/



#include <stdlib.h>
#include <stdio.h>



int main(){
     int N, cfu,voto, i, cfuvotosomma=0, cfusomma=0,mediapesata ;
    printf("inserisci il numero di esami per cui vuoi calcolare la media:\n");                        /*il programma funziona correttamente*/
    scanf("%d",&N);
      for(i=0;i<N;i++) {
          printf("inserisci il %d voto ", i+1);
          scanf("%d" , &voto );
          printf("inserisci i cfu corrispondenti: ");
          scanf("%d", &cfu);
          cfuvotosomma=cfuvotosomma+(voto*cfu); 
          cfusomma=cfusomma+cfu;
          }

        mediapesata=(float)cfuvotosomma/cfusomma;
        printf("la media pesata di questi %d esami e': %d", N, mediapesata );
system("PAUSE");
    return 0;
}