Completare il programma C che, letta da file una matrice quadrata contenente numeri interi, 
  costruisca un array contenente nell'elemento i-mo la somma dei valori della riga i-ma della matrice,
  individui l'indice di riga di somma minima e l'indice di riga di somma massima e scambi gli elementi delle due righe,
  salvando in un file di testo la matrice così modificata.
  Si assuma che il file di testo contenente la matrice abbia sulla prima riga il valore della dimensione di riga e di colonna della matrice quadrata 
  e che gli elementi della matrice si trovino sulle righe successive.
  Per completare il programma, si richiede la realizzazione di quattro funzioni:
  - una funzione che riceva in ingresso una matrice quadrata e la sua dimensione di riga e di colonna e restituisca l'array contenente le somme di riga
  - una funzione che riceva in ingresso un array e la sua dimensione e restituisca in uscita l'indice dell'elemento massimo e l'indice dell'elemento minimo
  - una funzione che riceva in ingresso una matrice quadrata, la sua dimensione di riga e di colonna e due indici h e k e scambi i valori della riga h-ma e della riga k-ma
  - una funzione che scriva su file di testo gli elementi della matrice modificata
  Delle funzioni richieste è fornito il prototipo in accordo al quale va realizzato il codice.
 
 
  Ad esempio nel caso della seguente matrice di interi:

3 1 1 2 0
2 0 0 1 2
1 1 1 1 2
6 2 2 0 2 
6 2 1 0 1
 
  la funzione dovrebbe riempire il vettore v come segue:
 
 v = (7,5,6,12,10)

  L'indice della riga con la somma massima è 3, mentre l'indice della riga con la somma minima è 1.
  La matrice che si ottiene a valle dello scambio di righe richiesto è quindi:

3 1 1 2 0
6 2 2 0 2 
1 1 1 1 2
2 0 0 1 2
6 2 1 0 1

  Il file di testo contenente la matrice da leggere potrebbe avere la seguente organizzazione:
5
3 1 1 2 0
2 0 0 1 2
1 1 1 1 2
6 2 2 0 2 
6 2 1 0 1
  
  Un esempio di esecuzione e':
  
Inserire nome file: matrice.txt
matrice letta:
3 1 1 2 0 
2 0 0 1 2 
1 1 1 1 2 
6 2 2 0 2 
6 2 1 0 1 


Vettore delle somme:
7 5 6 12 10 

L'indice della riga con somma minima e' 1
L'indice della riga con somma massima e' 3

Matrice dopo lo scambio delle righe:
3 1 1 2 0 
6 2 2 0 2 
1 1 1 1 2 
2 0 0 1 2 
6 2 1 0 1 

Inserire nome file: matout.txt

Matrice salvata
