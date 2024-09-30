#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM_COGN 50
#define NUM_VOTI 5
#define NUM_STUD 5

void caricaTab(Studente t[]);//Carica la tabella chiedendo dati all'utente o generandoli casualmente.
void stampaTab(Studente t[]);//Stampa la tabella allineando correttamente i dati.
int ricercCog(Studente t[], char cog[]);//Cerca uno studente per cognome, restituendo l'indice (o -1 se non trovato).

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
  stampaTab(t);
  stato_cognome = ricercCog(t,cog);
  if(stato_cognome > -1){
    printf("il cognome si trova nella %d posizione.\n",stato_cognome);
  }
  
}

void caricaTab(Studente t[]){
  for(int i = 0; i < NUM_STUD; i++){
    scanf("%s",&t[i].cognome);
  }
  for(int i = 0; i < NUM_STUD; i++){
    scanf("%d",t[i].data_nascita);    
  }

void stampaTab(Studente t[]){
  for(int i = 0; i < NUM_STUD; i++){
      printf("%s\t",t[i].cognome);
      printf("%d\t",t[i].data);
      for(int j = 0; j < NUM_VOTI; j++){
        printf("%d",t[i].voti);
      }
    }
}

int ricercCog(Studente t[], char cog[]){
  for(int i = 0; i < NUM_STUD; i++){
    if(t[i].cognome == cog[DIM_COGN]){
      return i;
    }else{
      return -1;
    }
  }
}
