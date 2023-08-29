#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, x, soma = 0;

    cout << "Quantos numeros serao digitados: ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        cout << "Digite um numero: ";
        cin >> x;

        soma = soma + x;
    }

    cout << "A soma dos numeros e: " << soma;
    
}