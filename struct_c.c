#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> 

#define DIM_COGN 50
#define NUM_VOTI 5
#define NUM_STUD 5

// Struttura per la data
typedef struct {
  int giorno;
  int mese;
  int anno;
} Data;
// Struttura per lo studente
typedef struct {
  char cognome[DIM_COGN];
  Data data_nascita;
  int voti[NUM_VOTI];
} Studente;

void caricaTab(Studente t[]);//Carica la tabella chiedendo dati all'utente o generandoli casualmente.
void stampaTab(Studente t[]);//Stampa la tabella allineando correttamente i dati.
int ricercCog(Studente t[], char cog[]);//Cerca uno studente per cognome, restituendo l'indice (o -1 se non trovato).

int main(){
  Studente t[NUM_STUD];
  int stato_cognome;
  char cog[DIM_COGN];

  srand(time(NULL));

  for (int i = 0; i < NUM_STUD; i++) {
    for (int j = 0; j < NUM_VOTI; j++) {
        t[i].voti[j] = rand() % 9 + 1; 
    }
}
  caricaTab(t);
  printf("nome\tnascita \t voti\n");
  stampaTab(t);
  printf("scrivi un nome da cercare:");
  scanf("%s", cog);
  stato_cognome = ricercCog(t,cog);
  if(stato_cognome > -1){
    printf("il cognome si trova nella %d posizione.\n",stato_cognome);
  }

}

void caricaTab(Studente t[]){
  for (int i = 0; i < NUM_STUD; i++) {
        printf("Inserisci il cognome dello studente %d: ", i + 1);
        scanf("%s", t[i].cognome); // Legge il cognome
        
        printf("Inserisci la data di nascita (gg mm aaaa): ");
        scanf("%d %d %d", &t[i].data_nascita.giorno, &t[i].data_nascita.mese, &t[i].data_nascita.anno); // Legge la data di nascita
    }
}
void stampaTab(Studente t[]){
  for(int i = 0; i < NUM_STUD; i++){
      printf("%s\t",t[i].cognome);
      printf("%02d/%02d/%04d\t",t[i].data_nascita.giorno,t[i].data_nascita.mese,t[i].data_nascita.anno);
      for(int j = 0; j < NUM_VOTI; j++){
        printf("%d ",t[i].voti[j]);
      }
      printf("\n");
    }
}

int ricercCog(Studente t[], char cog[]){
  for(int i = 0; i < NUM_STUD; i++){
    if (strcmp(t[i].cognome, cog) == 0) {
      return i;
    }
  }
  return -1;
}
