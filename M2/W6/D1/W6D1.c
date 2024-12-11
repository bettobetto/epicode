#include <stdio.h>

void benvenuto() //funzione che mostra il benvenuto alla partita
 {
    printf("Benvenuto al gioco domande/risposte.\n");
    printf("Dovrai rispondere alle domande correttamente per acquisire punteggio.\n");
 }


/* funzione di svolgimento della partita con 3 domande e 3 risposte per ogni domanda
ad ogni domanda corretta viene incrementato il punteggio iniziale di 0*/
  int partita() 
   {
    char nome[25];
    char selezione;
    int punteggio = 0;
    printf("inserisci il tuo nome:\n");
    scanf("%c", &nome);
    printf("Benvenuto %c, rispondi correttamente alle domande.\n", nome);
    printf("Dovrai scegliere tra le risposte presenti.\n Ricorda: solo una è quella corretta.\n");


    printf("Domanda 1: A quale temperatura bolle l'acqua?\n");
    printf("A - 75 gradi\n B - 100 gradi\n C - 90 gradi\n");
    scanf("%c", &selezione);

    if (selezione == 'B')
    {
        printf("Risposta corretta!\n Hai guadagnato 1 punto.\n");
        punteggio++;
    } else
    {
        printf("Risposta errata, non demordere.\n");
    }

    printf("Domanda 2: Indicare la capitale dell'Italia?\n");
    printf("A - Roma\n B - Palermo\n C - Milano\n");
    scanf("%c", &selezione);

     if (selezione == 'A')
    {
        printf("Risposta corretta!\n Hai guadagnato 1 punto.\n");
        punteggio++;
    } else
    {
        printf("Risposta errata, non demordere.\n");
    }
 
    printf("Domanda 3: Indicare i colori dell'ape?\n");
    printf("A - Azzuro/verde\n B - Arancione/giallo\n C - Nero/giallo\n");
    scanf("%c", &selezione);

     if (selezione == 'C')
    {
        printf("Risposta corretta!\n Hai guadagnato 1 punto.\n");
        punteggio++;
    } else
    {
        printf("Risposta errata, non demordere.\n");
    }
     printf("Il tuo punteggio è: %d", punteggio);
   }

int main () //funzione centrale del programma che richiama le altre funzioni per la partita
{

    int scelta;
    benvenuto();
    printf("Seleziona l'opzione per:");
    printf("1 - Nuova partita\n 2 - Esci dal gioco\n"); //viene mostrato il menu del gioco
    scanf("%d", &scelta);
    switch(scelta)
    {
        case 1:
          partita();
        break;
        
        case 2:
          printf("Alla prossima!!\n");
        break;

        default:
        printf("Alla prossima");
        break;
    }
}