#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;

    cout << "Quantos numeros voce vai digitar: ";
    cin >> n;

    double vet [n];

    for (int i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet [i];
    }

    cout << endl << "Numeros digitados!" << endl;
    cout << fixed << setprecision(1);
    for (int i = 0; i < n; i++) {
        cout << vet [i] << endl;
    }
    
return 0;
}