#include <iostream>
using namespace std;

class Frazione {
public:

    int mcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    double division(int numeratore, int denominatore) {
        if (denominatore == 0) {
            cout << "Errore: divisione per zero!" << endl;
            return 0;
        }
        return (numeratore) / denominatore;
    }
};

int main() {
    int numeratore, denominatore;

    Frazione f1;

    cout << "Inserisci il numeratore: ";
    cin >> numeratore;
    cout << "Inserisci il denominatore: ";
    cin >> denominatore;

    int mcd_result = f1.mcd(numeratore, denominatore);
    cout << "Il massimo comune divisore (MCD) tra " << numeratore << " e " << denominatore << " è: " << mcd_result << endl;

    double div_result = f1.division(numeratore, denominatore);
    cout << "Il risultato della divisione tra " << numeratore << " e " << denominatore << " è: " << div_result << endl;

    return 0;
}
