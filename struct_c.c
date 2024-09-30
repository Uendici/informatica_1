#define DIM_COGN 50
#define NUM_VOTI 5
#define NUM_STUD 5

void caricaTab(Studente t[]);//Carica la tabella chiedendo dati all'utente o generandoli casualmente.
void stampaTab(Studente t[]);//Stampa la tabella allineando correttamente i dati.

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
  caricaTab(t);
  stampaTab(t);
}

void caricaTab(Studente t[]){
  for(int i = 0; i < NUM_STUD; i++){
    scanf("%s",&t[i].cognome);
  }

}

void stampaTab(Studente t[]){
  for(int i = 0; i < NUM_STUD; i++){
      printf("%d\n",t[i].cognome);
    }
}
