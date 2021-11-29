# EsercitazioniUni
 *Un repo contenente le varie esercitazioni in C per l'esame di Fondamenti di Programmazione.*

 *A cura di: A. D. Giura, L. Veniero, G. Foschillo, C. Cuomo, F. Sabatino.*

 # 1: Istruzioni per l'uso
 Per ogni esercizio, si crei una cartella in cui andare a posizionare il progetto (o il file sorgente ```nomefile.c```).
 
 Opzionalmente, si può scrivere un file ```README.md``` per andare a sintetizzare il contenuto del programma, in modo da avere una panoramica di *cosa fa* quel programma e quali sono i concetti generali che si possono trarre da quel programma:
 
 Esempio
 > In questo programma, si pone un esempio della struttura ```for```.

 # 2: Richiesta di collaborazione & correzioni
 Per qualiasi necessità di correzione, all'interno della cartella del programma, sarebbe opportuno creare una nuova cartella chiamata, ad es., ``erroriDiCompilazione`` oppure ``compilazioe`` e/o qualsiasi altro nome suggerisca la presenza di screenshot (o, in alternativa, log in formato file di testo ``.txt``).

 > Sarebbe preferibile adoperare la nomeclatura ``camelCased`` per tutti i file. Tale nomenclatura, prevede la prima iniziale minuscola, tutte le parole scritte attaccate, la cui iniziale è maiuscola (Come nell'esempio della cartella con gli errori).

 Per qualsiasi richiesta di correzione, basta caricare il file nel repo e richiedere aiuto, con opportuno commento nel ``commit`` (vedasi paragrafi seguenti). Caricando la correzione, buona norma sarebbe quella di commentare, all'interno del sorgente, oppure mediante apposita funzionalità di GitHub, le varie aggiunte/rimozioni/modifiche.

 # 3: Come si usa GitHub?
 Innanzitutto, bisogna accedere a [GitHub](https://www.github.com/) e creare un account, e scaricare il client Desktop a [questo link](https://desktop.github.com/).

 A questo punto, dopo aver effettuato il login, bisognerà "clonare" (cioè lasciare che GitHub salvi in automatico i file del progetto sul proprio HDD) il repo.

 Basterà aprire nel proprio editor (NetBeans, VS Code e qualsiasi altro IDE si ritiene opportuno) la cartella in cui viene clonato il repo per iniziare la magia (ed iniziare a lavorare).

Una volta apportate delle modifiche, il sistema di caricamento del file segue questo schema:
1. si esegue il commit in cui si riassume in breve le modifiche apportate.

    ![commit](/assets/readme/commit.png)

    Nel campo ``Update README.md`` qui evidenziato, si scriva un breve commento rispetto all'aggiornamento, come per esempio:

    > Aggiunta funzione per il calcolo della media.


    Qualora sussistano dei problemi, o si abbiano dei dubbi rispetto all'esecuzione del problema, si compili anche il campo ``Description``, come per esempio:

    > Il programma non compila.

    > Non so come si scrive la funzione per controllare se il numero è multiplo di x.

    A questo punto si può procedere con il pulsante ``Commit to main``.

    **N.B.: è di _vitale_ importanza scrivere un commento al commit efficiente, in quanto consente di saltare rapidamente all'errore e, quindi, alla risoluzione del problema.**

    **N.B. 2, la vendetta: prima di fare commit, assicurarsi che il file sia salvato in locale con gli ultimi aggiornamenti, altrimenti GitHub non rileverà le ultime modifiche. Solitamente è sufficiente usare la combinazione di tasti ``CTRL+S`` nell'IDE oppure, da interfaccia grafica dell'IDE, ``File > Salva``.**

    Questo perché consente di visualizzare una cosa del genere:

    ![efficacia del commit](/assets/readme/effCommit.png)

    In modo immediato, visualizzo che le ultime modifiche mi hanno prodotto un aggiornamento del file ``README.md``. Il commit può essere tranquillamente scritto in italiano, in testo normale (senza formalismi di codice).

2. si *pusha* il commit.

    Una volta steso il commit e premuto su ``Commit to main``, si arriva qui:

    ![committed](/assets/readme/committed.png)

    A questo punto, il commit può essere ritirato, premendo sul bottone ``Undo`` in basso o, in alternativa, pushato (cioè caricato) all'``Origin``, cioè il repo presente su GitHub, in modo da consentire l'accesso al codice agli altri membri (ciò non avviene in tempo reale, come ad. es. su Google Docs, per una questione di Bug Security: in altre parole, serve per non far sminchiare il codice nel caso qualcuno commetta delle imprecisioni).

3. pull di commit da ``Origin``.

    Quando viene eseguita da remoto un'operazione, bisogna innanzitutto fare il *fetch* di ``Origin``, mediante il bottone ``Fetch Origin`` con le freccette:

    ![fetch](/assets/readme/fetch.png)

    Questo consentirà la verifica di nuovi aggiornamenti:

    ![prepull](/assets/readme/prePull.png)

    Che si dovranno *pullare* col bottone ``Pull origin``. A questo punto, si è pronti per lavorare all'ultima versione della codebase.

4. cambiamenti nel codice.

    Quando vengono apportate delle modifiche, il client di GitHub va automaticamente ad eseguire un riepilogo delle modifiche, evidenziando in verde le aggiunte ed in rosso le modifiche:

    ![modifiche](/assets/readme/updates.png)

    In questo esempio si nota l'aggiunta di ulteriori righe, mentre vi è la cancellazione della riga 64, con l'aggiunta di nuovo testo.

# 4: Materiale bonus
* 🎤 [Server Discord](https://discord.gg/nmNnn9BM)

> Valido per 7 giorni, a partire dal: 29/11/2021.

* 📝 [Notion per FdP](https://nonsonoalessio.notion.site/Fondamenti-di-programmazione-868977c27eea4dd9bfc9169cbb28567e)