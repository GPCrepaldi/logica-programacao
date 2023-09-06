#include <bits/stdc++.h>

using namespace std;

int main () {

    int x, n, dentro = 0, fora = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        cout << "Digite um numero: ";
        cin >> x;

        if (x >= 10 && x <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }
    
    cout << dentro << " Dentro" << endl;
    cout << fora << " Fora" << endl;

return 0;
}