/*
 * Completare il programma C che, dato un file di testo contente una sequenza di stringhe,
 * determini quante stringhe, quanti caratteri consonanti, vocali, maiuscoli e minuscoli 
 * appaiono nel file.

Esempio di un file di input:
 
vi troverete Bene col fruTTo della Vita se ne eviterete  ogni abuso nella Vita

Un esempio di esecuzione e':

Digitare il nome del file di input: in.txt
Digitare il nome del file di output: out.txt
 
Dopo l'esecuzione del programma, il file out.txt conterrà:

Occorrenze delle vocali: 30
Occorrenze delle consonanti: 34
Occorrenze delle maiuscole: 5
Occorrenze delle minuscole: 59
Numero stringhe: 14
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define NCAR 64

FILE *ApriFile(char mode[]);
void Statistics(char stringa[], int *c, int *v, int *m, int *M);
void ScriviRisultato(FILE *fpout, int c, int v, int m, int M, int n_stringhe);

int main(int argc, char** argv) {
    FILE *fp;
    int n_occ = 0, voc = 0, cons = 0, min = 0, Mai = 0;
    int v, c, m, M;
    char str[NCAR];

    fp = ApriFile("r");
    while (fscanf(fp, "%s", str) != EOF) {
        n_occ++;
        Statistics(str, &v, &c, &m, &M);
        voc += v;
        cons += c;
        min += m;
        Mai += M;

    }


    fclose(fp);

    fp = ApriFile("w");

    ScriviRisultato(fp, voc, cons, min, Mai, n_occ);
    fclose(fp);

    return (EXIT_SUCCESS);
}

/*
 La funzione ApriFile apre il file il cui nome e' fornito in input
 dall'utente nella modalità specificata dal parametro formale mode
 e ritorna il puntatore al file
 */
FILE *ApriFile(char mode[]) {
	FILE *fp;
	char ch, nomefile[NCAR];
	int i=0;
	printf("Inserisci nome del file: ");
	while ((ch=getchar())!='\n'){
		nomefile[i]=ch;
		i++;
	}
	nomefile[i]='\0';
	fp=fopen(nomefile,mode);
	if(fp==NULL){
		printf("Errore, impossibile aprire il file\n");
		exit(EXIT_FAILURE);
	}
	printf("File aperto con successo\n");
	return (fp);
    /* FUNZIONE DA COMPLETARE*/
}

/*
 * La funzione statistics prende in input una stringa (letta dal file) e restituisce nei parametri passati alla funzione, 
 * il numero di caratteri consonanti, vocali, minuscoli e maiuscoli  che appaiono nel file.
 */
void Statistics(char stringa[], int *c, int *v, int *m, int *M) {
	int i;
	*c=0;
	*v=0;
	*m=0;
	*M=0;
	for(i=0;stringa[i]!='\0';i++){
		if((stringa[i]=='a')|| (stringa[i]=='e')|| (stringa[i]=='i')|| (stringa[i]=='o')|| (stringa[i]=='u') && (stringa[i]!=' ')){
			(*v)++;
			(*m)++;
		}else if((stringa[i]=='A')|| (stringa[i]=='E')|| (stringa[i]=='I')|| (stringa[i]=='O')|| (stringa[i]=='U') && (stringa[i])!=' '){
			(*v)++;
			(*M)++;
		}else if((stringa[i]=='b')|| (stringa[i]=='c')|| (stringa[i]=='d')|| (stringa[i]=='f')|| (stringa[i]=='g')|| (stringa[i]=='h')|| (stringa[i]=='l')|| (stringa[i]=='m')|| (stringa[i]=='n')|| (stringa[i]=='p')|| (stringa[i]=='q')|| (stringa[i]=='r')|| (stringa[i]=='s')|| (stringa[i]=='t')|| (stringa[i]=='v')|| (stringa[i]=='z')&& (stringa[i]!=' ')){
			(*c)++;
			(*m)++;
		}else if((stringa[i]=='B')|| (stringa[i]=='C')|| (stringa[i]=='D')|| (stringa[i]=='F')|| (stringa[i]=='G')|| (stringa[i]=='H')|| (stringa[i]=='L')|| (stringa[i]=='M')|| (stringa[i]=='N')|| (stringa[i]=='P')|| (stringa[i]=='Q')|| (stringa[i]=='R')|| (stringa[i]=='S')|| (stringa[i]=='T')|| (stringa[i]=='V')|| (stringa[i]=='Z')&& (stringa[i]!=' ')){
			(*c)++;
			(*M)++;
		}
	}
	
}

/*
 La funzione ScriviRisultato scrive su file l'ouput come descritto nella traccia.
 * Ha i parametri: nome del file su cui salvare il risultato, tutti i dati calcolati nella funzione precedente:  
 * il numero di caratteri consonanti, il numero delle vocali, il numero di caratteri maiuscoli e minuscoli che appaiono nel file 
 * e infine il numero totale di stringhe trovate nel file.
 */
void ScriviRisultato(FILE *fpout, int c, int v, int m, int M, int n_stringhe) {
	fprintf(fpout,"Numero di vocali: %d\n", v);
	fprintf(fpout,"Numero di consonanti: %d\n", c);
	fprintf(fpout, "Numero di maiuscole:%d\n", M);
	fprintf(fpout, "Numero di minuscole:%d\n", m);
	fprintf(fpout, "Numero di stringhe:%d\n", n_stringhe);
    /* FUNZIONE DA COMPLETARE*/
}
