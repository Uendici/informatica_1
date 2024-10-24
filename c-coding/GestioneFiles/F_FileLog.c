#include <stdio.h>
#include <time.h>
#include <string.h>

void writeLog(FILE *logFile, const char *message) {
    // Otteniamo il timestamp corrente
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Scriviamo il messaggio di log nel formato desiderato
    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}


int main(int argc, char *argv[]) {
    // Creazione del file di log in modalità append
    FILE *logFile = fopen("log.txt", "a");
    if (logFile == NULL) {
        perror("Errore nell'apertura del file di log");
        return 1;
    }

    writeLog(logFile, "Messaggio di log 1");
    writeLog(logFile, "Messaggio di log 2");
    // Puoi chiamare writeLog() con altri messaggi

    fclose(logFile);  // Chiude il file di log
    return 0;
}
