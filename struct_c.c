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
int stampaMedia(Studente t[]);//Stampa la media voti per ogni studente e conta quante medie sono ≥ 6.

int main(){
  Studente t[NUM_STUD];
  int stato_cognome,media_maggiore_6;
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
  media_maggiore_6 = stampaMedia(t); 
  printf("gli studenti con la media maggiore al 6 sono: %d",media_maggiore_6);
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
/*
int stampaMedia(Studente t[]){
  int somma = 0,media;
  for(int i = 0; i < NUM_STUD; i++){
    for(int j = 0; j < NUM_VOTI - 1; j++){
      media = 0;
      somma = t[i].voti[j] + t[i].voti[j+1]; 
      media = somma / NUM_VOTI;
    }
    printf("la media dello studente %s è %d\n", t[i].cognome,media );
  }
  return media;
}
*/
int stampaMedia(Studente t[]) {
    int somma, media, count = 0;
    
    for (int i = 0; i < NUM_STUD; i++) {
        somma = 0;
        for (int j = 0; j < NUM_VOTI; j++) {
            somma += t[i].voti[j];  // Somma tutti i voti dello studente
        }
        media = somma / NUM_VOTI;  // Calcola la media
        
        printf("La media dello studente %s è %d\n", t[i].cognome, media);
        
        if (media >= 6) {
            count++;  // Conta gli studenti con media maggiore o uguale a 6
        }
    }
    
    return count;  // Restituisce il numero di studenti con media ≥ 6
}