#include <iostream>
using namespace std;

class Fractions {
public:
    // Metodo per calcolare l'MCD senza usare std::gcd
    int mcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Metodo per fare la divisione tra numeratore e denominatore
    double division(int numerator, int denominator) {
        if (denominator == 0) {
            cout << "Errore: divisione per zero!" << endl;
            return 0;
        }
        return (numerator) / denominator;
    }
};

int main() {
    int numerator, denominator;

    // Creazione dell'oggetto di tipo Fractions
    Fractions frac;

    // Input dell'utente per numeratore e denominatore
    cout << "Inserisci il numeratore: ";
    cin >> numerator;
    cout << "Inserisci il denominatore: ";
    cin >> denominator;

    // Calcola l'MCD
    int mcd_result = frac.mcd(numerator, denominator);
    cout << "Il massimo comune divisore (MCD) tra " << numerator << " e " << denominator << " è: " << mcd_result << endl;

    // Calcola il risultato della divisione
    double div_result = frac.division(numerator, denominator);
    cout << "Il risultato della divisione tra " << numerator << " e " << denominator << " è: " << div_result << endl;

    return 0;
}
