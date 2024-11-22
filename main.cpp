#include <iostream>
using namespace std;
int main() {
    int n, i, iMin;

    cout << "quanti atleti ci sono nella gara" << endl;
    cin >> n;
    string nomi[n], nazionalità[n];
    double tempi[n];

    for (i = 0; i <= n - 1; i++) {
        cout << "inserisci il nome dell'atleta" << endl;
        cin >> nomi[i];
        cout << "inserisci la nazionalità dell'atleta" << endl;
        cin >> nazionalità[i];
        cout << "inserisci il tempo dell'atleta" << endl;
        cin >> tempi[i];
    }
    cout << "di quale atleta vuoi le informazioni" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << i + 1 << "il nome dell'atleta è " << nomi[i] << " la sua nazionalità è " << nazionalità[i] << " e il suo tempo è " << tempi[i] << endl;
    }
    cout << "ora ti dirò il vincitore di questa gara" << endl;
    double min;

    iMin = 0;
    min = tempi[0];
    for (i = 0; i <= n - 1; i++) {
        if (tempi[i] < min) {
            iMin = i;
            min = tempi[i];
        }
    }
    cout << "il vincitore di questa gara è " << nomi[iMin] << " dalla nazione " << nazionalità[iMin] << " con un tempo di " << tempi[iMin] << endl;
    return 0;
}

