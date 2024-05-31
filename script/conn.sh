#!/bin/bash

# Funzione esercizio1
esercizio1() {
    wget --spider -q https://www.google.com
    if [ $? -eq 0 ]; then
        echo "e' connesso a internet :)."
    else
        echo "Non e' connesso a internet :("
    fi
}

# Funzione esercizio2
esercizio2() {
    local URL="https://docs.google.com/document/d/1579tuUjmZ6zIB-FG0SoQ-2kEPeGQ_7iMqQX0ofySEHE/edit"
    local NomeFileDestinazione=$1

    wget -O "$NomeFileDestinazione" "$URL"
    if [ $? -eq 0 ]; then
        echo "Download completato. File salvato come $NomeFileDestinazione ;D"
    else
        echo "download NON avvenuto >:3."
    fi
}

# Funzione esercizio3
esercizio3() {
    local file_remoto=$1
    local file_locale=$2

    wget -O "$file_locale" "$file_remoto"
    if [ $? -eq 0 ]; then
        echo "File scaricato e salvato come $file_locale."
    else
        echo "Errore nel download del file."
    fi
}

# Funzione esercizio4
esercizio4() {
    local file=$1

    if [ -e "$file" ]; then
        echo "Il file $file c'e'"
    else
        echo "Il file $file non c'e'"
    fi
}


# Funzione esercizio5
esercizio5() {
    local lcl_file=$1

    if [ -e "$lcl_file" ]; then
        echo "Il file $lcl_file e' disponibile"
    else
        echo "Il file $lcl_file non e' disponibile."
    fi
}

# Funzione esercizio6
esercizio6() {
    while true; do
        echo "Messaggio ogni 3 secondi. Premere CTRL+C per uscire."
        sleep 3
    done
}

# Funzione loop con terminazione se trova un file
esercizio7() {
    local lcl_file="file_terminazione"

    while true; do
        if [ -e "$lcl_file" ]; then
            echo "File $lcl_file trovato. Script terminato."
            break
        else
            echo "Messaggio ogni 3 secondi. Premere CTRL+C per terminare."
        fi
        sleep 3
    done
}

# Main:
echo "Seleziona un'opzione:"
echo "1) Controllare la connessione Internet"
echo "2) Scaricare un file remoto con nome scelto"
echo "3) Scaricare un file remoto con nome e destinazione specificati"
echo "4) Verificare la presenza di un file su disco"
echo "5) Verificare la presenza di un file lel_file su disco"
echo "6) Stampare un messaggio ogni 3 secondi (CTRL+C per terminare)"
echo "7) Stampare un messaggio ogni 3 secondi e terminare se trova un file"

read -p "Inserisci il numero dell'opzione scelta: " option

case $option in
    1)
        esercizio1
        ;;
    2)
        read -p "Inserisci il nome del file di destinazione: " dest_name
        esercizio2 "$dest_name"
        ;;
    3)
        read -p "Inserisci l'URL del file remoto: " remote_url
        read -p "Inserisci il nome del file locale: " local_name
        esercizio3 "$remote_url" "$local_name"
        ;;
    4)
        read -p "Inserisci il nome del file da verificare: " file_name
        esercizio4 "$file_name"
        ;;
    5)
        read -p "Inserisci il nome del file da verificare: " file_name
        esercizio5 "$file_name"
        ;;
    6)
        esercizio6
        ;;
    7)
        esercizio7
        ;;
    *)
        echo "questo numero non e' tra quelli elencati!!"
        ;;
esac



