#define DIM_COGN 50
#define NUM_VOTI 5
#define NUM_STUD 5

void caricaTab(Studente t[]);

// Struttura per la data
typedef struct {
  int giorno;
  int mese;
  int anno;
} Data;
// Struttura per lo studente
typedef struct Studente {
  char cognome[DIM_COGN];
  Data data_nascita;
  int voti[NUM_VOTI];
} Studente;

int main(){
    void caricaTab(Studente t);
}

void caricaTab(Studente t[]){
    

}
